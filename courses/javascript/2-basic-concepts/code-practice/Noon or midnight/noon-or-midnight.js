const main = () => {
  const hour = parseInt(readLine(), 10);
  if (hour > 12) {
    console.log("pm");
  } else {
    console.log("am");
  }
}
