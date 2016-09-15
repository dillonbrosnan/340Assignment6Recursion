Compiled with Dev C++

All tests of recursive methods are hard coded into program. 

isPalindrome:
takes a const reference of a string as a parameter, creates two local variables,
int start and int end, which is the starting and ending positions of the string. 
if string = "foo" start will be 0 and end will be 2. checks that first and last 
characters of string are of equal value, if not, we know it is not a palindrome, 
and can return false. if they are equal, we assign a sub string version of the original
paramater, with first and last characters truncated, and recirsively call the method on
sub string. returns true if start is <= end, or if we have gone through all characters
in string.

digitSum:
takes in an int as a paramater, and used abs() to  get absolute value of number.
if num < 10 (base case) we return num, else, we return the sum num%10, which gives us the 
last digit of num and call recursively digitSum on num/10, which gives us num with the last
digit truncated off, ie digitSum(4321) = 1+digitSum(432) = 1+2+digitSum(43)= 
1+2+3+digitSum(4) = 1+2+3+4 = 10.

waysToClimb:
first i figured out the pattern of all the ways to climb n stairs for n = 1,2,3... and
found the fibbonicci sequence. as in 6 stairs would be the 6th number [starting from the
second '1'] of the fibbonicci numbers (ie there are 13 ways to climb the 6 stairs).
the base case is that the number of stairs is < 4, and returns the number of stairs, if not
we recursively call the waysToClimb on numStairs-1 and numStaris-2. 

