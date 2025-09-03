#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={1,4,45,6,10,8};
    sort(arr.begin(),arr.end());
    int n=arr.size(),target=24;

    for(int i=0;i<n-2;i++){
        int num1=arr[i];
        int start=i+1, end=n-1;

        int temp=target-num1;

        while(start<end){
            if(arr[start]+arr[end]==temp){
                cout<<"Find it"<<endl;
                break;

            }
            else if(arr[start]+arr[end]<temp){
                start++;
            }
            else if(arr[start]+arr[end]>temp){
                end--;
            }
            else{
                cout<<"Not found"<<endl;
            }
        }
    }
    return 0;
}