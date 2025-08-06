#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec={5,10,3,2,50,80};
    int target=78;
    bool found;

    int start=0,end=vec.size()-1;
    sort(vec.begin(),vec.end());

    while(start<end){
        if(vec[end]-vec[start]==target){
            cout<< 1;
            found=true;
            break;

        }
        else{
            if(vec[end]-vec[start]>target){
                start++;
            }
            else{
                end--;
            }
        }

    }
    if(!found){
        cout<<-1;
    }

    return 0;
}
