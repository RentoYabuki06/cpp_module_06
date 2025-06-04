# CPP Module 06 - Type Conversion and Identification

This module explores type conversions, serialization, and runtime type identification (RTTI) in C++.

## Exercise 00: Scalar Conversion

Located in [ex00/](ex00/) directory, this exercise implements a class called [`ScalarConverter`](ex00/includes/ScalarConverter.hpp) that converts between different scalar types:
- char
- int
- float
- double

The program handles various edge cases including:
- Printable and non-printable characters
- Numeric literals
- Floating point special values (nan, inf)
- Overflow detection

The conversion process demonstrates static casting between different primitive types and handling of limitations of each type.

## Exercise 01: Serialization

Located in [ex01/](ex01/) directory, this exercise implements a [`Serializer`](ex01/includes/Serializer.hpp) class that:
- Converts a pointer to a data structure into an integer type (`uintptr_t`)
- Converts the integer representation back into the original pointer

This demonstrates how pointers can be safely converted to raw data and back using `reinterpret_cast` - a powerful but potentially dangerous C++ casting operator.

Common use cases for serialization and deserialization include:
- Network communication: Converting complex data structures into a format that can be transmitted over a network
- File I/O: Saving program state or data structures to files for later retrieval
- Inter-process communication (IPC): Sharing data between different processes
- Cache systems: Storing complex objects in memory caches
- Game save states: Preserving game progress and object states
- Database operations: Converting between in-memory objects and database storage formats

## Exercise 02: Identify Real Type

Located in [ex02/](ex02/) directory, this exercise implements:
- A base class [`Base`](ex02/includes/Base.hpp) and derived classes ([`A`](ex02/includes/A.hpp), [`B`](ex02/includes/B.hpp), [`C`](ex02/includes/C.hpp))
- Functions to generate random instances of the derived classes
- Functions to identify the real type of an object at runtime using two approaches:
  - Using pointer and `dynamic_cast`
  - Using reference and exception handling with `dynamic_cast`

This exercise demonstrates Runtime Type Information (RTTI) in C++ and how to safely downcast from a base class to its derived classes.

## Compilation

Each exercise includes a [Makefile](ex00/Makefile) with the following targets:
- `make`: Compile the program
- `make clean`: Remove object files
- `make fclean`: Remove object files and executable
- `make re`: Full rebuild

## Skills Demonstrated

- C++ type casting (static_cast, reinterpret_cast, dynamic_cast)
- Pointer manipulation and type safety
- Runtime type identification
- Exception handling
- Value representation in different numeric types
- OOP principles
- C++98 standard compliance