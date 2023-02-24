const main = () => {
  const amount = parseFloat(readLine(), 10);
  const rate = parseFloat(readLine(), 10);

  console.log(convert(amount, rate));
}

const convert = (amount, rate) => {
  return amount * rate;
}