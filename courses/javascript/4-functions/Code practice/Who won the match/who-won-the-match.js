const main = () => {
  const goalsTeam1 = parseInt(readLine(), 10);
  const goalsTeam2 = parseInt(readLine(), 10);

  finalResult(goalsTeam1, goalsTeam2);
}

const finalResult = (goalsTeam1, goalsTeam2) => {
  if (goalsTeam1 > goalsTeam2) {
    console.log("Team 1 won");
  } else if (goalsTeam1 < goalsTeam2) {
    console.log("Team 2 won");
  } else {
    console.log("Draw");
  }
}
