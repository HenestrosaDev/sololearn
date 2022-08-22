# Boolean logic

Now that we know how to combine multiple conditions, let's improve our gold purity checker program and output the corresponding purity level in Karats!

Here is the purity chart we’ll be using:
- **24K** – 99.9%
- **22K** – 91.7%
- **20K** – 83.3%
- **18K** – 75.0%

If the percentage is between **75** and **83.3**, the gold is considered to be *18K*.
If it's between **83.3** and **91.7** - then it's *20K*, and so on.

Given the percentage as input, output the corresponding Karat value, including the letter K.

- **Sample input**: `92.4`
- **Sample output**: `22K`

> Do not output anything, if the percentage is lower than 75%.
