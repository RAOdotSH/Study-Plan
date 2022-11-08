-- Problem: https://github.com/RAOexe/Study-Plan/blob/main/SQL%20I/Day%202/README.md#delete-duplicate-emails

-- Code

DELETE P1
FROM Person P1, Person P2
WHERE P1.email = P2.email AND P1.id > P2.id