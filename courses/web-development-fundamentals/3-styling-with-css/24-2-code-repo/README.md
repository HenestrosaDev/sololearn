# Layout

We need to change the layout of our form so that the fields are laid out horizontally.

Here is what we want to achieve:

![contentImage](https://api.sololearn.com/DownloadFile?id=4763)

To achieve this layout, we need to do the following:
1. Modify the HTML of the form: remove the `<br>` elements that separate the form into lines.
	- Add `<br>` elements after the `<label>` tags, so that the number field appears after the label, on a new line.
	- Wrap each section element into `<div>` tags, and provide them a `class="form-section"`.
	- Now we will have 3 `form-section` elements. Two of them will contain the labels and their corresponding fields, while the 3rd one will contain the button.
2. In CSS, set the `display` property of the form to `flex`.
3. Set the `flex` property to `1` for the `form-section` class.
4. For our button, add a `height` of `40px` and set the `width` to `100%`.

**Hint**: Here is how the flex layout CSS should look like:
```
form {
	display: flex;
}

.form-section {
	flex: 1;
} 
```