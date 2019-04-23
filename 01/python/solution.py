def has_a_sum(arr, K):

	# Return false if array has 1 or less elements
	if(len(arr) < 2):
		return False

	# Init hash set
	cache = set()

	# One pass over array
	for a in arr:

		# If difference is already in cache return true
		if(a in cache):
			return True
		# Otherwise add differnce to cache
		else:
			cache.add(K - a)

	# No sum was found
	return False

if __name__ == '__main__':
	
	# Read test file
	f = open("../testcase.txt", "r")

	# Number of test cases
	T = int(f.readline())

	# Loop over test cases
	for __ in xrange(T):

		# Read length of array N and sum K
		N,K = map(int, f.readline().split())

		# Fill array
		arr = map(int, f.readline().split())

		# Print solution
		print("Case #%d: %s" % (__+1, has_a_sum(arr, K)))

	# Close file
	f.close()