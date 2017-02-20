# monkey is a search engine
tra-ta-ta description

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

## Compile program using `cmake`
```sh
$ mkdir build
$ cd build
$ cmake ..
$ make
$ cd ..
$ ./build/src/Monkey
```
