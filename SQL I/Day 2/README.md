# Calculate Special Bonus

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Employees (employee_id int, name varchar(30), salary int)
Truncate table Employees
insert into Employees (employee_id, name, salary) values ('2', 'Meir', '3000')
insert into Employees (employee_id, name, salary) values ('3', 'Michael', '3800')
insert into Employees (employee_id, name, salary) values ('7', 'Addilyn', '7400')
insert into Employees (employee_id, name, salary) values ('8', 'Juan', '6100')
insert into Employees (employee_id, name, salary) values ('9', 'Kannon', '7700')
```
</details>

Table: `Employees`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   employee_id     |   int     |
|   name            |   varchar |
|   salary          |   int     |

```
employee_id is the primary key for this table.
Each row of this table indicates the employee ID, employee name, and salary.
```

Write an SQL query to calculate the bonus of each employee. The bonus of an employee is 100% of their salary if the ID of the employee is **an odd number** and **the employee name does not start with the character** `M`. The bonus of an employee is `0` otherwise.
Return the result table ordered by `employee_id`.

```bash
echo "End Of Question"
```

# Swap Salary

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Salary (id int, name varchar(100), sex char(1), salary int)
Truncate table Salary
insert into Salary (id, name, sex, salary) values ('1', 'A', 'm', '2500')
insert into Salary (id, name, sex, salary) values ('2', 'B', 'f', '1500')
insert into Salary (id, name, sex, salary) values ('3', 'C', 'm', '5500')
insert into Salary (id, name, sex, salary) values ('4', 'D', 'f', '500')
```
</details>

Table: `Salary`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   id              |   int     |
|   name            |   varchar |
|   sex             |   ENUM    |
|   salary          |   int     |

```
id is the primary key for this table.
The sex column is ENUM value of type ('m', 'f').
The table contains information about an employee.
```

Write an SQL query to swap all `f` and `m` values (i.e., change all `f` values to `m` and vice versa) with a **single update statement** and no intermediate temporary tables.
Note that you must write a single update statement, **do not write** any select statement for this problem.

```bash
echo "End Of Question"
```

# Delete Duplicate Emails

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Person (Id int, Email varchar(255))
Truncate table Person
insert into Person (id, email) values ('1', 'john@example.com')
insert into Person (id, email) values ('2', 'bob@example.com')
insert into Person (id, email) values ('3', 'john@example.com')
```
</details>

Table: `Person`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   Id              |   int     |
|   Email           |   varchar |

```
id is the primary key column for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.
```

Write an SQL query to **delete** all the duplicate emails, keeping only one unique email with the smallest `id`. Note that you are supposed to write a `DELETE` statement and not a `SELECT` one.
After running your script, the answer shown is the Person table. The driver will first compile and run your piece of code and then show the `Person` table. The final order of the `Person` table *does not matter*.

```bash
echo "End Of Day 2"
```