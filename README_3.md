# C++ Revision – README
**By Kuldeep Parmar**

---

## Files in this revision
| File | Description |
|------|-------------|
| `code_annotated.cpp` | Full C++ code with definitions added as comments |
| `CppRevision_Kuldeep.pdf` | Topic-wise PDF guide (dark theme) |

---

## Topics Covered

### 1. Data Types and Variables
`int` `float` `double` `char` `bool` — sizes, usage, and `sizeof()` operator.

### 2. Input / Output
`cout` for output, `cin` for input, `endl` vs `\n`.

### 3. Control Flow
`if` / `else if` / `else`, nested if, `switch-case`, and the ternary operator `? :`.

### 4. Loops
`for`, `while`, `do-while` loops. Also `continue` (skip iteration) and `break` (exit loop).

### 5. Operators
- **Unary** — `x++`, `++x`, `x--`, `--x`
- **Arithmetic** — `+  -  *  /  %`
- **Relational** — `==  !=  >  <  >=  <=`
- **Logical** — `&&  ||  !`
- **Assignment** — `+=  -=  *=  /=  %=`
- **Bitwise** — `&  |  ^  ~  <<  >>`

### 6. Number Systems
Decimal, Binary (`0b`), Octal (`0`), Hexadecimal (`0x`). Binary↔Decimal conversion.

### 7. Type Casting
Implicit (auto by compiler) and explicit `(int)value` casting. Truncation vs rounding.

### 8. Functions
Defining, calling, and returning values. Forward declaration / prototype explained.

### 9. Pass by Value vs Pass by Reference
Value = copy (original safe). Reference `&` = actual variable (original changes).

### 10. Arrays
Fixed-size same-type collections. Index starts at 0. Loop input/output.  
> **Bug fixed:** `index <= 5` → `index < 5` (was going out of bounds).

### 11. Strings
`char` arrays (C-style) and `std::string` class — `.length()` `.append()` `.insert()` `.erase()` `.replace()`.

### 12. Pointers and Dynamic Memory
`&` address-of, `*` dereference, `int *ptr`. Dynamic: `new` / `delete` on the heap.

### 13. Classes and Objects
Class as blueprint, objects as instances. `public` members, `Constructor` (on create), `Destructor` (on destroy).

---

> All code compiles with `g++ filename.cpp -o output` (C++11 or later).
