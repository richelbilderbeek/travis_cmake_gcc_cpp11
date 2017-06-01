# travis_cmake_gcc_cpp11

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_cmake_gcc_cpp11.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_cmake_gcc_cpp11)

This GitHub is part of:

 * [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial)
 
The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `cmake`
 * C++ compiler: `gcc`
 * C++ version: `C++11`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * Use `C++14`: [travis_cmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_cmake_gcc_cpp14)
 * Add `lcov`: [https://github.com/codecov/example-cpp11-cmake](https://github.com/codecov/example-cpp11-cmake)

Equally complex builds:

 * Use `qmake` instead of `cmake`: [travis_qmake_gcc_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11)

Less complex builds:

 * Use `C++98`: [travis_cmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_cmake_gcc_cpp98)
