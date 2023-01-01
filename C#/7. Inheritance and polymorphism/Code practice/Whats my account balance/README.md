# Protected Members

The program you are given takes an account number and its balance as input.

It defines `Account` class with 1 member `balance` and derives `User` class from it with 1 additional member - the account number (`accNumber`), then creates a `User` object and tries to store the `balance` and account number (`accNumber`) in it, and shows the details. But something is wrong.

Fix the program so that it completes the `User()` constructor, which should assign the parameters to the corresponding members of the `User` class. Also, check the access modifier of `balance` member of `Account` class.

- **Sample input**:  
```
005615216
1488.36
```

- **Sample Output**:  
```
Account N: 005615216
Balance: 1488.36
```

>Remember, `private` members can't be accessed in derived classes, while `protected` ones can.
