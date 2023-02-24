const main = () => {
  const prodId = readLine();
  const price = parseInt(readLine(), 10);
  const discount = parseInt(readLine(), 10);

  const product = new Product(prodId, price);
  console.log(`${product.prodId} price: ${product.price}`);

  product.changePrice(discount);
  console.log(`${product.prodId} new price: ${product.price}`);
}

class Product {
  constructor(prodId, price) {
    this.prodId = prodId;
    this.price = price;
  }

  changePrice(discount) {
    this.price -= (discount / 100) * this.price;
  }
}
