# jank stb_image test

Based on https://gist.github.com/keychera/b20d97e0f4ae3824b547650f4884e729, and https://book.jank-lang.org/cpp-interop/native-libs.html

Tested using [jank-win](https://github.com/ikappaki/jank-win) MSYS Clang, and also working on Mac/Linux jank (using latest version on brew/apt, see [#installation](https://book.jank-lang.org/getting-started/01-installation.html)).

***<<< NOTE >>>*** Please also check [dev branch](https://github.com/funatsufumiya/jank-stb_image-test/tree/dev). Direct including `std_image.h` is done there. main branch is just for error report and workaround.

## Run

```bash
$ lein run
```

## Dev

```bash
$ cd native-lib
$ clang++ -shared -o libmystbimage.dll -lz my_stb_image.cpp

# Linux.
# $ clang++ -shared -o libmystbimage.so -fPIC -lz my_stb_image.cpp

# macOS.
# $ clang++ -shared -o libmystbimage.dylib -lz my_stb_image.cpp
```
