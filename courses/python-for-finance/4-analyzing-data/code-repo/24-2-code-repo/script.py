import matplotlib.pyplot as plt
import numpy as np
import yfinance as yf

data = yf.download("BTC-USD", start="2015-01-01")

daily_returns = data["Adj Close"].pct_change()
volatility = np.std(daily_returns)

trading_days_in_a_year = 365
annualized_volatility = volatility * np.sqrt(trading_days_in_a_year)
risk_percentage = annualized_volatility * 100
print(f"Risk: {risk_percentage:.2f}%")

annualized_returns = (1 + daily_returns.mean()) ** trading_days_in_a_year - 1
sharpe_ratio = annualized_returns / annualized_volatility
print(f"Sharpe: {sharpe_ratio:.2f}")
