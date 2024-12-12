#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int missing_number(vector<int>& arr) {
    int n = arr.size();
    int sum_of_all = (n * (n + 1)) / 2; // Sum of 0 to n
    int sum_of_arr = 0;
    for (int i = 0; i < n;i++)
    {
        sum_of_arr += arr[i];
    }
    return sum_of_all - sum_of_arr;
}

int main() {
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    cout << "Missing number: " << missing_number(arr) << endl;
    return 0;
}
