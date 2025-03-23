#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> &arr) {
    int maxPro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
            maxPro = max(arr[j] - arr[i], maxPro);
            }
        }
    }

    return maxPro;
}

int main() {
    int n;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector:";
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int maxPro = maxProfit(num);
    cout << "Max profit is: " << maxPro << endl;
}

// The time complexity of this code is O(n^2) because of the nested for loop.
// The space complexity of this code is O(1) because we are not using any extra space.
/*Enter the number of elements in the vector: 5
  Enter the elements of the vector:7 1 5 4 6
  Max profit is: 5 */

