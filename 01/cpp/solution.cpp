#include <fstream>
#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool has_a_sum(const std::vector<int> & arr, const int k){
    
    // Return false if array has 1 or less elements
    if(arr.size() < 2)
        return false;

    // Init hash set
    set<int> cache;

    // One pass over array
    for(int i = 0; i < arr.size(); i++){

        // If difference is already in cache return true
        if(cache.find(arr[i]) != cache.end()){
            return true;
        }
        // Otherwise add differnce to cache
        else{
            cache.insert(k - arr[i]);
        }
    }

    // No sum was found
    return false;
}

int main(){

    // Read test file
    ifstream inFile;
    inFile.open("../testcase.txt");

    if(!inFile){
        cerr << "Unable to open the file" << endl;
        return -1;
    }

    // Number of test cases
    int T;
    inFile >> T;

    // Loop over test cases
    for(int t = 1; t <= T; t++){

        // Read length of array N and sum K
        int N,K;
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