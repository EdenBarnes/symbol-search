# Symbol Search

This repository contains the symbolSearch bash script, as well as a few sample files to test the script on.

Usage: symbolSearch <symbol>

Searches the current directory recursively for a given symbol in:

  - ELF binaries (functions and variables, via gdb)
  - Header files (.h, .hpp)

For each file where the symbol is found, the script prints:
  - Matching function names
  - Matching variable names
  - Header lines containing the symbol

Example:
  symbolSearch myFunction

The sample files contain the function "doThePrinting" and the variable "globalVariable" if you'd like to verify the script works.
There is also some header files that contain this text:

```
THIS IS A TEST C HEADER THAT DOES NOT CONTAIN ACTUAL CODE
THIS IS MORE NOT CODE
THIS IS A LINE THAT HAS A LOT OF DIFFERENT WORDS
WEEEE WOOOO
```

Which the script will also search through.
