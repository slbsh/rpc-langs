an assortement of reverse polish notation calculators (also a code golf)  

## Rules:
- Read input from stdin
- Write output to stdout as an integer after a newline
- Must handle negative numbers
- Recieving an unknown operator should print "Invalid operator"
- Invalid number behaviour is undefined and left to the implementor
- Behaviour for inputs less than 2 words is undefined
- Divide by zero handling is optional
- Recieving any other invalid input should print "Invalid input"
- Should not depend on external libs (except for libc, and the language's std)
- Each should start with a comment containing the command to run the program
- Must be valid as a single independant file (no project structure)
- Inputs will not exceed 100 bytes
- The smaller the solution the better
- Must handle additional whitespace
- Must not terminate execution on invalid input (expect for >100 bytes)

## Examples:
```
+ 1 2
3
* 10 10 5
500
- 5 10
-5
/ 10 2
5
+ 1 2 3 4 5 6
21
```
