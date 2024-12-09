# Code

This folder demonstrates some coding styles I like to use. They are most likely not the best or most optimal, rather personal preference.

## General styles

I prefer to use *snake-case* for variables and functions and *Pascal-case* for class/type names.

```cpp
// C/C++ example
class SomeType {
private:
    int some_field;
}; 

namespace some_module {
    void some_function(int arg_1, int arg_2) {

    }
}
```

```rs
// Rust example
struct SomeType {
    some_field : i32
}

mod some_module {
    fn some_function(arg_1 : i32, arg_2 : i32) {

    } 
}
```

## Comments in styles

Also I love to use comments as a kind of helper for sorting code in the following way:

```rs
struct SomeType {
    some_field : i32
}

impl SomeType {
    fn new() {
        Self {
            some_field: 10
        }
    }
    
    fn misc_function(&self) { }

    // Some getters
        fn get_some_field(&self) -> i32 {
            self.some_field
        }

        fn get_modified_field(&self) -> i32 {
            self.some_field * 2
        }

        fn get_half_of_some_field(&self) -> i32 {
            self.some_field / 2
        }
    // 

    // More function
        fn more_function_1() { }

        fn more_function_2() { }
    //

    fn another_misc_function() { }
}
```

## Project styles

In the subfolders of this directory I rebuilt the typical style that I like to arrange my projects in.

- [Embedded projects](some_embedded_project/)
- [Rust projects](some_rust_project/)