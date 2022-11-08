-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/README.md#big-countries

-- Code

SELECT name, population, area
FROM World
WHERE area >= 3000000 OR population >= 25000000