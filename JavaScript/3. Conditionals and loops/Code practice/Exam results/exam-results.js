const score = parseInt(readLine(), 10);

switch (true) {
  case score >= 88:
    console.log("excellent");
    break;
  case score >= 40 && score <= 87:
    console.log("good");
    break;
  case score <= 39:
    console.log("fail");
    break;
}
