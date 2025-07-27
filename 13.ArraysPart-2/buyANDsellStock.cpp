#include<iostream>
#include<climits>
using namespace std;
void buySellStock(int *prices,int n){


    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int start = 1; start<n; start++){
        bestBuy[start] = min(bestBuy[start-1], prices[start-1]);
        cout<<bestBuy[start-1]<<" ,";
    }
    cout<<endl;

    // maxprofit
    int maxProfit = 0;
    for(int i = 0; i<n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(currProfit, maxProfit);
    }
    cout<<"Max Profit: "<<maxProfit<<endl;
}


int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    buySellStock(arr, n);
    return 0;
}