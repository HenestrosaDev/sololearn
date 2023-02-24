const main = () => {
  const distance = parseInt(readLine(), 10);
  const averageSpeed = 40;

  const hours = distance / averageSpeed;
  const minutes = hours * 60;

  console.log(minutes);
}