-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Tempo de geração: 14-Fev-2024 às 23:17
-- Versão do servidor: 10.4.32-MariaDB
-- versão do PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Banco de dados: `Ginásio`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `Horário`
--

CREATE TABLE `Horário` (
  `CodHorário` varchar(50) NOT NULL,
  `HoraInício` time NOT NULL,
  `HoraFim` time NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Inscrição`
--

CREATE TABLE `Inscrição` (
  `NUtente` int(11) NOT NULL,
  `CodPreçário` varchar(50) NOT NULL,
  `CodHorário` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Modalidade`
--

CREATE TABLE `Modalidade` (
  `CodModalidade` int(11) NOT NULL,
  `CodTreinador` int(11) NOT NULL,
  `Designação` varchar(50) NOT NULL,
  `LocaldeFuncionamento` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Preçário`
--

CREATE TABLE `Preçário` (
  `CodPreçário` varchar(50) NOT NULL,
  `CodModalidade` int(11) NOT NULL,
  `NVezes` int(11) NOT NULL,
  `Preço` float(5,2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Treinador`
--

CREATE TABLE `Treinador` (
  `CodTreinador` int(11) NOT NULL,
  `Nome` varchar(50) NOT NULL,
  `Idade` tinyint(3) NOT NULL,
  `telefone` int(11) NOT NULL,
  `CodPostal` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Utente`
--

CREATE TABLE `Utente` (
  `Nutente` int(11) NOT NULL,
  `Nome` varchar(50) NOT NULL,
  `Idade` tinyint(3) NOT NULL,
  `CodPostal` varchar(50) NOT NULL,
  `telefone` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `Horário`
--
ALTER TABLE `Horário`
  ADD PRIMARY KEY (`CodHorário`);

--
-- Índices para tabela `Inscrição`
--
ALTER TABLE `Inscrição`
  ADD PRIMARY KEY (`NUtente`,`CodPreçário`),
  ADD KEY `fk_in_pr` (`CodPreçário`),
  ADD KEY `fk_in_ho` (`CodHorário`);

--
-- Índices para tabela `Modalidade`
--
ALTER TABLE `Modalidade`
  ADD PRIMARY KEY (`CodModalidade`),
  ADD KEY `fk_mo_tr` (`CodTreinador`);

--
-- Índices para tabela `Preçário`
--
ALTER TABLE `Preçário`
  ADD PRIMARY KEY (`CodPreçário`),
  ADD KEY `fk_pr_mo` (`CodModalidade`);

--
-- Índices para tabela `Treinador`
--
ALTER TABLE `Treinador`
  ADD PRIMARY KEY (`CodTreinador`),
  ADD UNIQUE KEY `telefone` (`telefone`);

--
-- Índices para tabela `Utente`
--
ALTER TABLE `Utente`
  ADD PRIMARY KEY (`Nutente`),
  ADD UNIQUE KEY `telefone` (`telefone`);

--
-- AUTO_INCREMENT de tabelas despejadas
--

--
-- AUTO_INCREMENT de tabela `Modalidade`
--
ALTER TABLE `Modalidade`
  MODIFY `CodModalidade` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `Treinador`
--
ALTER TABLE `Treinador`
  MODIFY `CodTreinador` int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT de tabela `Utente`
--
ALTER TABLE `Utente`
  MODIFY `Nutente` int(11) NOT NULL AUTO_INCREMENT;

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `Inscrição`
--
ALTER TABLE `Inscrição`
  ADD CONSTRAINT `fk_in_ho` FOREIGN KEY (`CodHorário`) REFERENCES `Horário` (`CodHorário`),
  ADD CONSTRAINT `fk_in_pr` FOREIGN KEY (`CodPreçário`) REFERENCES `Preçário` (`CodPreçário`),
  ADD CONSTRAINT `fk_in_ut` FOREIGN KEY (`NUtente`) REFERENCES `Utente` (`Nutente`);

--
-- Limitadores para a tabela `Modalidade`
--
ALTER TABLE `Modalidade`
  ADD CONSTRAINT `fk_mo_tr` FOREIGN KEY (`CodTreinador`) REFERENCES `Treinador` (`CodTreinador`);

--
-- Limitadores para a tabela `Preçário`
--
ALTER TABLE `Preçário`
  ADD CONSTRAINT `fk_pr_mo` FOREIGN KEY (`CodModalidade`) REFERENCES `Modalidade` (`CodModalidade`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
