-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/Day%201/README.md#find-customer-referee

-- Code

SELECT name
FROM Customer
WHERE referee_id <> 2 OR referee_id is NULL