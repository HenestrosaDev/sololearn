# The Skills Section

Great job! Now, it's time to create our skill progress bars.

**Task**:
1. In the CSS code, select the skill progress element (`.skills ul li .skill_prog`) and set a `width` and a `height` for it. Also add a `position: relative` property. This combination of properties will specify the relative size of the bar.
2. Select the `<span>` element from the list (`.skills ul li .skill_prog span`) and add `position: absolute` property. Then set a `height` and a `padding` for it.

**Example**
```css
.skills ul li .skill_prog {
    width: 60%;
    height: 5px;
    position: relative;
}

.skills ul li .skill_prog span {
    position: absolute;
    height: 100%;   
    background: #2F5A78;
    padding-right: 50px;
}
```

![contentImage](https://api.sololearn.com/DownloadFile?id=4686)

>In the next stage we will tweak the alignment of the progress bars.