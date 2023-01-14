# Event Handling

Time to finalize our price calculation and add the functionality to our form!

**Tasks**:
1. Add the `window.onload` event handler.
2. Inside it, take the reference to the `buy` button (assign it an id, so you can take its reference).
3. Handle the click event of the `buy` button: inside the handler, take the references of the adults and children text fields using their ids.
4. Calculate the total price of the tickets using the `calc()` function.
5. Output the price to the screen using the `alert()` function.

**Hint**: Take the current value using the `value` property: here is how your `window.onload` event handler should look like:
```
window.onload = function() {
  let btn = document.getElementById("buyBtn");
  btn.onclick = function() {
    let adults = document.getElementById("adults").value;
    let children = document.getElementById("children").value;
    let price = calc(adults, children);
    alert(price);
  }
} 
```

Do not forget about giving the buy button a **unique id**, so you can reference it from your code.

>Congratulations! Now you have a working ticketing website - play around with the form, input numbers and see the resulting price.