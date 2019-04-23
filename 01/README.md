# DCP 01 - Google (EASY)

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.  

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.  

Bonus: Can you do this in one pass?  

# Test cases

```
2		# Number of test cases  
4 17		# Array length N, sum K  
10 15 3 7	# Array elements  
4 16		# Array length N, sum K  
10 15 3 7	# Array elements  
```

* t=1: True, since 10 and 7 adds up to 17
* t=2: False, since no two numbers add up to 16

Feel free to add different test cases. 

# Hints

Try it first on your own, but if you feel stuck look step by step at the following hints

* 1: Think about a Brute Force solution. Can you do it in O(N^2) where N is the length of the list?  
* 2: What information would be helpful to be stored for future array elements?
* 3: Think about a memory efficient data structure that helps you to store this information.
* 4: Store the difference of k to the previous numbers in a hash set, a hash table or dictionary is not needed since no key **and** value is needed, to do it in O(N) time and O(N) space.