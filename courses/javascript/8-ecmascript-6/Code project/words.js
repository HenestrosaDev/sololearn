class Add {
  constructor(...words) {
    this.words = words;
  }

  print() {
    let result = "$";

    for (const word of this.words) {
      result += `${word}$`;
    }

    console.log(result);
  }
}

const x = new Add("hehe", "hoho", "haha", "hihi", "huhu");
const y = new Add("this", "is", "awesome");
const z = new Add(
  "lorem",
  "ipsum",
  "dolor",
  "sit",
  "amet",
  "consectetur",
  "adipiscing",
  "elit"
);

x.print();
y.print();
z.print();
