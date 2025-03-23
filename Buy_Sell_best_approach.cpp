#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProfit(vector<int>& num) {
    int buy=num[0];
    int sell=0,profit=0;
    for(int i=1;i<num.size();i++){
        if(buy>num[i]){
            buy=num[i];
        }
        else if(buy<num[i]){
            sell=num[i]-buy;
        } 
      
        profit=max(sell,profit);
    }
    return profit;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the vector: ";
    cin>>n;
    cout<<"Enter the elements of the vector:";
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    int profit=maxProfit(num);
    cout<<"The maximum profit is: "<<profit<<endl;
    // The time complexity of this code is O(n) because we are iterating through the vector only once.
    /*Enter the number of elements in the vector: 5
      Enter the elements of the vector:7 1 4 5 6 2
      The maximum profit is: 5*/
}
