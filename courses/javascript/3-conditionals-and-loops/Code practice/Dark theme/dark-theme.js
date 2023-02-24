const main = () => {
  const themeNumber = parseInt(readLine(), 10);
  switch (themeNumber) {
    case 1:
      console.log("Light");
      break;
    case 2:
      console.log("Dark");
      break;
    case 3:
      console.log("Nocturne");
      break;
    case 4:
      console.log("Terminal");
      break;
    case 5:
      console.log("Indigo");
      break;
  }
}
