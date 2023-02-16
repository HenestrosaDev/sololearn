# Interfaces

On the car dealership website, you can pre-order a car by specifying its color and equipment.

The program you are given takes the `color` and the `equipment` type as input and pass them to constructor of already declared `Car` class.

Implement `IColor` and `IEquipment` interfaces for the `Car` class and reimplement their `GetColor` and `GetEquipment` methods inside it. Each of them should output corresponding message about color/equipment (see sample output).

---

**Sample input**:  
```
Blue
Standard
```

**Sample output**:  
```
Color: Blue
Equipment: Standard
```

---

>To implement multiple interfaces, use a comma separated list of interfaces when creating the class.
