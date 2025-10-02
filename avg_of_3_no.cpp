#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>nums={1,3,6,10,12,15};
    int size=nums.size(),count=0,sum=0;
    for(int i=0;i<size;i++){

            if(nums[i]%6==0){
                sum+=nums[i];
                count++;
            }
        }

        if(count>0){
          cout<<"Average of 3 even numbers : "<<sum/count<<endl;
        }

        else{
            cout<<0;
        }


    return 0;
}