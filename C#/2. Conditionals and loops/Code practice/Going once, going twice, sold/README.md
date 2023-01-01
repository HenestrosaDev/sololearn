# break

We are making a program for auction with a maximum bid set. The count of bids is variable.

Write a program to take the **maximum bid** as input, then take all bids from auction participants until the maximum bid is exceeded. The program should output the corresponding message with the winning bid.

- **Sample input**:  
```
1600
800
1300
1700
```

- **Sample output**:  
```
Sold: 1700
```

**Explanation**: The first input represents the maximum bid, followed by the bids offered from all participants. The last participant suggested a bid (1700) which is above the maximum (1600) and won the auction. Thus, that bid is outputted.

**Hint**:  In order to make continuous input acceptance you need to use `while (true)` condition. For example, this part of code takes inputs infinitely:
```
while (true)
{
	string smth = Console.ReadLine();
} 
```

>Use an `if` statement inside the loop to execute the `break` condition.