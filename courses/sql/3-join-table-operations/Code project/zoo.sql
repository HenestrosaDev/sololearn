/* name - "Slim", type - "Giraffe", country_id - 1 */
INSERT INTO Animals
VALUES ('Slim', 'Giraffe', 1);

SELECT a.name, a.type, c.country
FROM Animals AS a
INNER JOIN Countries AS c
ON a.country_id = c.id
ORDER BY c.country;