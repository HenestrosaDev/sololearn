# User Input

As coded right now, our circle moves up only when the jump button is clicked. We want to change it so that it moves if any key on the keyboard is clicked or if the screen is tapped on a mobile device.

**Tasks**:
1. Handle the `onkeydown` and `ontouchstart` events by adding the same logic as with the Jump button.
2. Remove the **Jump** button and its click handler from the page.

**Hint**: Here's how you should handle the events:

```js
document.onkeydown = function() {
  count += 1;
  y -= 25;
}
document.ontouchstart = function() {
  count += 1;
  y -= 25;
}  
```

>Now, when you tap the screen or press any key, the circle should move up and the `count` property should update.