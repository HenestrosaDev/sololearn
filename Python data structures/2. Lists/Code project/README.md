# Average Word Length

Given a sentence as input, calculate and output the **average word length of that sentence**.

To calculate the average word length, you need to **divide the sum of all word lengths by the number of words in the sentence**.

- **Sample input**:
```
this is some text
```

- **Sample output**:
```
3.5
```

**Explanation**: There are 4 words in the given input, with a total of 14 letters, so the average length will be: `14 / 4 = 3.5`

>Strings have a `split()` method, which returns the string split into a list, with the given separator. By default, the separator is a space, so calling `split()` will return a **list containing the words of the string as items**.
