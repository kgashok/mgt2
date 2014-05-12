Eclipse + Google C++ testing
=============

A setup which should work on the Kepler (8.3) version of Eclipse. 
You will need to have Google C++ Testing framework already installed. 
Please review this [video](https://www.youtube.com/watch?v=ukF3kUH1kxM).

In my case, I used the Cygwin [ToolChain](img/ToolChain.PNG) to get it to compile, build and run eventually.
> ![Image](img/ToolChain.PNG?raw=true)

Here's a screen shot of the Test Driven Development (TDD) setup. Notice the two failing tests in the Unit Testing support tab C/C++ Unit next to Console). 
> ![Image](img/Eclipse%20Google%20TDD%20capture.PNG?raw=true)

There is also native support in Eclipse for other testing frameworks (including Boost Test runner). 
To set this up, read [this](http://feelings-erased.blogspot.in/2012/07/eclipse-juno-has-landed-with-unit.html) and [this](http://www.eclipse.org/forums/index.php/t/512946/).

### Other References ###
> For MS Visual Studio setup, this article is useful - How to start working with the Google C++ Testing Framework in less than 10 minutes - CodeProject http://buff.ly/1qu6neM

> Test-driven development and unit testing with examples in C++ http://buff.ly/1mPZhLM 
![Image](img/TDD.png?raw=true)


