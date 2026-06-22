- Reading levels

-Cryptography:

- Encryption: Scrambling data or text in a reversible way.
  - Using some 'plaintext' and a "key" you can output a new encrypted message.
  - Caesar Cypher: Using rotational encryption to "rotate" letters of the alphabet to represent _true_ characters of the plaintextr

- Compiling:
  -Source code is entered into a compiler that converts the source code to machine code, allowing the program to run on a computer
  -Clang: compiler used by CS50
  -Steps of compiling: 1. Preprocessing: - '#' is a preprocessor directive - header files are read and "copied" into your program for use. 2. Compiling: Translation of source code to _assembly code_ - Computer CPU can interpret assembly code 3. Assembly: Translation of assembly code in step 2 to machine code, 0's and 1's. 4. Linking: taking the machine code from the original c file, the machine code from the header files, etc and _linking them together_

- Command Line Arguments: In addition to giving a command to run a program, inputs can/are also provided to alter various actions of the run
  - int main(void) --> int main(int argc, string argv)
  - argc(Argument count)= how many arguments have been made
    -argv(Argument vector(Array)) = and array of all the words typed at the command line

- Decompiling(Reverse Engineering): - Turning the 0's and 1's into code(finding their meaning/ context)
  -The hardware (CPU) manufacturer has a manual for their machine code 'codes' and what they represent. - The process of RE may be counter productive due to the effort needed.

- Debugging: finding errors in your code. -`printf` is a common way to debug your code
  -use `printf` statements deliberately to display what is going on behind the scenes of the code

- Debug50: Representative of VScode Debugger tool.
  - Command Line Arguments: "debug50 filename.ext"
  - Breakpoint: a place where the code will pause when ran
  - Garbage value: A reused value or place in memory that will be overridden in your current iteration

- Types:
  1. Bool = 1 byte
  2. int = 4 bytes
  3. long = 8 bytes
  4. float = 4 bytes
  5. double = 8 bytes
  6. char = 1 byte
  7. string = ? bytes, input dependent

- Arrays(Data structure): A sequence of values, contiguous in memory, all of which have the same data type -`Arrays will reserve an extra byte to know where the array ends for a current string` etc. Usually with an escape character to indicate the end e.g '/' or NUL(indicates where string ends).`NB!!1 Keep note of the fact that when strings are saved in memory there has to be a way to show where the string ends`. Hence why there exists a value such as '/0' which indicates where the string ends in memory.
  - The use of double quotes when defining strings indicates to C to have a string array NUL ending
- Strings: are arrays

- cowsay: A 3rd party library used to print ASCII art.

- Exit status: Code returned by a program to the operating system when it terminates. It indicates the program's success or failure and helps other programs or scripts determine what happened during execution
  - Use `echo $?` to display the return code or exist status of a program if it has one
