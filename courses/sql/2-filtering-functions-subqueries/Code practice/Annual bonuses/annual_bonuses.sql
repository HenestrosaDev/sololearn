SELECT CONCAT(firstname, ' ' , lastname) AS fullname, salary * 12 + (500 * experience) AS total
FROM staff
ORDER BY total;The AS Keyword


You are given the following staff table:contentImageThe salary shown in the table is monthly.
Each employee receives a bonus once a year. The bonus for each employee is equal to their years of experience multiplied by 500.

Write a query to output the firstname and lastname columns into one column named fullname separated by space, and the total annual salary for each employee keeping in mind bonuses named 'total'. Sort by the 'total' column.
Use the AS keyword and the CONCAT function!
