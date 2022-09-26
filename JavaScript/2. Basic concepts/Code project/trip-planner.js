function main() {
  let distance = parseInt(readLine(), 10);
  let averageSpeed = 40;

  let hours = distance / averageSpeed;
  let minutes = hours * 60;

  console.log(minutes);
}