# C Programming Practice

A collection of everything I learned during my lessons on C: small, focused programs that each demonstrate one core concept.

## Contents

| File | What it covers |
| --- | --- |
| `Ascii Value of a Character` | Finding the ASCII value of a character |
| `append.c` | Appending data to an existing file |
| `creatingFiles.c` | Creating and writing files with file handling functions |
| `loopingThroughAnArray` | Iterating over the elements of an array |
| `maxOfThreeNums.c` | Finding the largest of three numbers |
| `struct.c` | Defining and using structures |
| `swap.c` | Swapping values using a function (pointers) |
| `swappingVariables.c` | Swapping two variables directly |
| `reverseNumber.c` | Reversing the digits of an integer using a loop, `%` and `/` |

## Topics Practiced

- Variables, data types, and ASCII values
- Conditional logic (comparing numbers)
- Arrays and looping
- Pointers and functions
- Structures (`struct`)
- File handling (create, write, append)

## Getting Started

### Prerequisites

A C compiler such as [GCC](https://gcc.gnu.org/) or Clang.

```bash
gcc --version
```

### Clone the repository

```bash
git clone https://github.com/Anujgiri1279/C.git
cd C
```

### Compile and run a program

```bash
gcc swap.c -o swap
./swap
```

On Windows (MinGW):

```bash
gcc swap.c -o swap.exe
swap.exe
```

Replace `swap.c` with any other `.c` file in the repo. For files without a `.c` extension, rename them to end in `.c` before compiling, for example:

```bash
cp "loopingThroughAnArray" loopingThroughAnArray.c
gcc loopingThroughAnArray.c -o loopingThroughAnArray
./loopingThroughAnArray
```

## Contributing

This is a personal learning repository, but suggestions and improvements are welcome. Feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Author

**Anuj Giri** ([@Anujgiri1279](https://github.com/Anujgiri1279))
