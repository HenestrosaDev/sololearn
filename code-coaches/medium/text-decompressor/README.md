# Text decompressor

You need to decompress text. The compressed version has a number next to each symbol/letter, representing the amount of time that symbol should appear. For example, **a2b3** is the compressed version of **aabbb** 
 
---

**Task**: Write a program that takes the compressed text as input and outputs the decompressed version. 

---
 
**Input format**: A single string with letters/symbols, each followed by a number. 
 
**Output format**: A string, representing the decompressed text. 

---
 
**Sample input**:  
```
k2&4b1
``` 
 
**Sample output**:
```
kk&&&&b
```

---

>**Explanation**: The letter k appears 2 times, the symbol & - 4 times and the letter b - 1 time.