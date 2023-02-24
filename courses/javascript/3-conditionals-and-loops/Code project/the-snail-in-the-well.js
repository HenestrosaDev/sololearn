const main = () => {
  const depth = parseInt(readLine(), 10);
  
	const climbUpDistance = 7;
  const slipBackDistance = 2;
  
	let totalDistance = 0;
  let days = 0;

  while (totalDistance < depth) {
    days++;
    totalDistance += climbUpDistance;

    if (totalDistance >= depth) {
      break;
    }

    totalDistance -= slipBackDistance;
  }

  console.log(days);
}