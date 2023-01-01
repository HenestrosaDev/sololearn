# Bowling Game

The given code declares a `Bowling` class with its constructor and `addPlayer()` method. Each player of the game has a name and points, and are stored in the players `HashMap`.

The code in `main` takes 3 players data as input and adds them to the game. You need to add a `getWinner()` method to the class, which calculates and outputs the name of the player with the maximum points.

- **Sample input**:
```
Dave 42
Amy 103
Rob 64
```

- **Sample output**:  
```
Amy
```

>You need to iterate through the `HashMap` to find the element with the maximum points and output its corresponding key.