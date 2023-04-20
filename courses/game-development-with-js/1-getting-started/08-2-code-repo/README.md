# Handling Events

Time to add some JavaScript!

**Tasks**:
1. Add a button to the HTML with the text **Jump**.
2. Create a `count` variable to store how many times the button is clicked.
3. Handle the click event for the button and increment the count variable during each click.

**Hints**:
1. Give the button an **id**, so you can refer to it using JavaScript with the `document.getElementById()` function.
2. Use the `window.onload` event to take the reference of your button.
3. To handle the click event, use the `onclick` handler of the button.
4. Initialize the `count` variable to 0 and increment it when the button is clicked, like `count += 1`.

**HTML code example**:
```html
<button id="jump">Jump</button> 
```

**JavaScript code example**:
```js
window.onload = function() {
    let btn = document.getElementById("jump");
    let count = 0;

    btn.onclick = function() {
        count += 1;
    }
} 
```

**Expected result**:

![contentImage](https://api.sololearn.com/DownloadFile?id=4768)

>You should see the number of clicks increment in a dialog every time the **Jump** button is clicked.