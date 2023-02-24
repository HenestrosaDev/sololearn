const main = () => {
  const event = readLine();
  setReminder(event);
}

const setReminder = (event) => {
  console.log(`You set a reminder about ${event}`);
}
