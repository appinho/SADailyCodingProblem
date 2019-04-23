#include <fstream>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool has_a_sum(const std::vector<int> & arr, const int k){
    return false;
}

int main(){

    // Read test case
    ifstream inFile;
    inFile.open("../testcase.txt");

    if(!inFile){
        cerr << "Unable to open the file" << endl;
        return -1;
    }

    // Buffer variables to read test case
    int T,N,K;
    inFile >> T;

    // Loop over test cases
    for(int t = 1; t <= T; t++){

        // Read length of array N and sum K
        inFile >> N >> K;

        // Fill array
        vector<int> arr(N);
        for(int n = 0; n < N; n++){
            inFile >> arr[n];
        }

        // Print solution
        cout << "Case #" << t << ": " << has_a_sum(arr, K) << endl;
    }

    // Close file
    inFile.close();

    return 0;
}