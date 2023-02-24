Returning from Functions

We are creating our own social network application and need to have a hashtag generator program.

Complete the program to output the input text starting with the hashtag (**#**). Also, if the user entered several words, the program should delete the spaces between them.

---

**Sample input**: 
```
code sleep eat repeat
```

**Sample output**: 
```
#codesleepeatrepeat
```

---

**Hint**: You can use the `replace()` function to replace the spaces (" ") with empty strings (""). See how it works:
```
s = "I like pears"
s1 = s.replace("pears", "apricots")
print(s1)

#prints I like apricots
```

>Notice that `replace()` function returns a new string, so you need to declare a new variable for it.