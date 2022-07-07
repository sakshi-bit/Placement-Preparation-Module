#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortMe(int arr[] ,int n){
//Dutch national Flag Problem
int mid=0;
int low=0;
int high = n-1;
while(mid<=high){
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
    else if(arr[mid]==2){
        swap(arr[mid],arr[high]);
        high--;
        mid++;
    }
    else{
        mid++;
    }
}
}

int main(){
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortMe(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
