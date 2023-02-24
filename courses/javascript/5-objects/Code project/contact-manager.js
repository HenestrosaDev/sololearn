function Contact(name, number) {
  this.name = name;
  this.number = number;

  this.print = function () {
    console.log(`${this.name}: ${this.number}`);
  };
}

const a = new Contact("David", 12345);
const b = new Contact("Amy", 987654321);

a.print();
b.print();
