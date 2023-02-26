# IRR

Let's continue with our Bitcoin project!

You decide to start a Bitcoin mining business in January of 2017. You make an initial investment of **$500k** to buy the required mining hardware.
Each year the hardware can mine **10** bitcoins, so your first return will come on January 1, 2018.

**Task**: Calculate the return for each year and output the **IRR** of the project.

**Hint**: Create an array with the initial investment as the first element (with a negative value), followed by the cost of 10 bitcoins per year — multiply the values of the given array by 10 and accordingly add them to the list you created, placing them after the investment value.

**Expected result**: `0.07297215919675315` 

>Use `npf.irr()` function to calculate the IRR.