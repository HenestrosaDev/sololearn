# Drawing Application

You are creating a drawing application which currently has only 1 tool - a pencil. You want to add a `Brush` and a `Spray` to the drawing toolbar.

The program you are given declares an `IDraw` interface with the `StartDraw()` method, and class `Draw`, which performs pencil drawing by implementing the `IDraw` interface. It outputs `Using pencil`.

Complete the given `Brush` and `Spray` classes by
- inheriting them from class `Draw`.
- implementing the `StartDraw()` method for each tool, in order to output `Using brush` for `Brush`, or `Using spray` for `Spray`.

The `Draw` objects and their method calls are provided in `Main()`.

>Don't forget about the `override` keyword.
