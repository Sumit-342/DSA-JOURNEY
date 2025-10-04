#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5,67,8};
    int largest=arr[0],slargest=-1;
    int size=arr.size();

       for(int i=1;i<size;i++){
            if(arr[i]>largest){
                
                slargest=largest;
                largest=arr[i];
                
            }
       
         else if(arr[i]<largest && arr[i]>slargest){
            slargest=arr[i];
         }
        }
        cout<<"Second Largest Element is : " << slargest;
    return 0;
}