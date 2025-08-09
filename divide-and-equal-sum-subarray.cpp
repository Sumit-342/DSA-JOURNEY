#include<iostream>
using namespace std;

int main(){
int arr[]={3,4,-2,5,8,20,-10,8};
int prefix=0,Total_Sum=0,size=sizeof(arr)/sizeof(arr[0]),ans=0;

for(int i=0;i<size;i++){
    Total_Sum+=arr[i];  // Calculates total sum
}

for(int j=0;j<size-1;j++){
    prefix+=arr[j];
    ans=Total_Sum-prefix;



    if(ans==prefix){
        cout<<"Yes the array can be divided into equal sum of sub array";
        return 1;
    }
   

}

cout<<0;


    return 0;
}