# Ternary Operator

You are given a program for a bank card withdrawal system: it takes the account and the amount that the user wants to withdraw, then outputs the remaining money. If the requested cash is greater than the balance, the program outputs `Error`.

The bank wants to set a minimal value of $**500** for withdrawal. Modernize the program so that it will output the same `Error` if the requested money is less than $**500**.

- **Sample input**:  
```
4500
300
```

- **Sample output**:  
```
Error
```

>As with other operators, you can chain multiple conditions with the ternary operator.