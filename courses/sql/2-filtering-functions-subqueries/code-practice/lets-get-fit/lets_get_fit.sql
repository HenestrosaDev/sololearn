SELECT * 
FROM Foods
WHERE fatpercentage < (SELECT AVG(fatpercentage) FROM Foods);