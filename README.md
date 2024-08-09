# Foreign Function Interface (FFI) for Rust to C
A simple FFI to use Rust code in a C program

## Compile

Run the following command to compile the Rust code into a shared library:

`cargo build --release`

Run the following command to compile and link the C code:

`gcc -o main main.c -L./target/release -lmy_rust_lib -Wl,-rpath,./target/release`

Finally, run the following command to run the compiled C code:

`./main`

For this simple example it should output the following:

`Result: 7`
