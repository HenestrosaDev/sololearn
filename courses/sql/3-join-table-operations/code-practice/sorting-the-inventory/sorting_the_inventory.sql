SELECT p.productname, p.price, c.categoryname
FROM products AS p
INNER JOIN categories AS c ON p.categoryid=c.id;