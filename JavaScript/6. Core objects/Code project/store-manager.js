const increase = parseInt(readLine(), 10);
const prices = [98.99, 15.2, 20, 1026];

const increasedPrices = [];

for (const price of prices) {
  increasedPrices.push(price + increase);
}

console.log(increasedPrices);