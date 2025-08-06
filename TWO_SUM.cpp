#include<iostream>
using namespace std;


int main(){
    int arr[]={2,7,11,15},start=0,end=sizeof(arr)/sizeof(arr[0])-1;
    int target=9;
    
    while(start<end){
        if(arr[start]+arr[end]==target){
            cout<<start+1<<" "<<end+1;
            break;

        }
        else{
            if(arr[start]+arr[end]>target){
                end--;
            }
            else{
                start++;
            }
        }
    }


    return 0;
}