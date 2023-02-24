# Worst Day

Given the COVID data, find the day with maximum cases in a given month. 

Take a **month name** as input and output the row that corresponds to the day with the maximum number of cases in that month.

You can filter the DataFrame for the given month first, and then select the row with the maximum cases.

**Important**: The output should be a **DataFrame**, which includes all the columns.
For example, for the month of February, the expected result would be:
```
cases deaths month
date
2020-02-26 15 0 February 
```

>The given code adds a **month** column to the dataset, and adds an index. Do not change that part of the code.