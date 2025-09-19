#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={3,3,2,3,1,3,2,2,1,3,3};

    int size=arr.size();
    int Major,count=0;

    for(int i=0;i<size;i++){
        if(count==0){
            count=1;

            Major=arr[i];
        }

        else{
            if(Major==arr[i]){
                count++;
            }

            else{
                count--;
            }
        }
    }

     count=0;
        
        for(int i=0;i<size;i++){
            if(arr[i]==Major){
                count++;
            }
        }
        
        if(count>size/2){
           cout<<"Majority Element is : " << Major <<endl;
        }
        
        else{
            cout<<"No Majority Elemnt exist "<<endl;
        }

    
    return 0;
}