-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/Day%202/README.md#calculate-special-bonus

-- Code

SELECT employee_id,
CASE
    when employee_id%2 <> 0 AND name NOT LIKE "M%" then salary
    else 0
end as bonus
FROM employees
ORDER BY employee_id