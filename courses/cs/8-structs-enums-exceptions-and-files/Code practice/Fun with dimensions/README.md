# Structs

A **cuboid** is a three-dimensional shape with a `length`, `width`, and a `height`.

The program you are given takes takes those dimensions as inputs, defines `Cuboid` struct and creates its object.

Complete the program by creating a constructor, which will take the `length`, the `width`, and the `height` as parameters and assign them to its struct members. Also, complete `Volume()` and `Perimeter()` methods inside the struct, to calculate and return them, so that the given methods calls work correctly.

---

**Sample input**:  
```
5
4
5
```

**Sample output**:  
```
Volume: 100
Perimeter: 56
```

---

>**Cuboid volume**: `length * width * height`  
>**Cuboid perimeter**: `4 * (length + width + height)`
