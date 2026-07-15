# Storage Classes in C

## Programs

### 1. auto_variable.c
Demonstrates the default storage class (`auto`).

**Key Points**
- Local scope
- Automatic storage duration
- Stored on the stack
- Created when the function is called
- Destroyed when the function returns

---

### 2. register_variable.c
Demonstrates the `register` storage class.

**Key Points**
- Requests the compiler to store the variable in a CPU register
- Faster access for frequently used variables (if the compiler chooses)
- The compiler may ignore the request
- The address (`&`) of a register variable cannot be taken

---

## Interview Questions

- What is the default storage class in C?
- Difference between `auto` and `register`.
- Why can't we use `&` with a register variable?
- Does `register` guarantee storage in a CPU register?