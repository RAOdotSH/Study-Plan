# Big Countries

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists World (name varchar(255), continent varchar(255), area int, population int, gdp int)
Truncate table World
insert into World (name, continent, area, population, gdp) values ('Afghanistan', 'Asia', '652230', '25500100', '20343000000')
insert into World (name, continent, area, population, gdp) values ('Albania', 'Europe', '28748', '2831741', '12960000000')
insert into World (name, continent, area, population, gdp) values ('Algeria', 'Africa', '2381741', '37100000', '188681000000')
insert into World (name, continent, area, population, gdp) values ('Andorra', 'Europe', '468', '78115', '3712000000')
insert into World (name, continent, area, population, gdp) values ('Angola', 'Africa', '1246700', '20609294', '100990000000')
```
</details>

Table: `World`

| Column Name | Type    |
|---          |  :---:  |
| name        | varchar |
| continent   | varchar |
| area        | int     |
| population  | int     |
| gdp         | int     |

```
name is the primary key column for this table.
Each row of this table gives information about the name of a country, the continent to which it belongs, its area, the population, and its GDP value.
```

A country is big if:
- It has an area of at least three million (i.e., 3000000 km2), or
- It has a population of at least twenty-five million (i.e., 25000000).

Write an SQL query to report the name, population, and area of the big countries.
Return the result table in any order.

~~~bash
echo "End Of Question"
~~~

# Recyclable and Low Fat Products

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Products (product_id int, low_fats ENUM('Y', 'N'), recyclable ENUM('Y','N'))
Truncate table Products
insert into Products (product_id, low_fats, recyclable) values ('0', 'Y', 'N')
insert into Products (product_id, low_fats, recyclable) values ('1', 'Y', 'Y')
insert into Products (product_id, low_fats, recyclable) values ('2', 'N', 'Y')
insert into Products (product_id, low_fats, recyclable) values ('3', 'Y', 'Y')
insert into Products (product_id, low_fats, recyclable) values ('4', 'N', 'N')
```
</details>

Table: `Products`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   product_id      |   int     |
|   low_fats        |   enum    |
|   recyclable      |   enum    |  

```
product_id is the primary key for this table.
low_fats is an ENUM of type ('Y', 'N') where 'Y' means this product is low fat and 'N' means it is not.
recyclable is an ENUM of types ('Y', 'N') where 'Y' means this product is recyclable and 'N' means it is not.
```

Write an SQL query to find the ids of products that are both low fat and recyclable.
Return the result table in any order.

~~~bash
echo "End Of Question"
~~~

# Find Customer Referee

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Customer (id int, name varchar(25), referee_id int)
Truncate table Customer
insert into Customer (id, name, referee_id) values ('1', 'Will', 'None')
insert into Customer (id, name, referee_id) values ('2', 'Jane', 'None')
insert into Customer (id, name, referee_id) values ('3', 'Alex', '2')
insert into Customer (id, name, referee_id) values ('4', 'Bill', 'None')
insert into Customer (id, name, referee_id) values ('5', 'Zack', '1')
insert into Customer (id, name, referee_id) values ('6', 'Mark', '2')4
```
</details>

Table: `Customer`
|   Column Name     |   Type    |
|   ---             |   :---:   |
|   id              |   int     |
|   name            |   varchar |
|   referee_id      |   int     |

```
id is the primary key for this table.
Each row of this table indicates the id of a customer, their name, and the id of the customer who referred them.
```

Write an SQL query to report the names of the customer that are not referred by the customer with id = 2.
Return the result table in any order.

~~~bash
echo "End Of Question"
~~~

# Customers Who Never Order

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Customers (id int, name varchar(255))
Create table If Not Exists Orders (id int, customerId int)
Truncate table Customers
insert into Customers (id, name) values ('1', 'Joe')
insert into Customers (id, name) values ('2', 'Henry')
insert into Customers (id, name) values ('3', 'Sam')
insert into Customers (id, name) values ('4', 'Max')
Truncate table Orders
insert into Orders (id, customerId) values ('1', '3')
insert into Orders (id, customerId) values ('2', '1')
```
</details>

Table: `Customers`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   id              |   int     |
|   name            |   varchar |

```
id is the primary key column for this table.
Each row of this table indicates the ID and name of a customer.
```

Table: `Orders`
|   Column Name     |   Type    |
|   ---             |   :---:   |
|   id              |   int     |
|   customerId      |   int     |

```
id is the primary key column for this table.
customerId is a foreign key of the ID from the Customers table.
Each row of this table indicates the ID of an order and the ID of the customer who ordered it.
```

Write an SQL query to report all customers who never order anything.
Return the result table in any order.

~~~bash
echo "End Of Day"
~~~