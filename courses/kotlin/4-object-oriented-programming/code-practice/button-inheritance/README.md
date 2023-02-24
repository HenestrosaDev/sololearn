# Button as a Component

Your `Button` class looks pretty good! However, you also need to have images on the form. As the images have the same `width` and `height` properties, you decide to create a base class called `Component` and inherit the `Button` and `Image` classes from it.

The `Button` class should have its own `name` property and `tap()` function, while the `Image` class should have a `draw()` function, outputting its `height` and `width` in the format: **widthxheight**. So for an image with width of **100** and height of **150**, the output should be `100x150`.

Complete the given code to define the `Image` class and inherit the `Button` and `Image` classes from the `Component` class.

>Note that `width` and `height` are **Integers**, so in order to concatenate them to a string you need to convert them using the `toString()` function: `width.toString()`