#include<iostream>
using namespace std;

int main(){
 
    int arr[]={3,-4,5,4,-1,7,-8},sum=0,max_sum=INT16_MIN,size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        sum+=arr[i];
        max_sum=max(sum,max_sum);

        if(sum<0)
        sum=0;
    }

 cout<<"Maximum subarray sum is : "<<max_sum<<endl;

     
    return 0;
}