-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/Day%202/README.md#swap-salary

-- Code

UPDATE salary
SET sex = 
        CASE sex
            WHEN 'm' THEN 'f'
            ELSE 'm'
        END