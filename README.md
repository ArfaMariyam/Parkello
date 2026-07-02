# 🪐 Programming Fundamentals in C++

Welcome to my code repository! This is where I document my step-by-step journey of learning how to program from scratch. Before this summer, I didn't know how programming languages worked. I chose C++ because it is a core part of my college curriculum, and I am loving it now.

Instead of just looking at folders alphabetically, this README maps out my code files in the **exact chronological sequence of concepts** I learned as I progressed from a complete beginner to building a real application.

---

## 🗺️ My Learning Progression Map

### 🛑 Step 1: The Absolute Beginning (First Lines of Code)
Every programmer starts here. These files taught me the skeleton of a C++ program, the `main()` function, and how to use basic terminal wrappers.
*   `Practice/Basic cout practice/my first.cpp` — The historic first file where I compiled my very first stream.
*   `Practice/Basic cout practice/hello world.cpp` — Getting comfortable printing simple sentences to the terminal window.

### 📺 Step 2: Mastering Console Output (`cout`)
Once I knew how to print a line, I practiced text formatting, spacing, and using escape sequences (`endl`) to present neat information blocks.
*   `Practice/Basic cout practice/about PAK.cpp` — Formatting structured text layout paragraphs describing my country.
*   `Practice/Basic cout practice/about earth.cpp` — Managing screen spacing using clean text streams.
*   `Practice/Basic cout practice/about solar system.cpp` — Grinding long layout strings to learn console presentation.

### 📦 Step 3: Working with Memory (Variables & Data Types)
Here, I moved away from flat sentences and learned how a computer actually reserves memory blocks to store and categorize different types of data.
*   `Practice/variables/integers.cpp` — Working with whole numbers (`int`).
*   `Practice/variables/float.cpp` & `double.cpp` — Handling small and high-precision decimal numbers.
*   `Practice/variables/char.cpp` — Storing single keyboard symbols and characters.
*   `Practice/variables/string.cpp` — Manipulating full lines of dynamic text.
*   `Practice/variables/boolean.cpp` — Using true/false flags (`bool`) for conditional logic.

### ➕ Step 4: Computer Math (Arithmetic Operations)
With variables mastered, I learned how to use arithmetic operators to make the computer perform lightning-fast calculations.
*   `Practice/operations/addition.cpp` & `additions.cpp` — Combining values using sums.
*   `Practice/operations/subtraction.cpp` & `subtractions` — Managing differences between variables.
*   `Practice/operations/multiply.cpp` — Calculating multiplication products.
*   `Practice/operations/divide.cpp` — Handling division and tracking fractional remainders.
*   `Practice/operations/math.cpp` — Combining multiple operators inside unified mathematical expressions.

### 📥 Step 5: Interactive Inputs (`cin`)
This was a massive milestone! I stopped hardcoding data and learned how to make the program pause, ask a human a question, and read live input from the keyboard.
*   `Practice/Basic cin practice/cin practice.cpp` — Capturing dynamic user responses straight from the terminal.
*   `Practice/Basic cin practice/even odd.cpp` — Taking a user's typed number and checking its mathematical parity.

### 🔀 Step 6: Control Flow & Decisions (Conditions)
I learned how to give my programs a "brain" so they could make independent decisions and execute different paths based on data values.
*   `Practice/conditions/if else.cpp` — Traditional relational true/false logic checking blocks.
*   `Practice/conditions/switch.cpp` — Building efficient command menus by instantly matching precise menu options.

### 🔄 Step 7: Automation & Efficiency (Loops)
Instead of copy-pasting lines, I learned how to use loop cycles to make code run hundreds of times automatically until a condition is met.
*   `Practice/loops/while.cpp` — Repeating processes cleanly while an evaluation statement is true.
*   `Practice/loops/do while.cpp` — Ensuring a block of code executes at least once before checking conditions.
*   `Practice/loops/for.cpp` — Running highly precise count-controlled iterations using strict loop parameters.

### 🏗️ Step 8: Advanced Structure (Modular Functions)
The final fundamental concept. I learned how to stop writing messy, long blocks of text by bundling logic into clean, reusable machines.
*   `Practice/functions/func.cpp` & `function.cpp` — Declaring and calling standalone helper functions.
*   `Practice/functions/argument func.cpp` — Safely passing variables across isolated local execution blocks.

---

## 🚗 The Ultimate Synthesis: Car Parking Management Project

Once I completed my early standalone practice exercises, I initialized my first major central project. This is my active laboratory application where I am weaving together separate concepts—variables, control flow branching, and custom functions—into a unified application layout.

* **Location:** `/Car_parking_project/index.cpp`
* **Current Status:** **Phase 1 (Interface Layout & Menu Mapping) Completed!** I have successfully designed the blueprint for the entire application, mapped out the terminal interface grid, and built the initial nested condition wrappers.

---

### 💻 Current Feature Architecture inside `index.cpp`

The nenu is clean, modular, and executes the structural base of a user-facing program

---

### 🚀 Future Integration Milestones (My Summer Roadmap)

Since I am building this step-by-step alongside my learning subfolders, here is my roadmap for turning this interface map into a fully powered management engine:

* **Milestone 1: Loop Lifecycle Control:** Right now, the program exits as soon as a single choice is made. My next step is wrapping `main()` inside a looping cycle (`while` or `do-while`) so the program runs infinitely, allowing user actions to continue seamlessly until they choose Option 14 to exit.
* **Milestone 2: Multi-Branch Menu Logic (`switch-case`):** Expanding my basic `if` check into a complete `switch` block to handle choices 2 through 14 smoothly.
* **Milestone 3: Counting Variables & Math Processing:** Initializing variable counters at the top of the program to dynamically keep track of how many spots are left, how many vehicles of each type are parked, and compute custom currency amounts earned from check-outs.
* **Milestone 4: Permanent Storage System (`fstream`):** Un-commenting the `#include <fstream>` library at the top of my code to write logic that saves and loads the parking grid data directly to a local text file, so the information is never lost when the app closes!

---

## 🛠️ Environment Configuration
*   **IDE:** Visual Studio Code (VS Code)
