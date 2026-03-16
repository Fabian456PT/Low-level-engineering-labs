# Low-Level Bit Manipulation Toolkit 🛠️

A modular C-based utility designed to interact with individual bits within an 8-bit variable (`unsigned char`). This project serves as a foundational laboratory for low-level engineering and bitwise logic.

## 🚀 Features
- **Verify**: Check if a specific bit is set (1) or clear (0).
- **Turn On**: Set a specific bit to 1 using the `OR` bitwise operator.
- **Turn Off**: Clear a specific bit to 0 using `AND` and `NOT` bitwise operators.
- **Toggle**: Invert a bit's state (0 to 1 or 1 to 0) using the `XOR` operator.
- **Interactive Menu**: A persistent CLI interface that allows multiple operations.

## 💻 Core Concepts
- **Bitwise Operators**: Mastery of `&`, `|`, `~`, `^`, and `<<`.
- **Modularity**: Logic isolated into dedicated functions for better maintainability.
- **Memory Efficiency**: Utilizing the smallest possible data types for performance.

## 🛠️ How to Compile and Run
Ensure you are on a Linux environment. Use the GCC compiler:

```bash
gcc bit_manager.c -o bit_manager
./bit_manager