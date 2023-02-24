function calc(adults, children) {
  return adults * 12 + children * 6;
}

window.onload = function () {
  let btn = document.getElementById("buyBtn");
  btn.onclick = function () {
    let adults = document.getElementById("adults").value;
    let children = document.getElementById("children").value;
    let price = calc(adults, children);
    alert(price);
  };
};
