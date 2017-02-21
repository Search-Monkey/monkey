# monkey is a search engine
Flexible search engine 

# Development
## Folder structure
```
src - sources 
build - build Folder
tests - Unit-tests
```
## Dependencies
 * C++ compiler which supports C++11 standard( gcc 4.8.2 or clang )

##Build
You can build project by running following command:
```sh
$ make
```

# Tips & Tricks

## Make command `make` be verbose
```sh
$make --trace
```

## Delete all untrackable files from working directory
```sh
$git clean -df
```

## Remember passwords by git
```sh
$ git config --global credential.helper "cache --timeout=36000"
```
see [Is there a way to skip password typing when using https:// on GitHub?](http://stackoverflow.com/questions/5343068/is-there-a-way-to-skip-password-typing-when-using-https-on-github)

## Compile program using `cmake`
```sh
$ mkdir build
$ cd build
$ cmake ..
$ make
$ cd ..
$ ./build/src/Monkey
```
