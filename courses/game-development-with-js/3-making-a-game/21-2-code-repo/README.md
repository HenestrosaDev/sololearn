# Game Loop

At this point we will only redraw when the **Jump** button is tapped. It is now time to add a real game loop so we can add more advanced movements in future steps.

**Tasks**:
1. Create a `draw()` function and move all drawing logic to it.
2. Use the `window.requestAnimationFrame();` to call it continuously as the game loop.
3. At this point, the **Jump** button's click event should only increment the `count` variable and change the `y` position of the circle.
4. Call the **draw()** function to start the game loop.

```js
btn.onclick = function() {
    count += 1;
    y -= 25;
function draw() {
    context.clearRect(0, 0, 600, 400);
        
    context.beginPath();
    context.arc(x, y, 50, 0, 2 * Math.PI);
    context.fillStyle="red";
    context.fill();

    context.font = '25px Arial';
    context.fillStyle = 'white';
    context.fillText("Count: " + count, 20, 30);
        
    window.requestAnimationFrame(draw);
} 
```

>The `draw()` function should clear the canvas. Draw the text and the circle and call the `window.requestAnimationFrame();` function.
