# Drawing on Canvas

You're doing great! Let's draw a red circle on our canvas!

**Tasks**:
1. Take the reference of the `canvas` using JavaScript
2. Add `x` and `y` variables to define where the circle should be drawn. Initialize it to the center-bottom of the canvas (x = 300; y = 350)
3. Draw a red circle with the size 50.

**Hints**:
Drawing a circle is done using the `arc` function of the context.

```js
var canvas = document.getElementById("canvas");
var context = canvas.getContext("2d");
var x = 300;
var y = 350;

context.arc(x, y, 50, 0, 2 * Math.PI);
context.fillStyle="red";
context.fill(); 
```

Here is the expected result:

![contentImage](https://api.sololearn.com/DownloadFile?id=4770)