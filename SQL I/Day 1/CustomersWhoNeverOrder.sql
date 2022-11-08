-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/Day%201/README.md#customers-who-never-order

-- Code

SELECT name as Customers
FROM Customers c
LEFT JOIN Orders o
    ON c.id = o.customerId
WHERE o.customerId is NULL