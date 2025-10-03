#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,2,4,5,7,8};
    int n=arr.size(),start=0,end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++,end--;
    }

    cout<<"Reverse Array is : ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}