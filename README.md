# Experiment 2
## Aim
To study and implement C++ program(Data types)
## Theory-

Understanding the memory size occupied by various data types is essential for optimizing memory usage in programming. Different data types such as `int`, `short int`, `long int`, `float`, and others, consume varying amounts of memory, which impacts performance and resource management.

### Integer (`int`) Data Type

The `int` data type is used to represent integer values, which are whole numbers without a fractional part.

- **Python Example:** In Python, the `int` type can represent arbitrarily large numbers, constrained only by available memory. Python automatically handles larger integers with its built-in `int` type.

`int` is fundamental for arithmetic operations, loops, array indexing, and more.

### Floating-Point (`float`) Data Type

The `float` data type represents real numbers with fractional parts, allowing for the representation of both whole and decimal numbers.

- **32-bit Float Range:** Roughly \(1.4 \times 10^{-45}\) to \(3.4 \times 10^{38}\).

`float` is commonly used in scientific calculations, graphics, simulations, and any application requiring real-number arithmetic.

### Double Precision (`double`) Data Type

The `double` data type represents double-precision floating-point numbers, providing greater precision and a larger range than the `float` data type.

- **64-bit Double Range:** Roughly \(5 \times 10^{-324}\) to \(1.7 \times 10^{308}\).

`double` supports all arithmetic operations and is often used when higher precision is required.

### Character (`char`) Data Type

The `char` data type is used to represent single characters.

- **Size:** Typically 1 byte (8 bits), capable of representing 256 different values (0-255).

`char` is fundamental for text processing, file I/O operations, and any context requiring individual character manipulation.

### Automatic Type Deduction (`auto`) in C++

The `auto` keyword in C++ (introduced in C++11) allows the compiler to automatically deduce the type of a variable from its initializer, reducing verbosity and simplifying code, especially with complex type declarations.

### Register Storage Class (`register`) in C/C++

The `register` keyword suggests to the compiler that a particular variable should be stored in a CPU register, if possible, for faster access, enhancing performance.

---

This rephrased content is concise and aligns with the professional tone often seen in GitHub documentation.
