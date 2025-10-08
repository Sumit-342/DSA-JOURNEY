#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr={1, 2, 0, 4, 3, 0, 5, 0};    
    int j=-1,n=arr.size();
        
        for(int i=0;i<n;i++){
            
            if(arr[i]==0){
                j=i;
                break;
            }
        }
        
        for(int i=j+1;i<n;i++){
            
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }

        
        
        cout<<"Modified Array is : ";

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

    

    
    return 0;
}