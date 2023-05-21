# The Skills Section

It's time to design our Skills section! We will use progress bars with percentages to represent proficiency with various skills. 

In the HTML code, the `skills` section is a **list**.

**Task**:
1. In the HTML code, `skills`, note your skill name in the `skill_name` section, then specify your skill progress in `style="width: n %"` format inside the `<span>` element, where `n` is the percent of skill progress. Also, add the same percent in the `skill_per` section.
2. In the CSS code, select the list elements (`.skills ul li`) and add `display: flex` and `justify-content: space-between` properties. This will arrange all the elements correctly.

Also add some layout properties as we demonstrate in the example below. Look at it to get a better understanding.

**HTML Example**
```html
<li>
  <div class="skill_name">
    JS
  </div>
  <div class="skill_prog">
    <span style="width: 80%;"></span>
  </div>
  <div class="skill_per">80%</div>
</li> 
```

**CSS Example**
```css
.skills ul li {
    display: flex;
    margin-bottom: 10px;
    justify-content: space-between;
    align-items: center;
    margin-left: -15px;
} 
```

![contentImage]()

>The `justify-content` property defines how the browser distributes space between and around content items.