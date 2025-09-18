#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        arr[i]--;
    }

       for(int i=0;i<n;i++){
          arr[arr[i]%n]+=n;
      }
      
      for(int i=0;i<n;i++){
          arr[i]=arr[i]/n;
        cout<< arr[i] <<" ";
      }

      
    return 0;
}