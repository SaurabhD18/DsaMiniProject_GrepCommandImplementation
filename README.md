# Grep Command DSA Mini Project

This mini project implements functionalities similar to the Unix/Linux `grep` command in C programming language using Data Structures and Algorithms.

## Overview

The Grep Command is a widely-used tool in Unix/Linux environments for searching text files for lines that match a specified pattern. This mini project aims to replicate some of the functionalities of the `grep` command while demonstrating the use of various data structures and algorithms.

## Features

- Search for specific patterns within text files.
- Implement various options and functionalities similar to those provided by the `grep` command in Unix/Linux environments.
- Utilize data structures such as linked lists for efficient storage and retrieval of text lines and patterns.
- Implement algorithms for pattern matching and text processing.

## File Structure

- `grep.h`: Header file containing structure definitions, function prototypes, and preprocessor directives.
- `grep.c`: Source file containing the implementation of Grep Command functions.
- `main.c`: Source file containing the main function and sample usage of the Grep Command functions.
- `Makefile`: Makefile for compiling the project.

## Getting Started

To compile the project, run the following command in the terminal:

make


This will generate an executable named `grep`.

To use the Grep Command, run the executable followed by the filename and the pattern you want to search for. For example:

./grep -[option] "pattern" sample.txt 



## Options

- `-c`: Count the number of occurrences of the pattern in each file.
- `-h`: Suppress the output of filenames when searching multiple files.
- `-i`: Ignore case distinctions in patterns and input files.
- `-l`: Print only the names of files with matching lines.
- `-n`: Precede each matching line with its line number.
- `-v`: Invert the sense of matching, displaying non-matching lines.
- `-w`: Match only whole words.
- `-o`: Print only the matched parts of matching lines.
- `-x`: Match the entire line.

## Contributing

Contributions are welcome! If you have any suggestions or improvements, feel free to open an issue or create a pull request.







