# SQL

## Installation

### For Ubuntu

To make sure that your system is up to date
> sudo apt update

List the packages it wants to install
> sudo apt upgrade

To install MySQL-server
> sudo apt install mysql-server

For fresh installations of MySQL, you’ll want to run the DBMS’s included security script. This script changes some of the less secure default options for things like remote root logins and sample users.
> sudo mysql_secure_installation

Run MySQL
> sudo mysql -u root -p
& provide password

![MySQL](https://i.ibb.co/51tBwQf/mysql.png)

To install MySQL Workbench
> sudo apt install mysql-workbench-community

![MySQL-Workbench](https://dev.mysql.com/doc/workbench/en/images/wb-home-screen-new.png)

## Getting Started

What is Database?
A database is a collection of data stored in a format that can easily be accessed.

### Types of Databases

+ Relational Databases
+ NoSQL Databases
  
Relational Databases: SQL databases which is collection of data items with pre-defined relationships between them.

NoSQL Databases: Stores and retrieves data without needing to define its structure first - an alternative to the more rigid relational databases.
![SQL and NoSQL Database](https://user.oc-static.com/upload/2019/07/05/15623398368289_SQL%20vs%20NoSQL.png)

> Popular Database Softwares:
>
> 1. MySQL
> 2. SQL Server
> 3. Oracle

Q. SQL or SEQUEL?

For SEQUEL:
|Word|Full Form|
|---|---|
|S|Structured|
|E|English|
|QUE|QUEry|
|L|Language|

For SQL:
|Word|Full Form|
|---|---|
|S|Structured|
|Q|Query|
|L|Language|

> Non-English countries preferred SQL as a name. SEQUEL is a trademark of Aeroplane Company so developers of SQL used to call it as SQL instead of SEQUEL.

### MySQL Workbench

![MySQL](https://www.mysql.com/common/images/products/MySQL_Workbench_Editor_General_Mac.png)

We are using MySQL workbench in this course/tutorial. In staring it looks too complicated but it is not. There are three panels i.e. Left, Right, and Bottom.
Left panel has two tabs named as **Administration** and **Schemas**. Administration is used for IMPORTING/EXPORTING data, server management etc... where as Schemas is used for navigating databases which are stored in our machine.
Right panel also has two tabs named as **Context help** and **Snippets**.
Bottom panel shows Action Ouptut and result when we execute any query.

> We can execute single query form a database by selecting that query and executing it using ⚡ button.

## Retrieving data from a single table

### The **SELECT** statement

```SQL
USE databasename;
SELECT *
FROM tablename
WHERE columnname_id = 1
ORDER BY columnname_name ;
```

Here,<br>
**USE** clause is used for selecting or using database.
**SELECT** clause is used for showing tables.
>     * is used for showing all columns.

**FROM** clause is used showing particular table.
**WHERE** clause is used for filtering result.
**ORDER BY** clause is used for ordering result.

> Every statement is close by **;** 

