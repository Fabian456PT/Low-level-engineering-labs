# Linux Permissions Simulator 🛡️

A low-level C utility that mimics the Linux Kernel's permission engine. This project translates octal numerical values into symbolic string representations (`rwxrwxrwx`), utilizing bitwise manipulation to decode access rights.

## 🚀 Features
- **Octal Decoding**: Parses 3-digit octal inputs (000-777) using the `%o` format specifier.
- **Bitfield Isolation**: Extracts User, Group, and Others segments using Right Shift (`>>`) and Bitwise AND (`&`) operations.
- **Symbolic Translation**: Converts 3-bit sequences into human-readable `rwx` format using a memory-efficient buffer.
- **Defensive Programming**: Includes range validation to ensure each octal digit stays between 0 and 7.

## 💻 Core Concepts
- **Bitwise Shifts**: Mastering `>>` to align bit segments (6 positions for User, 3 for Group).
- **Masking**: Applying `& 7` (binary `111`) to isolate specific 3-bit permission groups.
- **Pointer Arithmetic**: Passing specific buffer addresses (`&buffer[x]`) to functions for modular string building.
- **C String Handling**: Managing the null terminator (`\0`) in a 10-byte character array.

## 🛠️ How to Compile and Run
Ensure you are on a Linux environment (Debian/Ubuntu recommended). Use the GCC compiler:

```bash
gcc permissions_sim.c -o permissions_sim
./permissions_sim