# Midterm Comment Codes and Marking Guide

The following document is the comment codes used when grading your midterms.  Each comment I want to make is usually written as a capital letter with a circle around it often with some sort of deduction.  Some comments are more broad and deductions may be a range depending on how wrong your solution is.  At other times, the comment is there to provide feedback on something you should be paying attention to in your programs.

Please look through your test and review the comment codes to see where you have misconceptions.  Let me know if you can't tell what letter I wrote.  Note that for each section of the test, the comment codes are reset as the list can become unwieldingly long if I use it for the entire test so make sure you are checking against the correct section.

If a note is followed by **nmd** this stands for no marks deducted
If a note is followed by **nma** it means that no marks were awarded due to this issue
If a note is followed by **- somenumber** that is the deduction for that particular issue (it can be a range)


## Question 1: Debugging

In general, 2 marks per error, 5 in total.  If you find all 5 and fix it correctly you get 10.  However, some fixes were wrong or incomplete or unnecessary and led to further errors that were not initially there.

* A - error occurred on multiple lines, you only identified one line.  Need to identify every line where the same error occurs and correct it -1 per error
* B - These errors are all the same error occurring on different lines, they only get one mark for all 3 nmd
* C - The correct terminology here is "variable is **uninitialized**". - nmd
* D - this is not an error - nma
* E - for any loop if you have a loop counter that starts at 0, and you want it to run n times,check i < n and iterate by adding 1.  It is not <=, not unless you also change the initialization. nma
* F - wrong fix -1
* G - fix is correct but error description is wrong. description is a prose... what is wrong.  "missing semi colon", "variable is uninitialized", "this does not update x" etc.  it isn't the fix -1
* H - your unnecessary fix introduced an error that was not previously present - 1 or -2 depending on exact bug
* I - changing to for() loop is unnecessary and doing this requires extra logic in the loop or the increase happens on first iteration.
* J - printing in a function that does not say "print" in the spec is an error -1
* K - work on grammar, nmd but this is not clear.
* M - the way you made this fix requires other modifications in the loop in order for it to match properly. -1

## Question 2: Programming


A - Unless a function's description state that the function "reads" input, then use of scanf is a spec violation.
B - Unless a function's descriptio states that the function "prints" something, then use of printf is a spec violation 
C - Use of multiple returns is Single Entry, Single Exit (SESE) violation.  A function/code block has one starting point and one ending point
D - 
