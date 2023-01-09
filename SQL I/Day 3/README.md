# Fix Names in a Table

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Users (user_id int, name varchar(40))
Truncate table Users
insert into Users (user_id, name) values ('1', 'aLice')
insert into Users (user_id, name) values ('2', 'bOB')
```
</details>

Table: `Users`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   user_id     |   int     |
|   name            |   varchar |

```
user_id is the primary key for this table.
This table contains the ID and the name of the user. The name consists of only lowercase and uppercase characters.
```

Write an SQL query to fix the names so that only the first character is uppercase and the rest are lowercase.
Return the result table ordered by `user_id`.
The query result format is in the following example.

```bash
echo "End Of Question"
```

# Group Sold Products By The Date

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Activities (sell_date date, product varchar(20))
Truncate table Activities
insert into Activities (sell_date, product) values ('2020-05-30', 'Headphone')
insert into Activities (sell_date, product) values ('2020-06-01', 'Pencil')
insert into Activities (sell_date, product) values ('2020-06-02', 'Mask')
insert into Activities (sell_date, product) values ('2020-05-30', 'Basketball')
insert into Activities (sell_date, product) values ('2020-06-01', 'Bible')
insert into Activities (sell_date, product) values ('2020-06-02', 'Mask')
insert into Activities (sell_date, product) values ('2020-05-30', 'T-Shirt')
```
</details>

Table: `Salary`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   idsell_date     |   date     |
|   product         |   varchar |

```
There is no primary key for this table, it may contain duplicates.
Each row of this table contains the product name and the date it was sold in a market.
```

Write an SQL query to find for each date the number of different products sold and their names.
The sold products names for each date should be sorted lexicographically.
Return the result table ordered by `sell_date`.
The query result format is in the following example.

```bash
echo "End Of Question"
```

# Patients With a Condition

<details>
<summary>SQL Schema</summary>

```sql
Create table If Not Exists Patients (patient_id int, patient_name varchar(30), conditions varchar(100))
Truncate table Patients
insert into Patients (patient_id, patient_name, conditions) values ('1', 'Daniel', 'YFEV COUGH')
insert into Patients (patient_id, patient_name, conditions) values ('2', 'Alice', '')
insert into Patients (patient_id, patient_name, conditions) values ('3', 'Bob', 'DIAB100 MYOP')
insert into Patients (patient_id, patient_name, conditions) values ('4', 'George', 'ACNE DIAB100')
insert into Patients (patient_id, patient_name, conditions) values ('5', 'Alain', 'DIAB201')
```
</details>

Table: `Person`

|   Column Name     |   Type    |
|   ---             |   :---:   |
|   patient_id      | int       |
| patient_name      | varchar   |
| conditions        | varchar   |

```
patient_id is the primary key for this table.
'conditions' contains 0 or more code separated by spaces. 
This table contains information of the patients in the hospital.
```

Write an SQL query to report the patient_id, patient_name and conditions of the patients who have Type I Diabetes. Type I Diabetes always starts with `DIAB1` prefix.
Return the result table in any order.
The query result format is in the following example.

```bash
echo "End Of Day 3"
```
