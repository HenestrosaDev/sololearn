const main = () => {
  const number = readLine();
  const status = readLine();

  const flight = new Flight(number, status);
  console.log(`The flight ${flight.number} is ${flight.status}`);
}

class Flight {
  constructor(number, status) {
    this.number = number;
    this.status = status;
  }
}
