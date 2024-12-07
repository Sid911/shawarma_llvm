# Shawarma AOT compiler

This projects explores basic AOT compiler using LLVM for Shawarma toy language. Sample hello world for shawarma looks something like this.

> hello.shw
```kt
# Hello world
recipe add(x: i32, y: i32): i32{
  bill x + y;
}

recipe main() : i32 {
    ing s : i32;
    s = add(10, 20);
    serveLn("Hello, World!, %d, %d", s, 20);
    bill 0;
}
```

# Building Compiler


