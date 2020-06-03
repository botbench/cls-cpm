<style>
figure {
  border: 1px #cccccc solid;
  padding: 4px;
  margin: auto;
}

figcaption {
  background-color: black;
  color: white;
  font-style: italic;
  padding: 2px;
  text-align: center;
}
</style>
# CLS for CP/M
There is no built-in utility to clear the screen, so as a first project, I created `CLS` for CP/M. So, if you're tired of looking at messy screens full of clutter, look no farther! This will finely crafted application will not only clear your screen, it will do so with precision, and without delay!

<figure>
  <img alt="before" src="img/before.png" width="100%">
  <figcaption>Before CLS</figcaption>
</figure>
<figure>
  <img alt="before" src="img/after.png" width="100%">
  <figcaption>After CLS</figcaption>
</figure>

### Note
This has only been tested on an SC126 Z180 based retro computer, running CP/M 3. 

Made to be built with Z88DK. Change the options in the Makefile to reflect the machine you're compiling for.
