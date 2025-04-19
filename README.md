# ACE_TRACK - Mensuration Calculator

This is a simple C program that allows users to calculate the area and perimeter/circumference of basic geometric shapes: Circle, Rectangle, and Triangle.

## How to Compile and Run

Follow these steps to compile and run the program on your local machine:

### Prerequisites

* **C Compiler:** You need a C compiler installed on your system.
    * **Windows:** It is assumed you have a compiler like GCC (from MinGW) installed and configured in your system's PATH.
    * **macOS:** You should have Xcode Command Line Tools installed (includes `clang`).
    * **Linux:** GCC is usually available through your distribution's package manager.

### Compilation

1.  **Save the code:** Save the provided C code as `PROJECT.c` (or any other `.c` file name you prefer) in a directory on your computer.
2.  **Open a terminal or command prompt:** Navigate to the directory where you saved the `PROJECT.c` file.
3.  **Compile the code using GCC (or your preferred C compiler):**

    ```bash
    gcc PROJECT.c
    ```

    * This command uses the GCC compiler to compile `PROJECT.c` and creates an executable file named `a` (on Linux/macOS) or `a.exe` (on Windows).

### Running the Program

After successful compilation, you can run the executable:

1.  **In the same terminal or command prompt:**

    

    * **Windows (using Command Prompt or PowerShell):**
        ```bash
        .\a.exe
        ```
        

2.  **Follow the on-screen instructions:** The program will present a menu allowing you to choose a shape and enter its dimensions. It will then calculate and display the area and perimeter/circumference.

## Usage

1.  Run the program.
2.  Enter the number corresponding to the shape you want to calculate:
    * `1` for Circle
    * `2` for Rectangle
    * `3` for Triangle
    * `4` to Exit
3.  The program will prompt you to enter the necessary dimensions for the chosen shape (radius for a circle, length and width for a rectangle, and the lengths of three sides for a triangle).
4.  Enter the values and press Enter. The program will display the calculated area and perimeter/circumference.
5.  The menu will reappear, allowing you to perform more calculations or exit the program.

## Notes

* The program includes basic input validation to ensure that you enter numeric values for the dimensions.
* For the triangle, the program uses Heron's formula to calculate the area and includes a check for invalid triangle dimensions (where the sum of any two sides must be greater than the third side).


Feel free to contribute to this project or use it as a learning tool!
