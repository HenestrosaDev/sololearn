# Book Titles

You have been asked to make a special book categorization program, which assigns each book a special code based on its title.

The code is equal to the first letter of the book, followed by the number of characters in the title. For example, for the book *Harry Potter*, the code would be: H12, as it contains 12 characters (including the space).

You are provided a `books.txt` file, which includes the book titles, each one written on a separate line. Read the title one by one and output the code for each book on a separate line.

For example, if the `books.txt` file contains:  
`Some book`  
`Another book`  

Your program should output:  
`S9`  
`A12`  

>Recall the `readlines()` method, which returns a list containing the lines of the file.  
Also, remember that all lines, except the last one, contain a \n at the end, which should not be included in the character count.