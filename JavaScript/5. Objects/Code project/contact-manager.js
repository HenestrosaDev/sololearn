function Contact(name, number) {
  this.name = name;
  this.number = number;

  this.print = function () {
    console.log(`${this.name}: ${this.number}`);
  };
}

var a = new Contact("David", 12345);
var b = new Contact("Amy", 987654321);

a.print();
b.print();
