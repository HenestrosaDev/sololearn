# Experience/Education

Now it's time to describe and design your work experience and/or education, to highlight your career path and skill development.
We provide guidance for the experience section only below, but you may add a section about your education in the same format if desired.

**Task**
1. In the HTML code, "Experience/Education" section, note your career experience in the `explist` list by adding
   - dates in the `date` sections
   - job titles in the `jobtitle` sections
   - and job descriptions in the `jobdesc` sections
2. In the CSS code, define a color, a font size, and a font weight for the `date` section.

**HTML Code Example**
```
<li>
  <div class="date">2015-2019</div> 
  <div class="jobinfo">
    <div class="jobtitle">Senior Software Engineer - Google</div> 
  <div class ="jobdesc">Developed scalable database indexing technology. Created GraphQL APIs for accessing Google Earth</div>
  </div>
</li> 
```

**CSS Code Example**
```
.date {
    font-size: 16px;
    color: #2F5A78;
    font-weight: bold;
} 
```

![contentImage](https://api.sololearn.com/DownloadFile?id=4681)

>In our example we also set a bolder font for job titles (use `.jobinfo .jobtitle` to select that section in the CSS code).
