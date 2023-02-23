const scores = [68, 95, 54, 84, 77, 75, 63, 74, 69, 80, 71, 63];
let numberOfPasses = 0;

for (const score of scores) {
  if (score >= 70) {
    numberOfPasses++;
  }
}

console.log(numberOfPasses);
