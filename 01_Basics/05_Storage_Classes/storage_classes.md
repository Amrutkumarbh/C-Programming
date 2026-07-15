# Storage Classes in C

## Objective

Understand how storage classes affect a variable's:
- Scope
- Lifetime
- Memory Location
- Linkage

Storage classes are one of the core concepts of C and are widely used in Embedded Systems development.

---

# Programs

## 1. auto_variable.c

### Description
Demonstrates the default storage class (`auto`).

### Concepts Covered
- Local variables
- Stack memory
- Automatic lifetime
- Scope limited to the function/block

### Key Points
- Default storage class for local variables
- Created when the function is called
- Destroyed when the function returns
- Stored in Stack Memory

---

## 2. register_variable.c

### Description
Demonstrates the `register` storage class.

### Concepts Covered
- CPU registers
- Faster variable access
- Compiler optimization

### Key Points
- Suggests the compiler store the variable in a CPU register
- Compiler may ignore the request
- Address (`&`) of a register variable cannot be taken

Example:

```c
register int x = 10;
```

Invalid:

```c
printf("%p", (void *)&x);
```

---

## 3. static_variable.c

### Description

Demonstrates local and global `static` variables.

### Concepts Covered

- Persistent variables
- Data Segment
- BSS Segment
- Internal Linkage

### Key Points

Local static variable

- Scope → Function
- Lifetime → Entire Program
- Memory → Data/BSS

Global static variable

- Scope → File
- Lifetime → Entire Program
- Linkage → Internal
- Cannot be accessed from another source file

---

## 4. extern_variable

### Description

Demonstrates sharing variables between multiple source files.

Files

- main.c
- display.c

### Concepts Covered

- External Linkage
- Variable declaration
- Variable definition
- Linker behavior

### Key Points

`extern` does not allocate memory.

Example

```c
extern int speed;
```

This tells the compiler that the variable exists in another source file.

---

## 5. storage_class_comparison.c

Compares all storage classes together for quick revision.

---

# Storage Class Comparison

| Storage Class | Scope | Lifetime | Memory | Linkage |
|--------------|--------|----------|---------|----------|
| auto | Block | Function Call | Stack | None |
| register | Block | Function Call | CPU Register (Compiler Choice) | None |
| static (local) | Block | Entire Program | Data/BSS | None |
| static (global) | File | Entire Program | Data/BSS | Internal |
| extern | Depends on declaration | Entire Program | Existing Memory | External |

---

# Memory Layout

```
+----------------------+
| Text Segment         |
+----------------------+
| Data Segment         |
| Initialized Globals  |
| Initialized Static   |
+----------------------+
| BSS Segment          |
| Uninitialized Global |
| Uninitialized Static |
+----------------------+
| Heap                 |
+----------------------+
| Stack                |
| Local Variables      |
+----------------------+
```

---

# Interview Questions

- What is a storage class in C?
- What is the default storage class of a local variable?
- Difference between `auto` and `register`.
- Why can't we take the address of a register variable?
- Does `register` guarantee storage in a CPU register?
- Difference between `static` and `extern`.
- Difference between local static and global static variables.
- What is linkage?
- Difference between internal linkage and external linkage.
- Does `extern` allocate memory?
- Why does `static` prevent access from another `.c` file?
- Difference between declaration and definition.
- Explain the linker error: `undefined reference`.
- Why are `static` variables commonly used in Embedded C?

---

# Embedded Systems Applications

Storage classes are extensively used in embedded firmware.

Examples:

- Keeping driver variables private using `static`
- Sharing peripheral handles using `extern`
- Persistent counters using local `static`
- Optimized loop variables using `register` (historically)

Typical STM32 example:

```c
/* uart.c */
static UART_HandleTypeDef huart2;

/* main.c */
extern UART_HandleTypeDef huart2;
```

---

# Learning Outcome

After completing this chapter, you should be able to:

- Explain every storage class in C
- Predict memory allocation of variables
- Differentiate scope, lifetime and linkage
- Understand how multiple `.c` files communicate
- Explain compilation and linking
- Answer common Embedded C interview questions confidently
