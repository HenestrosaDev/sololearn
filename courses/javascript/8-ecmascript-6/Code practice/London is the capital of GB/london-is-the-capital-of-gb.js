const main = () => {
  const country = readLine();
  const capital = readLine();

  console.log(countryCard(country, capital));
}

const countryCard = (country, capital) => {
  return `Name: ${country}, Capital: ${capital}`;
};
