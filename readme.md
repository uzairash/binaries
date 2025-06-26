# My Binaries

This repository contains a collection of simple Linux command-line binaries written in C. These tools are created for learning purposes and for fun, and can be used to practice compiling, running, and managing your own utilities on Linux.

## Example Binary: `cal`

A simple calculator program that performs basic arithmetic operations.

### Usage

```sh
./cal <num1> <operator> <num2>
```

Example:
```sh
./cal 4 '+' 9
./cal 4 'x' 9
```

## How to Build and Install

1. **Compile the source code:**
    ```sh
    gcc cal.c -o cal
    ```

2. **Move the binary to your local binaries folder (e.g., `~/bin`):**
    ```sh
    mv cal ~/bin/
    ```

3. **Add `~/bin` to your `PATH` (if not already):**
    ```sh
    echo 'export PATH="$HOME/bin:$PATH"' >> ~/.bashrc
    source ~/.bashrc
    ```

4. **Run your binary from anywhere:**
    ```sh
    cal 4 '+' 9
    ```

---

Feel free to explore, modify, and add your own binaries