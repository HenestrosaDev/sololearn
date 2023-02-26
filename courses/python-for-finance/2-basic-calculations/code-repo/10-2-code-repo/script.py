import numpy as np
import numpy_financial as npf

# price for 2018-2021
bitcoin = [3869.47, 7188.46, 22203.31, 29391.78]

cashflow = [-500000.0] + [price * 10 for price in bitcoin]

irr = npf.irr(cashflow)
print(irr)
