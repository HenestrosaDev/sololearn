# Special Sequences

You are a social media marketing specialist doing research on social networks.

Write a program for your research that will take text as input and output all of the **hashtags** in it separately.

- **Sample input**:   
`No #pressure, no #diamonds`

- **Sample output**:  
`#pressure`  
`#diamonds`  

>Remember that the `re.findall()` method returns a list of all substrings that match a pattern. So, you can use the regex `r"#\w+"` to find all words that start with a hashtag and output them on separate lines.