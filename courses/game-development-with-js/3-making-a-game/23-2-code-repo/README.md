# Adding Gravity

Time to finalize our project and make it a game! Now let's add gravity to the ball so it falls down when in the air, and let's reset the score when it hits the ground.

**Tasks**:
1. First make the movements relative to time. For that, add a t variable and initialize it to the current time using `Date.now()`.
2. Next, add a speed variable and initialize it to 25.
3. In the `draw()` function calculate the time difference between the frames in the timePassed variable and set the t variable to the current time.
    
    ```
    var timePassed = (Date.now() - t) / 1000;
    t = Date.now();
    ```

4. To add the effect of gravity, we need to increase the speed when the ball is falling. Use the following code:
    ```
    if (y <= 350) {
      speed += 50 * timePassed;
      y += speed*timePassed;
    } 
    ```
    This will increase the speed of the ball and move it down using that speed.

5. When the ball jumps, reset the speed to 25. Add `speed = 25` to the event handlers.
6. Reset the score when the ball hits the ground:
    ```
    if (y > 350) {
      count = 0
    } 
    ```

>Congratulations, you have a fully functional game! Play around with the falling speed and gravity, add more advanced logic, customize your game and share your creation with the community!
