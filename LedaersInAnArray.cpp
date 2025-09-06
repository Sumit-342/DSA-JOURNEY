#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
 vector<int> arr={16,17,4,3,5,2},leaders;
 int size=arr.size()-1,temp=INT16_MIN;
for(int i=size;i>=0;i--){
   

    if(arr[i]>temp){
         temp=arr[i];
        leaders.push_back(arr[i]);
    }

   
}
   reverse(leaders.begin(),leaders.end());

   for(int val:leaders){
    cout<<val << " ";
   }


    return 0;
}