#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={4,3,6,2,1,1};
    int size=arr.size();

    // Derement by 1

    for(int i=0;i<size;i++){
        arr[i]--;
    }

    // Occurence

    for(int i=0;i<size;i++){

        arr[arr[i]%size]+=size;
    }

    // Missing and repaeting numbers 

    for(int i=0;i<size;i++){
        if(arr[i]/size==0){
            cout<<"Missing number is :  "<<i+1<<endl;
        }

        else if(arr[i]/size==2){
            cout<<"Repeating number is "<< i+1 <<endl;
        }
    }

    return 0;
}