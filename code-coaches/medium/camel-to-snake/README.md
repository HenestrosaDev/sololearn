# Camel to snake

The company you are working for is refactoring its entire codebase. It's changing all naming conventions from camel to snake case (camelCasing to snake_casing).  
Every capital letter is replaced with its lowercase prefixed by an underscore _, except for the first letter, which is lowercased without the underscore, so that SomeName becomes some_name. 

---
 
**Task**: Write a program that takes in a string that has camel casing, and outputs the same string but with snake casing. 
 
---

**Input format**: A string with camelCasing. 
 
**Output format**: The same string but with snake_casing. 

---
 
**Sample input**:  
```
camelCasing
``` 
 
**Sample output**: 
```
camel_casing
```

---

>**Explanation**: The capital C was lowercased and prefixed by an underscore.