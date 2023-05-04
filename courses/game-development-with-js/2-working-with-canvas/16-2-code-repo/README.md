# Animation

In this part, we will move the circle up a little every time the Jump button is clicked and also display the count value on the canvas.

**Tasks**:
1. In the `onclick` event of the Jump button, decrease the `y` position of the circle by 25 (`y -= 25`)
2. In the `onclick` event of the Jump button, clear the `canvas`, and draw the circle at its new position.
3. Also, draw the `count` variable's value as white text at position (20, 30).

**Code example**:
```js
btn.onclick = function() {
    count += 1;
    //changing the y position
    y -= 25;
    //clearing the canvas
    context.clearRect(0, 0, 600, 400);
     
    //redrawing the circle   
    context.beginPath();
    context.arc(x, y, 50, 0, 2 * Math.PI);
    context.fillStyle="red";
    context.fill();

    //drawing the count value
    context.font = '25px Arial';
    context.fillStyle = 'white';
    context.fillText("Count: " + count, 20, 30);
}
```

Expected result if you click the Jump button 8 times:

![contentImage](https://api.sololearn.com/DownloadFile?id=4705)

>Note that you should repeat the circle inside the `on.click` function.
