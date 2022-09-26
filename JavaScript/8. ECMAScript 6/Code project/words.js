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

var x = new Add("hehe", "hoho", "haha", "hihi", "huhu");
var y = new Add("this", "is", "awesome");
var z = new Add(
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
