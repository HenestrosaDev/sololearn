# Shapes

You are working on a graphical app, which includes multiple different shapes.

The given code declares a base Shape class with an abstract ```area()``` method and a width attribute.

You need to create two `Shape` subclasses, `Square` and `Circle`, which initialize the width attribute using their constructor, and define their `area()` methods.

The `area()` for the `Square` class should output the area of the square (the square of the width), while for the `Circle`, it should output the area of the given circle (PI\*width\*width).

The code in main creates two objects with the given user input and calls the `area()` methods.

---

**Sample input**:
```
5
2
```

**Sample output**:
```
25
12.566370614359172
```

---

The area of the square is 5\*5=25, while the area of the circle is PI\*2\*2=12.566370614359172

---

>Use the `Math.PI` constant for the area calculation of the circle.