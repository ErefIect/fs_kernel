Automatic storage class: Variables declared with the auto keyword have automatic storage class. They are created when the block they are declared in is entered, and destroyed when the block is exited. By default, all variables in C++ have automatic storage class unless otherwise specified.

Static storage class: Variables declared with the static keyword have static storage class. They are created and initialized only once, at the beginning of the program execution, and they retain their value throughout the entire program execution. Static variables can be declared at global scope, or within a function.

Dynamic storage class: Variables declared with the new operator have dynamic storage class. These variables are allocated on the heap at runtime and can be accessed from anywhere in the program. They remain in memory until they are explicitly deallocated with the delete operator.

Thread-local storage class: Variables declared with the thread_local keyword have thread-local storage class. These variables are created and initialized once per thread, and can be accessed only by that thread.