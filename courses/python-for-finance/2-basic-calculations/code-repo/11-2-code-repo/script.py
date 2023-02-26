import matplotlib.pyplot as plt
import numpy as np
import numpy_financial as npf

# price for 2018-2021
bitcoin = [3869.47, 7188.46, 22203.31, 29391.78]

initial_investment = 1000
bitcoins_bought = initial_investment / bitcoin[0]

investment_value_over_years = np.multiply(bitcoin, bitcoins_bought)
years = range(2018, 2022)

plt.xticks(years)
plt.plot(years, investment_value_over_years)
plt.savefig("plot.png")
