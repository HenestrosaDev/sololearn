const main = () => {
  const exam1 = parseInt(readLine(), 10);
  const exam2 = parseInt(readLine(), 10);
  const exam3 = parseInt(readLine(), 10);

  console.log(Exams.average(exam1, exam2, exam3));
}

class Exams {
  static average(...scores) {
    const sumScore = scores.reduce((a, b) => a + b);
    return Math.round(sumScore / scores.length);
  }
}
