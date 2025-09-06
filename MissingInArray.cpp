#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr={1,2,3,5};
    int Total_sum=0,sum=0,size=arr.size(),ans=0;
    
    for(int i=1;i<=size+1;i++){
        Total_sum+=i;
    }

    for(int j=0;j<size;j++){
        sum+=arr[j];
    }

    ans=Total_sum-sum;

    cout<< "missing number is : " <<ans;

    return 0;
}