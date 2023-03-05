# Route Maker

You are making a program for a navigation system. Your program needs to take a number **N** as input, followed by **N** strings, which represent **city names**.

Store the city names in a slice. Declare a variadic function `route()`, which takes its arguments from the slice.

The `route()` function should output the route, which combines the city names using an arrow. Check the sample input/output for reference.

---

**Sample input**:
```
3
Boston
Chicago
Washington
```

**Sample output**:
```
Boston->Chicago->Washington->
```

---

>Create the output by iterating over the arguments and concatenating an arrow after each value.