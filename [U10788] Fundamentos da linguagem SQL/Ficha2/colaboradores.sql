-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Tempo de geração: 09-Fev-2024 às 23:43
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
-- Banco de dados: `colaboradores`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `Cidade`
--

CREATE TABLE `Cidade` (
  `nomeCidade` char(30) NOT NULL,
  `codPostal` char(9) NOT NULL,
  `distrit0` char(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Colaborador`
--

CREATE TABLE `Colaborador` (
  `nomeColaborador` varchar(50) NOT NULL,
  `morada` varchar(50) NOT NULL,
  `cidade` char(30) NOT NULL,
  `estadoCivil` enum('C','S','V','D') DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Diretor`
--

CREATE TABLE `Diretor` (
  `nomeColaborador` varchar(50) NOT NULL,
  `nomeEmpresa` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Empresa`
--

CREATE TABLE `Empresa` (
  `nomeEmpresa` varchar(50) NOT NULL,
  `cidade` char(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

-- --------------------------------------------------------

--
-- Estrutura da tabela `Trabalha`
--

CREATE TABLE `Trabalha` (
  `nomeColaborador` varchar(50) NOT NULL,
  `nomeEmpresa` varchar(50) NOT NULL,
  `salario` float(6,2) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Índices para tabelas despejadas
--

--
-- Índices para tabela `Cidade`
--
ALTER TABLE `Cidade`
  ADD PRIMARY KEY (`nomeCidade`);

--
-- Índices para tabela `Colaborador`
--
ALTER TABLE `Colaborador`
  ADD PRIMARY KEY (`nomeColaborador`),
  ADD KEY `fk_co_ci` (`cidade`);

--
-- Índices para tabela `Diretor`
--
ALTER TABLE `Diretor`
  ADD PRIMARY KEY (`nomeEmpresa`,`nomeColaborador`),
  ADD KEY `fk_di_co` (`nomeColaborador`);

--
-- Índices para tabela `Empresa`
--
ALTER TABLE `Empresa`
  ADD PRIMARY KEY (`nomeEmpresa`),
  ADD KEY `fk_em_ci` (`cidade`);

--
-- Índices para tabela `Trabalha`
--
ALTER TABLE `Trabalha`
  ADD PRIMARY KEY (`nomeEmpresa`,`nomeColaborador`),
  ADD KEY `fk_tr_co` (`nomeColaborador`);

--
-- Restrições para despejos de tabelas
--

--
-- Limitadores para a tabela `Colaborador`
--
ALTER TABLE `Colaborador`
  ADD CONSTRAINT `fk_co_ci` FOREIGN KEY (`cidade`) REFERENCES `Cidade` (`nomeCidade`);

--
-- Limitadores para a tabela `Diretor`
--
ALTER TABLE `Diretor`
  ADD CONSTRAINT `fk_di_co` FOREIGN KEY (`nomeColaborador`) REFERENCES `Colaborador` (`nomeColaborador`),
  ADD CONSTRAINT `fk_di_em` FOREIGN KEY (`nomeEmpresa`) REFERENCES `Empresa` (`nomeEmpresa`);

--
-- Limitadores para a tabela `Empresa`
--
ALTER TABLE `Empresa`
  ADD CONSTRAINT `fk_em_ci` FOREIGN KEY (`cidade`) REFERENCES `Cidade` (`nomeCidade`);

--
-- Limitadores para a tabela `Trabalha`
--
ALTER TABLE `Trabalha`
  ADD CONSTRAINT `fk_tr_co` FOREIGN KEY (`nomeColaborador`) REFERENCES `Colaborador` (`nomeColaborador`),
  ADD CONSTRAINT `fk_tr_em` FOREIGN KEY (`nomeEmpresa`) REFERENCES `Empresa` (`nomeEmpresa`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
