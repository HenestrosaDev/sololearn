const basic = {
  ex1: "PushUps: 20 times",
  ex2: "Jumps: 20 times",
};

const advanced = {
  ex3: "Squats: 30 times",
  ex4: "Run: 2km",
};

const total = Object.assign({}, basic, advanced);

for (const ex in total) {
  console.log(total[ex]);
}
