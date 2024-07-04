# Designing, Part 3

And now, for the finishing touch!  
Let's move our social page links to the center and use their logos instead of the names.

**Task**:
1. Enclose all the `<a>` elements into the `<div>` element and add a `class="social"` attribute in order to link the predefined CSS.
2. Instead of names (Facebook, Instagram, etc.) open the `<img>` tags and add src attribute with the corresponding links to logos.
Here are links to some social network logos: [Facebook](https://cdn2.iconfinder.com/data/icons/social-media-2285/512/1_Facebook_colored_svg_copy-256.png), [LinkedIn](https://cdn3.iconfinder.com/data/icons/capsocial-round/500/linkedin-256.png), [Instagram](https://cdn3.iconfinder.com/data/icons/2018-social-media-logotypes/1000/2018_social_media_popular_app_logo_instagram-256.png).
3. Add `height="30px"` and `width="30px"` attributes in each `<img>` tag to set the proper size.

**Code template**:
```
<div class = "social">
    <a href="https://www.facebook.com/Sololearn">
        <img src="Facebook logo link" height="30px" width="30px"></a>
        <a href="https://www.linkedin.com/company/sololearn-inc-/">
        <img src="LinkedIn logo link" height="30px" width="30px"></a>
    </a>
</div> 
```

**Example**:

![contentImage](https://api.sololearn.com/DownloadFile?id=4657)

>You can add to the links the `target` attribute with a `_blank` value to have the link open in a new window or new tab.