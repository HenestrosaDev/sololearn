# Static Members

A company has 2 departments and it is growing, so more departments are needed.

The program you are given takes the **number of departments** to be opened as input, then takes their names and creates `Department` objects, passing their names as the constructor.

Complete the `Department` class to have 1 static member `depCount` with an initial value of `2` for the number of departments and the constructor that will count it and output corresponding message (see sample output).

- **Sample input**:  
```
2
Finance
Marketing
```

- **Sample output**:  
```
Department opened: Finance
Department opened: Marketing
Number of departments: 4
```

**Explanation**: The first input represents the number of departments to be opened, followed by their names.

As a result, the program outputs the corresponding messages (the 1st and the 2nd outputs) and the total number of departments: 2 (initial) + 2 (opened) = 4.

>You need to **increment the static number** of departments inside the constructor.