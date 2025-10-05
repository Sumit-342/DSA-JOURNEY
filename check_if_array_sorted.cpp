#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,3,4,5,6,7,8};

      int n=arr.size();
        
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                
            }
            
            else {
                cout<<"Not Sorted";
            }
        }
      cout<<"Sorted";
      
    return 0;
}