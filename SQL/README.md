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

```SQL
-- Comments are written like this
```

### The **SELECT** clause

```SQL
SELECT 
    first_name,
    last_name,
    points,
    points + 10 AS 'new points'
FROM customers;
```

Here,<br>
**AS** clause is used for proposing name for new or modify entity.

```SQL
SELECT DISTINCT state
FROM customers;
```

Here,<br>
**DISTINCT** clause is used for removing duplicate entries.

*****
🤔 Quiz

```SQL
-- Return all the products
--     name
--     unit_price
--     new_price (unit_price * 1.1)
```

😉 Solution

```SQL
SELECT 
    name,
    unit_price,
    unit_price * 1.1 as 'new price'
FROM products;
```
*****

### The **WHERE** clause

```SQL
SELECT *
FROM customers
WHERE points > 3000;
```

```SQL
SELECT *
FROM customers
where birth_day >= '1990-01-01';
```
Here,<br>
**WHERE** clause is used for filtering result.

|Name|Operator Symbol|
|-|-|
|Equal|=|
|Not Equal|!= or <>|
|Greater than|>|
|Less than|<|
|Greater than or equals to|>=|
|Less than or equals to|<=|


*****
🤔 Quiz

```SQL
-- Return all the payments done in year 2019
```

😉 Solution

```SQL
SELECT *
FROM payments
WHERE date >= '2019-01-01';
```

*****

### The **AND**, **OR** and **NOT** Operators

```SQL
SELECT *
FROM customers
WHERE birth_date >= '1999-01-01' AND points >= 2000

```

```SQL
SELECT *
FROM customers
WHERE birth_date >= '1999-01-01' OR points >= 2000
```

```SQL
SELECT *
FROM customers
WHERE NOT (birth_date >= '1999-01-01' AND points >= 2000)
```

Here,<br>
**AND**, **OR**, **NOT** represents logical operators.

*****
🤔 Quiz

```SQL
-- From the order_items table get the items for order #6
-- where the total price is greater than 30
```

😉 Solution

```SQL
SELECT *
FROM order_items
WHERE order_id = 6 AND ((unit_price * quantity)>30)
```

*****

### The **IN** Operator


```SQL
SELECT * 
FROM customers
WHERE state IN ('VA','CO','FL');
```
Here,<br>
**IN** operator is used for applying multiple condition at a time.

*****
🤔 Quiz

```SQL
-- Return products with
-- 	quantity in stock equal to 49, 38, 72
```

😉 Solution

```SQL
SELECT *
FROM products
WHERE quantity_in_stock IN (49, 38, 72);
```

*****

### The **BETWEEN** Operator

```SQL
SELECT *
FROM customers
WHERE points BETWEEN 1000 AND 3000;
```
Here,<br>
**BETWEEN** operator is used for defining range.

*****
🤔 Quiz

```SQL
-- Return customers born
-- 	between 01/01/1990 and 01/01/2000
```

😉 Solution

```SQL
SELECT *
FROM customers
WHERE birth_date BETWEEN '1990-01-01' AND '2000-01-01';
```

*****


### TEMPLATE


```SQL

```
Here,<br>

*****
🤔 Quiz

```SQL

```

😉 Solution

```SQL

```

*****

### TEMPLATE


```SQL

```
Here,<br>

*****
🤔 Quiz

```SQL

```

😉 Solution

```SQL

```

*****

### TEMPLATE


```SQL

```
Here,<br>

*****
🤔 Quiz

```SQL

```

😉 Solution

```SQL

```

*****

### TEMPLATE


```SQL

```
Here,<br>

*****
🤔 Quiz

```SQL

```

😉 Solution

```SQL

```

*****

### TEMPLATE


```SQL

```
Here,<br>

*****
🤔 Quiz

```SQL

```

😉 Solution

```SQL

```

*****

### TEMPLATE


```SQL

```
Here,<br>

*****
🤔 Quiz

```SQL

```

😉 Solution

```SQL

```

*****
