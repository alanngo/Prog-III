## Tests and Compares an Iterative/Recursive Factorial Function                  

We perform three trial runs at differing sizes to compare our functions. Starting
at 10 million, moving to 100 million, and finishing at 300 million with the option
to continue to a 1 billion trial run size.

As we move through each trial run we will test 3 factorial cases.

First Case: 12!
         - Through each trial run the iterative solution performs more efficiently
           than it's recursive counterpart.
Second Case: 18!
         - Both solutions begin to perform almost equal and there is minimal time discrepancy.
Third Case: 20!
         -  Highest test case before memory overflow issues begin. At trial runs
            <= 100 million both functions have little time discrepancy. At > 300
            Million test runs the recursive function begins to become more time
            efficient than it's recursive counterpart.

#### Conclusion
When using factorial algorithm functions an iterative implementation is more time
efficient when the number whose factorial we want to find is < 18. When taking the
factorial of 18 both iterative and recursive implementations begin to have little to
no time discrepancy in efficiency. Only at extreme test cases of 1 Billion will the
recursive implementation of factorial(18) have a faster time efficiency. Finally,
when taking the factorial of numbers > 18 the recursive implementation becomes
the more time efficient function the larger the size of the trial runs.

In general, besides a couple of edge cases, the iterative implementation of a
factorial function will be the more efficient function.
