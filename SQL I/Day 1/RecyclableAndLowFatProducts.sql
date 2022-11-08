-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/Day%201/README.md#recyclable-and-low-fat-products

-- Code

# Write your MySQL query statement below
SELECT product_id
FROM Products
WHERE low_fats = "Y" AND recyclable = "Y"