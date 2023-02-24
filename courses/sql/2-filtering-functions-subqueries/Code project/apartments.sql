SELECT * 
FROM Apartments
WHERE price > (SELECT AVG(price) FROM Apartments) 
AND status = 'Not rented'
ORDER BY price;