import matplotlib.pyplot as plt
import numpy as np
import yfinance as yf

data = yf.download("BTC-USD", start="2020-10-01", end="2021-10-12")["Close"]

initial_investment = 1000
bitcoins_bought = initial_investment / data[0]

investment_value_over_days = np.multiply(data, bitcoins_bought)

plt.plot(investment_value_over_days)
plt.savefig("plot.png")
