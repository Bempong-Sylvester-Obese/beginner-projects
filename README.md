# Beginner C++ Projects

A curated collection of beginner-friendly C++ projects designed to build fundamental programming skills progressively. Each project focuses on specific concepts while creating something functional and engaging.

## Prerequisites

- Basic understanding of programming concepts (variables, loops, conditionals)
- C++ compiler installed (GCC, Clang, or Visual Studio)
- Text editor or IDE (VS Code, Code::Blocks, or Visual Studio)

## File Extensions Guide

**Source Files:**
- `.cpp` - C++ source code files (most common)
- `.cc` - Alternative C++ source files
- `.cxx` - Another C++ source alternative

**Header Files:**
- `.h` - Header files (C/C++ compatible)
- `.hpp` - C++ specific header files
- `.hxx` - Alternative C++ header files

**Recommended:** Use `.cpp` for all your source files as a beginner.

## Project Timeline

Each project is designed to take approximately **one week** of consistent practice. Complete each project fully before moving to the next one.

---

## Project 1: Number Guessing Game
**Estimated Time:** 3-5 days  
**Difficulty:** ⭐⭐☆☆☆

### Overview
Build a console game where the computer generates a random number (1-100) and the player tries to guess it with helpful hints.

### Learning Objectives
- Basic input/output operations (`cin`, `cout`)
- While loops and conditional statements
- Random number generation
- Variable types and operators
- Input validation

### Requirements
- [x] Generate random number between 1-100
- [x] Accept user guesses in a loop
- [x] Provide "too high" or "too low" feedback
- [x] Count and display number of attempts
- [x] Handle invalid input gracefully
- [x] Option to play again

### Key Concepts Covered
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
// Random generation, loops, conditionals
```

---

## Project 2: Simple Calculator
**Estimated Time:** 4-6 days  
**Difficulty:** ⭐⭐⭐☆☆

### Overview
Create a calculator that performs basic arithmetic operations on two numbers with proper error handling.

### Learning Objectives
- Switch statements and conditional logic
- Function creation and organization
- Error handling and input validation
- User interface design
- Program flow control

### Requirements
- [x] Accept two numbers and an operation (+, -, *, /)
- [x] Perform calculations using functions
- [x] Handle division by zero errors
- [x] Display results in clear format
- [x] Continuous operation until user quits
- [x] Input validation for operations

### Key Concepts Covered
```cpp
// Functions, switch statements, error handling
double add(double a, double b);
double subtract(double a, double b);
// Exception handling for edge cases
```

---

## Project 3: To-Do List Manager
**Estimated Time:** 5-7 days  
**Difficulty:** ⭐⭐⭐⭐☆

### Overview
Build a console-based task management system that can store, modify, and persist tasks between program sessions.

### Learning Objectives
- Vectors and dynamic data structures
- File input/output operations
- Menu-driven program architecture
- String manipulation and handling
- Data persistence concepts

### Requirements
- [x] Menu system (Add, View, Complete, Delete, Quit)
- [x] Store tasks with descriptions and completion status
- [x] Number tasks for easy reference
- [x] Mark tasks as complete/incomplete
- [x] Delete individual tasks
- [x] Save tasks to file for persistence
- [x] Load tasks when program starts

### Key Concepts Covered
```cpp
#include <vector>
#include <fstream>
#include <string>
// File I/O, vectors, string handling
```

---

## Getting Started

1. **Set up your development environment**
   ```bash
   # Compile example (using g++)
   g++ -o program_name source_file.cpp
   
   # Run the program
   ./program_name
   ```

2. **Project Structure Recommendation**
   ```
   BeginnerCPPProjects/
   ├── Project1_NumberGame/
   │   └── number_game.cpp
   ├── Project2_Calculator/
   │   └── calculator.cpp
   └── Project3_TodoList/
       ├── todo_list.cpp
       └── tasks.txt
   ```

3. **Start with Project 1** and work through each project completely before moving on.

## Success Criteria

For each project, ensure your program:
- ✅ Compiles without errors or warnings
- ✅ Handles invalid input gracefully
- ✅ Provides clear user feedback
- ✅ Functions as described in requirements
- ✅ Code is readable with appropriate comments

## Tips for Success

- **Write clean, commented code** - Future you will thank you
- **Test edge cases** - What happens with invalid input?
- **Start simple** - Get basic functionality working first
- **Iterate and improve** - Add features incrementally
- **Debug systematically** - Use print statements to trace issues

## Common Beginner Mistakes to Avoid

- Forgetting to include necessary headers (`#include <iostream>`)
- Not initializing variables before use
- Infinite loops due to incorrect loop conditions
- Not handling user input validation
- Skipping the planning phase - sketch out your logic first

## Next Steps

After completing these projects, you'll be ready for:
- Object-oriented programming concepts (classes and objects)
- More complex data structures (maps, sets)
- GUI programming with libraries like Qt or FLTK
- Algorithm implementation and optimization

## Resources

- [C++ Reference](https://cppreference.com/) - Comprehensive language reference
- [Learn C++](https://www.learncpp.com/) - Excellent tutorial series
- Compiler documentation for your specific setup

---

**Remember:** The goal is learning, not perfection. Each project builds on the previous one, so take your time and make sure you understand each concept before moving forward.

Good luck with your C++ journey! 🚀
