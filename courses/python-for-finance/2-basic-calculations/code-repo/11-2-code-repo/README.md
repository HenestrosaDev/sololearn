# Plotting

Let's continue with our Bitcoin calculations.
You decide to invest $1000 in Bitcoin in 2018, at the price in the declared array: $3869.47.

**Tasks**:
1. Calculate how much your investment is worth at the end of each year using the prices denoted in the code.
2. Draw a chart to showcase how much your $1000 investment changes in value each year.

**Hint**: First, calculate how many Bitcoins you will have at the start by dividing your investment by the cost of Bitcoin in the first year (the first element of the given array). Then multiply the entire array of the prices by that number to get the value for each year. Use np.multiply(array, number) to multiply an array with a number.

Expected chart

![contentImage](https://api.sololearn.com/DownloadFile?id=4700)

>Don't forget to import the `matplotlib.pyplot` package under the name `plt` to draw the chart using `plt.plot()` function.  
>Add the `plt.savefig()` function (using the name of the chart as an argument) at the end of the code to draw the chart in the CodePlayground.