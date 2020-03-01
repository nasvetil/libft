# libft
Simple C library with some standard functions.

## Structure
```
.
├── inc/                    # .h files
├── src/                    # .c files
│   ├── additional/         # Additional functions
│   ├── gnl/                # Functions for get_next_line()
│   ├── libc/               # Libc functions
│   ├── lst/                # Functions to manipulate lists
│   └── special/            # Some special functions
└── Makefile                # Makefile for compile library
```
## How to compile

Use `$> make` for `libft.a` compile.

| Command       | Tasks                                       |
|---------------|---------------------------------------------|
| `make`        | Compile `libft.a`                           |
| `make clean`  | Delete temporary object files               |
| `make fclean` | Delete temporary object files and `libft.a` |
| `make re`     | Reset `libft.a`                             |
