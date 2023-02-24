# Ticket Office

You are analyzing sales data from a ticket office.

The ticket for an **adult is $20**, while the ticket **for a child under 18 is $5**.
The data you are given is in a dictionary format, where the keys are the sold ticket numbers, and the values are the customer ages.
For example, `"123-08": 24` means that the ticket was **bought by a 24-year-old**.

Your goal is to calculate how much more money the office would make if it would change the ticket discount age to the given input. So, your program needs to take an **integer as input** and **output the percentage of revenue growth**, if the discount was given to people under that age.

For example, if the office made **$15000 with the original discount age**, and would make **$18000 with 14 as the discount age**, then the growth would be `((18000 - 15000) / 15000) * 100 = 20%`

So, for the input **14**, your program should output 20. The output should be an `integer` (use `int()` to convert the result).

>To iterate over the values of a **dictionary**, you can use the `.values()` function: `for value in data.values()`
