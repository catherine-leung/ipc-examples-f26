# Comment Codes

On a quiz paper, you may find a circle with a letter.  That letter is a comment code.  Look up the code below for the quiz to see detailed feedback

## Quiz 1

* A - type error - the type is just float /double 
* B - Undefined value used for initialization 
* C - %f, %lf, %d etc. are format codes and only ever go inside the format string of a `printf()` or `scanf()`
* D - variable names cannot have spaces in them.
* E - this block is outside of main().  Code must be inside a function.  In this case as there is only one function, the code must be inside of main()
* F - printf() produces output.. put this thing onto the screen.  It does not read in information. 
* G - To read data into a variable you need to use scanf()
* H - calculations does not calculate the price of pizza correctly
* I - use of undeclared/undefined variables
* J - if you want to use constants its good.. but the constants need to be defined with the const keyword to keep them from changing during run of function `const double base = 8.00;` for example instead of `double base - 8.00` or you can use macros `#define BASE 8.00` which is how C has traditionally declared constants.  All constants should be declared outside of the main function.  Global constants good!  (**Global variables however are very very very extremely extremely BAD**)
* K - if you are using a variable for one thing.. you can't use it for something else later while the data is still needed/valid.
* L - wrong data type
* M - mismatched format code and data type
* N - scanf() not correctly used.  `scanf("formatstring", &var)` where formatstring should describe the shape of the input.. %lf, %d, etc. etc.
* O - not really an error in syntactic or logical sense, but this is not good practice.  Earlier these names were constants but here you are using them to store results.  Variables should have one clear purpose, it shouldn't change purpose (what is being stored) part way through the program.  This is what leads to errors...
* P - final output has not been printed -1
* Q - scanf() must be passed the location of a variable, not the variable itself -1
* R - this variable is different name than others and therefore undeclared and undefined -1
* S - Left and right matters!  where you want result to go must be on left of assignment(=) operator, expression on right ... can't flip this.
* T - printf() with format codes in the format string must supply a variable for each format code -1
* U - valid but it is better to declare variables at start of function (C styling thing)
* V - scanf() reads but does not produce output.  Prompts must be written using prinf, while the reading itself is handled by scanf()
* W - printf() with no format codes in its format string should have no other parameters
* X - Order of statements matter.  the order here is wrong.  
* Y - this variable name does not make sense for its usage.  Need better names than this -1
* Z - pizza price must be calculated, not read. -2
* AA - number of toppings isn't floating point.. you can't really get "2.3" different toppings for example.
* BB - when you read floating point don't use the output formatting.  For example if reading a float it is always %f in a scanf.  Don't use %.2f
* CC - to use functions you must first define them.  You can't just call functions that don't exist.  This quiz wasn't about functions and it wasn't required to write functions for it.
* DD - %d, %f etc. are format codes, not variables.  They cannot be read from, they cannot store data -1

## Quiz 2:

* A - Functions do not belong in the table themselves.  For example, main() should only have result in the columns as main() only has the result variable -1
* B - bloom()/farm() has 3 paramters and rc, there should be 4 columns in any table related bloom()/farm() one for each of these -1
* C - sow()/spray() has one parameter and one local variable (stem seed in sow(), dew and bud in spray).  These two variables must be both present in columns for these functions -1 
* D - columns for each argument must be initalized with values passed to function -1
* E - results were not properly stored on return to the correct variable column -1
* F - output missing labels -1
* G - output values are wrong entirely -6
* H - output from bloom()/farm() is missing -1
* I - output from  sow()/spray() is missing  -1
* J - output from main() is missing/wrong -1 to -3
* K - correct output - version with bloom():
```c
peach: 3
one: 2
A: 6
seed: 10
stem: 9
B: 15
peach: 14
three: 5
C: 20
seed: 3
stem: 4
D: 24
```
* L - correct output - version with farm()
```
dew: 7
bud: 6
A: 13
mango: 10
two: 3
B: 16
dew: 2
bud: 3
C: 19
mango: 4
one: 2
D: 21
```
* M - Not all variables should be in the same table.  there is one table for main(), then separate table per call of function.  tracking it all in one big table misses function calls entirely -1
* N - Output should all be in one place -1
* O - there is no call stack tracing here -1
* P - some output is wrong due to earlier error... wrong but NMD
* Q - your current setup where multiple calls to same function are continued may not work well if there is a situation where A() calls B() and main() can call A() or B().  This would result in different levels of call stack.  NMD for this quiz but please note this.
* R - separate tables needed for each function -1
* S - Please look at how to do walkthroughs: 
  * Intro to Walkthroughs: https://youtu.be/L-Ef-lGnjTQ?si=RazKhb6FZuuc8py0
  * Walkthroughs with Functions: https://youtu.be/6AyqeHRNLBE?si=o0UIM_3Yo1qc8ioI
  * Walkthroughs with arrays: https://youtu.be/i1FQGa7UtvM?si=rjHUJFqlN8KuhbaX
