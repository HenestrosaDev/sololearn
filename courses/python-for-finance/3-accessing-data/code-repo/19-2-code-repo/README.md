# Bitcoin Price

Time to get some real data! The Bitcoin price can be found on Yahoo Finance using the ticker **BTC-USD**.

**Tasks**:
1. Import the `yfinance` package and change the code to get the real price of Bitcoin from Yahoo Finance over the last year `(period='1y')`
2. Calculate how much **$1000** invested at the beginning of the period will be worth each day.
3. Plot a chart showing the change in the investment's value.

**Hint**: Replace your code and set it up for the data you get from Yahoo Finance — you don't need to work with the initial array you were given at the start of the project.  
Here is an example of how you should get your data as an array:
```
data = yf.Ticker('BTC-USD')
x = data.history('1y')['Close'] 
```

Use this code to replace the part where the bitcoin array was initially created.

**Result example**:
![contentImage][https://api.sololearn.com/DownloadFile?id=4708]

>You can use the same logic as before: calculate the number of coins you would get for $1000 on the first day, then multiply that value by the price of Bitcoin each day using `np.multiply()`.