# Positioning

The image in our description does not look very appealing. Let's change that and also make our form stick to the bottom of the page, irrespective of its height!

**Tasks**:
1. Make the image in the section element `float` to the `left`, with the text wrapping around it.
2. Give the image a **10px margin** to the **right**, so there is a gap between it and the text.
3. For our buy section: make its **position fixed** to the **bottom right** of the page. Give it a **width of 100%** so that it spans the entire width of the page and set the `box-sizing` property to `border-box`, so that the size does not overflow the page.

**Hint**: Here is how to set the fixed position:
```
#buy {
  position: fixed;
  bottom: 0px;
  right: 0px;
  width: 100%;
  box-sizing: border-box; 
} 
```

The result should look like this:

![contentImage](https://api.sololearn.com/DownloadFile?id=4764)