# DCP 01 - Google (EASY)

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.  

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.  

Bonus: Can you do this in one pass?  

# Test cases

```
1			# Number of test cases  
4 17		# Array length N, sum K  
10 15 3 7	# Array elements  
```

Feel free to try different test cases. 

# Hints

## Hint 1
* Think about a Brute Force solution. Can you do it in O(N^2) where N is the length of the list?  

## Hint 2
* Think about a data structure that helps you to store previous numbers.

## Hint 3
* Store the difference of k to the previous numbers in a hash set, since no key **and** value is needed, to do it on O(N) time.