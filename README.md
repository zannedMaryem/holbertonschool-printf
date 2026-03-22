
# Custom Printf Function

## Overview

Implementation of a custom `_printf` function that replicates the behavior of the standard C `printf` function.

## Features

- Format string parsing
- Multiple format specifiers support
- Variadic argument handling

## Implemented Specifiers

- `%c` - Character
- `%s` - String
- `%d` - Integer
- `%i` - Integer

## Usage

```c
#include "main.h"

_printf("Hello, %s!\n", "World");
_printf("Number: %d\n", 42);
```

## Files

- `main.h` - Header file with function prototypes
- `_printf.c` - Main printf implementation
- `int_to_char.c` - Handler for 'i' and 'd' specifiers
