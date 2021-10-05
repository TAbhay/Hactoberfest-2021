-- phpMyAdmin SQL Dump
-- version 4.2.11
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Oct 11, 2018 at 07:30 PM
-- Server version: 5.6.21
-- PHP Version: 5.6.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;

--
-- Database: `biddingsystemdb`
--

-- --------------------------------------------------------

--
-- Table structure for table `adloginfo`
--

CREATE TABLE IF NOT EXISTS `adloginfo` (
  `ip` varchar(30) NOT NULL,
  `browser` varchar(70) NOT NULL,
  `date` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `adloginfo`
--

INSERT INTO `adloginfo` (`ip`, `browser`, `date`) VALUES
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; r', '2011-08-25 22:55:03'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; r', '2011-08-30 08:42:20'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; r', '2011-08-30 13:36:32'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-30 19:59:33'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-30 21:27:45'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 12:36:46'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 12:38:55'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 12:39:12'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 15:57:03'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 15:57:18'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 15:58:04'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 16:10:02'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-01 10:23:23'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-01 20:46:16'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-01 23:15:10'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-02 18:09:02'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-03 18:06:55'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-04 12:43:38'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-04 15:49:09'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-05 12:10:29'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-05 13:30:02'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-07 13:01:05'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-07 15:15:26'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-07 23:24:51'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-09 14:04:43'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-11 19:17:57'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-13 10:48:27'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-14 13:57:53'),
('127.0.0.1', 'Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.9.1.5) Gecko/2009', '2011-09-15 10:37:43'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-15 15:32:48'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-16 08:35:57'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-16 16:14:15'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-16 19:29:28'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-17 10:14:21'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-17 12:55:08'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-17 15:58:06'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1) AppleWebKit/535.1 (KHTML, like Gecko) Chr', '2011-09-17 16:52:28'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-18 19:16:53'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-18 19:42:05'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-18 19:45:51'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-19 01:57:23'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-19 14:14:30'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-19 14:54:20'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 00:46:14'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 05:46:58'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 09:39:49'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 19:01:15'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-21 11:37:50'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-21 20:52:07'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-02 02:31:31'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-16 22:01:26'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-20 14:35:23'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-20 18:27:32'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-20 21:38:22'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-21 02:00:54'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-23 14:04:03'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-12-02 08:54:19'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:00:34'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:11:17'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:47:08'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:51:06'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; r', '2011-08-25 22:55:03'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; r', '2011-08-30 08:42:20'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; r', '2011-08-30 13:36:32'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-30 19:59:33'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-30 21:27:45'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 12:36:46'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 12:38:55'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 12:39:12'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 15:57:03'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 15:57:18'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 15:58:04'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-08-31 16:10:02'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-01 10:23:23'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-01 20:46:16'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-01 23:15:10'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-02 18:09:02'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-03 18:06:55'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-04 12:43:38'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-04 15:49:09'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-05 12:10:29'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-05 13:30:02'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-07 13:01:05'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-07 15:15:26'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-07 23:24:51'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-09 14:04:43'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-11 19:17:57'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-13 10:48:27'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-14 13:57:53'),
('127.0.0.1', 'Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.9.1.5) Gecko/2009', '2011-09-15 10:37:43'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-15 15:32:48'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-16 08:35:57'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-16 16:14:15'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-16 19:29:28'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-17 10:14:21'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-17 12:55:08'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:7.0) Gecko/20100101 Firefox/7.0', '2011-09-17 15:58:06'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1) AppleWebKit/535.1 (KHTML, like Gecko) Chr', '2011-09-17 16:52:28'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-18 19:16:53'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-18 19:42:05'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-18 19:45:51'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-19 01:57:23'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-19 14:14:30'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-19 14:54:20'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 00:46:14'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 05:46:58'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 09:39:49'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-09-20 19:01:15'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-21 11:37:50'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-09-21 20:52:07'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-02 02:31:31'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-16 22:01:26'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-20 14:35:23'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-20 18:27:32'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-20 21:38:22'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-21 02:00:54'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:6.0) Gecko/20100101 Firefox/6.0', '2011-10-23 14:04:03'),
('127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefox/6.0.2', '2011-12-02 08:54:19'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:00:34'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:11:17'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 22:47:08'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 23:02:05'),
('::1', 'Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:62.0) Gecko/20100101 Fire', '2018-10-11 23:07:29');

-- --------------------------------------------------------

--
-- Table structure for table `admin`
--

CREATE TABLE IF NOT EXISTS `admin` (
  `username` varchar(30) NOT NULL,
  `password` varchar(30) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `admin`
--

INSERT INTO `admin` (`username`, `password`) VALUES
('admin', 'admin'),
('admin', 'admin');

-- --------------------------------------------------------

--
-- Table structure for table `bidreport`
--

CREATE TABLE IF NOT EXISTS `bidreport` (
`bidid` int(11) NOT NULL,
  `productid` int(11) NOT NULL,
  `bidder` varchar(60) NOT NULL,
  `biddatetime` varchar(60) NOT NULL,
  `bidamount` int(11) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=46 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `bidreport`
--

INSERT INTO `bidreport` (`bidid`, `productid`, `bidder`, `biddatetime`, `bidamount`, `status`) VALUES
(12, 3, '1', '2011-09-15 11:03:05', 5000, 0),
(13, 3, '1', '2011-09-15 11:05:18', 22222, 1),
(14, 2, '1', '2011-09-15 11:06:10', 10000, 1),
(15, 2, '1', '2011-09-15 11:06:36', 4000, 1),
(16, 3, '0', '2011-09-15 11:24:02', 50000, 1),
(17, 3, '1', '2011-09-15 15:43:28', 867676767, 1),
(18, 2, '1', '2011-09-17 16:53:44', 55555555, 1),
(19, 4, '1', '2011-09-21 10:04:11', 12, 0),
(20, 9, '16', '2011-09-22 12:19:21', 123, 0),
(21, 5, '1', '2011-09-27 14:42:04', 2147483647, 0),
(22, 8, '16', '2011-10-20 01:34:01', 46222, 0),
(23, 6, '16', '2011-10-20 13:24:57', 12, 0),
(24, 6, '16', '2011-10-20 13:46:24', 123, 0),
(25, 6, '16', '2011-10-20 13:54:09', 124, 0),
(26, 6, '16', '2011-10-20 14:09:00', 125, 0),
(27, 6, '16', '2011-10-20 14:20:33', 126, 0),
(28, 15, '16', '2011-10-20 20:50:56', 16, 0),
(29, 15, '16', '2011-10-20 20:53:47', 17, 0),
(30, 15, '16', '2011-10-20 20:54:06', 18, 0),
(31, 15, '16', '2011-10-20 20:57:30', 19, 0),
(32, 20, '20', '2011-10-21 04:04:38', 21, 0),
(33, 20, '20', '2011-10-21 04:09:00', 23001, 0),
(34, 23, '16', '2011-10-27 19:31:29', 4001, 0),
(35, 27, '16', '2011-12-02 09:43:38', 11000, 0),
(36, 27, '16', '2011-12-02 09:44:51', 11100, 0),
(37, 27, '16', '2011-12-02 09:47:29', 11110, 0),
(38, 27, '16', '2011-12-02 09:49:26', 11111, 0),
(39, 27, '16', '2011-12-02 09:50:47', 11112, 0),
(40, 27, '16', '2011-12-02 09:51:52', 11113, 0),
(41, 27, '16', '2011-12-02 09:53:29', 11114, 0),
(42, 27, '16', '2011-12-02 09:55:05', 11115, 0),
(43, 28, '21', '2018-10-11 22:12:56', 19500, 0),
(44, 28, '24', '2018-10-11 23:01:07', 20000, 0),
(45, 28, '21', '2018-10-11 23:01:47', 21000, 0);

-- --------------------------------------------------------

--
-- Table structure for table `login_info`
--

CREATE TABLE IF NOT EXISTS `login_info` (
  `memberid` int(11) NOT NULL,
  `ip` varchar(30) NOT NULL,
  `browser` varchar(60) NOT NULL,
  `date` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `login_info`
--

INSERT INTO `login_info` (`memberid`, `ip`, `browser`, `date`) VALUES
(1, '127.0.0.1', 'Mozilla/5.0 (Windows NT 6.1; rv:6.0.2) Gecko/20100101 Firefo', '2011-09-20 19:29:42');

-- --------------------------------------------------------

--
-- Table structure for table `member`
--

CREATE TABLE IF NOT EXISTS `member` (
`memberid` int(11) NOT NULL,
  `lastname` varchar(30) NOT NULL,
  `firstname` varchar(30) NOT NULL,
  `gender` varchar(10) NOT NULL,
  `userid` varchar(20) NOT NULL,
  `password` varchar(30) NOT NULL,
  `email` varchar(30) NOT NULL,
  `contactno` int(11) NOT NULL,
  `birthdate` varchar(30) NOT NULL,
  `address` varchar(60) NOT NULL,
  `verification` varchar(5) NOT NULL,
  `memberimg` varchar(100) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=25 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `member`
--

INSERT INTO `member` (`memberid`, `lastname`, `firstname`, `gender`, `userid`, `password`, `email`, `contactno`, `birthdate`, `address`, `verification`, `memberimg`) VALUES
(1, 'uuhghfg', 'f', '', 'frrrr', 'ffff', 'fretx@yahoo.co', 66767, 'Date Month Year', 'City 86867', 'yes', 'default.jpg'),
(2, 'hhhh', 'hhhhh', '', 'ttt', 'ttt', 'ghyhhff@yahoo.com', 444322, ' Month ?', 'Bacolod hhhhhh', '', 'default.jpg'),
(16, 'Segotier', 'Fretz "Pnoid"', 'Male', 'mr.scarecrow011', '', 'naruto16_fanatic@yahoo.com', 2147483647, '10 January 1993', 'Bacolod Brgy. XX', 'yes', '305434_2063556988210_1223296885_31905736_1121941913_n.jpg'),
(17, 'Eunice Alyana', 'Bautista', 'Female', 'EuniceAlyanaSexy', 'eunice', 'eunicegwapa@yahoo.com', 124444444, '1 January 1997', 'Silay sa higad sg suba pakadto sa iban nga balay', '0', 'default.jpg'),
(18, 'Charmin', 'Lopez', 'Female', 'charminkuia', 'qwerty', 'charmin@yahoo.com', 123678, '1 January 1990', 'Silay Kung diin si Eunice nag talang', '0', 'default.jpg'),
(19, 'asdfasdfdddd', 'asdfsdf', 'Female', '1111', 'ffffff', 'asdfasd@yahoo.com', 76888, '3 Month 1998', 'Bacolod wq342434', '0', 'default.jpg'),
(20, 'dddddddddddddd', 'asdffffff', 'Male', 'asdfkkkkkk', 'qwerty', 'asdfasdfsadfsadf@yahoo.com', 980890, 'Date Month Year', 'Bacolod dfdfdf', 'yes', 'default.jpg'),
(21, 'Harry', 'Den', 'Male', 'harry', 'codeprojects', 'harryden@ourmail.com', 2147483647, '5 August 1996', 'Silay Demo', 'yes', 'default.jpg'),
(24, 'code', 'projects', 'Male', 'codeprojects', 'codeprojects', 'codeprojectsorg@gmail.com', 2147483647, '10 October 1996', 'Bacolod demo', 'yes', 'default.jpg');

-- --------------------------------------------------------

--
-- Table structure for table `msgnotifs`
--

CREATE TABLE IF NOT EXISTS `msgnotifs` (
`msgnotifsid` int(11) NOT NULL,
  `toid` varchar(11) NOT NULL,
  `fromid` varchar(11) NOT NULL,
  `msgnotif` varchar(300) NOT NULL,
  `datecreated` varchar(60) NOT NULL,
  `status` int(11) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `msgnotifs`
--

INSERT INTO `msgnotifs` (`msgnotifsid`, `toid`, `fromid`, `msgnotif`, `datecreated`, `status`) VALUES
(1, 'admin', '1', 'bwahahahahaha', 'ddfdfdfdfdf', 1),
(2, 'admin', '1', 'dsfsdfdsfdsfdsfds', '', 1),
(3, 'admin', '1', 'tinarso. . indi na ko kabalo sang hilimuon', '09-9977=098', 1);

-- --------------------------------------------------------

--
-- Table structure for table `needtopay`
--

CREATE TABLE IF NOT EXISTS `needtopay` (
`needtopayid` int(11) NOT NULL,
  `memberid` int(11) NOT NULL,
  `productid` int(11) NOT NULL,
  `status` int(11) NOT NULL,
  `payment` int(11) NOT NULL,
  `declined` int(11) NOT NULL,
  `dateadded` varchar(40) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=269 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `needtopay`
--

INSERT INTO `needtopay` (`needtopayid`, `memberid`, `productid`, `status`, `payment`, `declined`, `dateadded`) VALUES
(267, 16, 2, 0, 1000, 0, '2011-10-20 20:21:52'),
(268, 2, 2, 0, 55555555, 0, '2011-10-20 20:21:54');

-- --------------------------------------------------------

--
-- Table structure for table `pcategories`
--

CREATE TABLE IF NOT EXISTS `pcategories` (
`categoryid` int(11) NOT NULL,
  `categoryname` varchar(50) NOT NULL,
  `catimage` varchar(100) NOT NULL,
  `categorydes` varchar(250) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `pcategories`
--

INSERT INTO `pcategories` (`categoryid`, `categoryname`, `catimage`, `categorydes`) VALUES
(9, 'Laptop Computers', 'p2.gif', ''),
(10, 'Cellphones', 'phone4.jpg', ''),
(11, 'Computer Accessories', 'index1111.jpg', ''),
(12, 'Desktop Computers', 'index.jpg', ''),
(13, 'Jewelries', 'jewelries.jpg', ''),
(14, 'Camera', 'http _cdn.cnn.com_cnnnext_dam_assets_170224172523-mojito.jpg', '');

-- --------------------------------------------------------

--
-- Table structure for table `products`
--

CREATE TABLE IF NOT EXISTS `products` (
`productid` int(11) NOT NULL,
  `prodname` varchar(30) NOT NULL,
  `categoryid` int(11) NOT NULL,
  `prodescription` varchar(300) NOT NULL,
  `startingbid` int(11) NOT NULL,
  `prodimage` varchar(100) NOT NULL,
  `regularprice` int(11) NOT NULL,
  `dateposted` date NOT NULL,
  `duedate` date NOT NULL,
  `status` varchar(15) NOT NULL,
  `sellername` varchar(30) NOT NULL,
  `sellerpayaccount` varchar(30) NOT NULL
) ENGINE=InnoDB AUTO_INCREMENT=31 DEFAULT CHARSET=latin1;

--
-- Dumping data for table `products`
--

INSERT INTO `products` (`productid`, `prodname`, `categoryid`, `prodescription`, `startingbid`, `prodimage`, `regularprice`, `dateposted`, `duedate`, `status`, `sellername`, `sellerpayaccount`) VALUES
(16, 'ZTC Cellphone (L101+)', 10, 'Dual Sim dual standby, handwritten & keyboard \r\nListen to the music by Innervation swing screen \r\nSupports Bluetooth and wireless stereo music output \r\nSupports: FM output, MP3, MP4, GPRS, WAP \r\nSupports T-Flash card extended, USB2.0 full speed ', 2000, 'p4,gif', 0, '2011-10-12', '2012-01-01', '1', '', ''),
(17, 'AT&T Samsung a877', 10, 'equipped with a QWERTY keyboard and WQVGA AMOLED Touch screen,but In fact this phone is not a smartphone,the best of this phone is features include a 3.2-inch WQVGA AMOLED touchscreen,a 3 megapixel camera, GPS, HSDPA and Bluetooth', 5000, 'p2.gif', 0, '2011-10-12', '2012-01-12', '1', '', ''),
(18, 'CYLINDER AUDIO SPEAKERS', 11, '* 2.0 channel* Volume & power dial* Stereo jack to connect to computer or any audio deviceImprint Area:1-1/2"W x 3/4"H on speaker without dialWeight: Weight 17 lbs.', 500, 'p2.gif', 0, '2011-10-12', '2011-12-01', '1', '', ''),
(19, 'Sungjut TangoX Nano UMPC', 9, 'has a DVI output and a detachable, integrated Skype phone. Weight: under 1kg. Unbelievable.', 22000, 'p2.gif', 0, '2011-10-12', '2011-12-12', '1', '', ''),
(20, 'Dialogueâ€™s Flybook V33', 9, 'Dialogue is going to release the Flybook V33i series with a laptop screen which can be moved across its axis. A nice alternative to a static laptop screen weâ€™ve seen over the last years.', 23000, 'p4.gif', 0, '2011-10-12', '2011-10-13', '1', '', ''),
(21, 'Indian Rings', 13, 'Basi Buy1 Take1 kay duwa ka bilog hu. .', 20000, 'p2.gif', 0, '2011-10-11', '2011-12-12', '1', '', ''),
(22, 'wew', 9, 'affdfdfdfd', 1200, 'EdwardScissorhands-tf.org-free-2008.jpg', 0, '2011-10-12', '2011-12-01', '1', 'mr.scarecrow011', 'naruto16_fanatic@yahoo.com'),
(23, 'asdfasdf', 10, 'wewe', 400, 'blazers.jpg', 0, '2011-10-12', '2011-10-12', '1', 'mr.scarecrow011', 'naruto16_fanatic@yahoo.com'),
(24, 'wewewe', 10, 'afasdfasdfasdf', 1, 'EdwardScissorhands-tf.org-free-2008.jpg', 0, '2011-10-12', '2011-10-12', '1', 'mr.scarecrow011', 'naruto16_fanatic@yahoo.com'),
(25, 'wewness to the max', 9, 'nami ni sa nami ', 12000, 'people.png', 1000, '2011-10-12', '2011-10-12', '1', '', ''),
(26, 'asdjfkasdjf', 11, 'dfaglksdlf', 90000, 'people.png', 1000, '2011-12-02', '2011-12-03', '1', '', ''),
(27, 'lsadfksa', 9, 'lskdflsdf', 10000, 'share.png', 100, '2011-12-02', '2011-12-16', '1', '', ''),
(28, 'GoPro Hero 7', 14, 'Demo description', 18500, 'CC_H7Black_2X_D.png', 26000, '2018-10-11', '2018-11-11', '0', '', ''),
(29, 'iPhone 8', 10, 'SELLER NOTE: Fully tested and restored to factory settings by our in-house technicians. \r\n4K Video Recording, Accelerometer, Camera, Colour Screen, Email, Fingerprint Sensor, FM Radio, Front Camera, Internet Browsing, MMS (Multimedia Messaging), MP3 Player, Proximity Sensor, Rear Camera, Touch Scree', 48000, 'iphn8.png', 65000, '2018-10-11', '2018-11-11', '0', '', ''),
(30, 'Dell XPS 15', 9, 'Demo Description', 95000, 'dellXPS.jpg', 150000, '2018-10-11', '2018-11-11', '0', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `secretquestions`
--

CREATE TABLE IF NOT EXISTS `secretquestions` (
  `memberid` int(11) NOT NULL,
  `question` varchar(60) NOT NULL,
  `answer` varchar(60) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `secretquestions`
--

INSERT INTO `secretquestions` (`memberid`, `question`, `answer`) VALUES
(2, 'Am I Gorgeous?', 'Am I Gorgeous?'),
(3, 'Am I Gorgeous?', ''),
(4, 'Am I Gorgeous?', 'Your Secret Answer:'),
(5, 'Pick a Security Question', 'Your Secret Answer:'),
(6, '', ''),
(7, 'Pick a Security Question', 'Your Secret Answer:'),
(8, 'Pick a Security Question', 'Your Secret Answer:'),
(9, 'Pick a Security Question', 'Your Secret Answer:'),
(10, 'Am I Gorgeous?', 'dfdghfghtht'),
(11, 'Pick a Security Question', 'Your Secret Answer:'),
(13, 'Am I Gorgeous?', 'te4'),
(14, 'Am I Gorgeous?', 'te4'),
(0, 'Am I Gorgeous?', 'vfv'),
(0, 'Pick a Security Question', 'Your Secret Answer:'),
(15, 'Am I Gorgeous?', 'yes'),
(16, 'Am I Gorgeous?', 'yezzz'),
(6, 'Pick a Security Question', 'Your Secret Answer:'),
(18, 'Am I Gorgeous?', 'yezzz'),
(17, 'Am I Gorgeous?', 'yezzz'),
(19, 'Am I Gorgeous?', '12121'),
(20, 'Am I Gorgeous?', '234234234'),
(21, 'Name of my Pet?', 'Tony'),
(22, 'Name of my Pet?', 'Tony'),
(22, 'Name of my Pet?', 'Tony'),
(22, 'Name of my Pet?', 'tony');

-- --------------------------------------------------------

--
-- Table structure for table `watchlist`
--

CREATE TABLE IF NOT EXISTS `watchlist` (
  `memberid` int(11) NOT NULL,
  `productid` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `watchlist`
--

INSERT INTO `watchlist` (`memberid`, `productid`) VALUES
(1, 2);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `bidreport`
--
ALTER TABLE `bidreport`
 ADD PRIMARY KEY (`bidid`);

--
-- Indexes for table `member`
--
ALTER TABLE `member`
 ADD PRIMARY KEY (`memberid`);

--
-- Indexes for table `msgnotifs`
--
ALTER TABLE `msgnotifs`
 ADD PRIMARY KEY (`msgnotifsid`);

--
-- Indexes for table `needtopay`
--
ALTER TABLE `needtopay`
 ADD PRIMARY KEY (`needtopayid`);

--
-- Indexes for table `pcategories`
--
ALTER TABLE `pcategories`
 ADD PRIMARY KEY (`categoryid`);

--
-- Indexes for table `products`
--
ALTER TABLE `products`
 ADD PRIMARY KEY (`productid`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `bidreport`
--
ALTER TABLE `bidreport`
MODIFY `bidid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=46;
--
-- AUTO_INCREMENT for table `member`
--
ALTER TABLE `member`
MODIFY `memberid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=25;
--
-- AUTO_INCREMENT for table `msgnotifs`
--
ALTER TABLE `msgnotifs`
MODIFY `msgnotifsid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=4;
--
-- AUTO_INCREMENT for table `needtopay`
--
ALTER TABLE `needtopay`
MODIFY `needtopayid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=269;
--
-- AUTO_INCREMENT for table `pcategories`
--
ALTER TABLE `pcategories`
MODIFY `categoryid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=15;
--
-- AUTO_INCREMENT for table `products`
--
ALTER TABLE `products`
MODIFY `productid` int(11) NOT NULL AUTO_INCREMENT,AUTO_INCREMENT=31;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
