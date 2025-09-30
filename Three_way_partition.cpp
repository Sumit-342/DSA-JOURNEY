#include<iostream>
using namespace std;

int main(){
    int arr[]={1, 2, 3, 3, 4},a=1,b=2;

    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        if(arr[mid]<a){
            swap(arr[mid],arr[low]);
            mid++,low++;
        }
        else if(arr[mid]>b){
            swap(arr[mid],arr[high]);
            high--;
        }
        else{
            mid++;
        }
    }

    cout<<"Partition Array : ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}