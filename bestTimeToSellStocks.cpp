#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices,int n){
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i=0;i<n;i++){
        maxProfit = max(maxProfit,prices[i]-minPrice);
        minPrice = min(minPrice,prices[i]);
    }
    return maxProfit;
}
int main(){
    int n;
    cin>>n;
    vector<int> prices;
    int a;
    
    for(int i=0;i<n;i++){
        cin>>a;
        prices.push_back(a);
    }

    int ans = maxProfit(prices,n);
    cout<<ans<<endl;
    return 0;

}