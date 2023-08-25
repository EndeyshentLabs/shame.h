# Shame.h

Std replacement for C programming language

## Build-it

```console
$ cmake -G Ninja -B build -DCMAKE_BUILD_TYPE=Release
$ cmake --build build --config Release
```

You will get the `libshame.a` static library in the project's root and `build/` directory.

## Usage

Just include the header and use it.

```c
// program.c
#include "shame.h"

int main(void)
{
    ...
}
```

Compile your program and link it with libshame (assuming that you have path to libshame add to `LD_LIBRARY_PATH`).

```console
$ cc -o program program.c -lshame
```
