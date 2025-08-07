#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
vector<int>arr={10,20,9,40};
int x=400,start=0,end=arr.size()-1;
bool found;

sort(arr.begin(),arr.end());

while(start<end){
    if(arr[start]*arr[end]==x){
        found=true;
        cout<<"True";
        break;

    }

    else{
        if(arr[start]*arr[end]>x){
            end--;
        }
        else{
            start++;
        }

    }

}

if(!found)
cout<<"false";

    return 0;
}