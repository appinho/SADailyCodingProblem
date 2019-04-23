def has_a_sum(arr, K):
	pass
	
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