Eclipse + Google C++ testing
=============

### Quick Setup
- C++ unit test start guide, how to set up Google Test (gtest) in Eclipse? - CodeProject http://buff.ly/1qmkiBQ 
- A 8 minute video - Setup Eclipse with Google Test - YouTube http://buff.ly/1oAYFII 
- Creating a Repository: Git & Eclipse - YouTube http://buff.ly/1oB25Lv 


### Detailed Setup
A setup which should work in the Kepler (8.3) version of Eclipse. 
You will need to have Google C++ Testing framework already installed. 
Please review this [video][Eclipse youTube] for more details.

In my case, I used the Cygwin [ToolChain](img/ToolChain.PNG) to get it to compile, build and run eventually.
> ![Image](img/ToolChain.PNG?raw=true)

Here's a screen shot of the Test Driven Development (TDD) setup. 
> ![Image](img/Eclipse%20Google%20TDD%20capture.PNG?raw=true)

Notice the two failing tests in the Unit Testing support tab C/C++ Unit next to Console). There is also native support in Eclipse for other testing frameworks (including Boost Test runner).
To set this up, read [this](http://feelings-erased.blogspot.in/2012/07/eclipse-juno-has-landed-with-unit.html) and [this](http://www.eclipse.org/forums/index.php/t/512946/).

### Other References ###
- For MS Visual Studio setup, this article is useful - How to start working with the Google C++ Testing Framework in less than 10 minutes - CodeProject http://buff.ly/1qu6neM

- Test-driven development and unit testing with examples in C++ http://buff.ly/1mPZhLM 
![Image](img/TDD.png?raw=true)


[Eclipse youTube]: https://www.youtube.com/watch?v=ukF3kUH1kxM  "Eclipse and Google C++ Test Framework"
