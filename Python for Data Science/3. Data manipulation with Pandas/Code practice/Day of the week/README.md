# Weekdays

You continue working with the COVID dataset for California.

Now, add the **weekday names** for each row as a new column, named **weekday**.
Then, output the **last 7 days** data of the dataset. Do not set any index on the DataFrame.

>The given code converts the date column to datetime, so you do not need to change its format.  
Use the `.dt.strftime("%A")` function on the date column to convert it into a weekday name.