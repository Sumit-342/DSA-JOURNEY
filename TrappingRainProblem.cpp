#include<iostream>
#include<vector>
using namespace std;

int main(){
vector <int>height={0,1,0,2,1,0,1,3,2,1,2,1};
 int LeftMax=0,RightMax=0,maxHeight=height[0],index=0,n=height.size(),water=0;
        
        for(int i=1;i<n;i++){
            if(maxHeight<height[i]){
                maxHeight=height[i];
                index=i;
            }
            
        }

        for(int i=0;i<index;i++){
            if(LeftMax>height[i]){
                water+=LeftMax-height[i];
            }
            else{
                LeftMax=height[i];
            }
        }


        for(int i=n-1;i>index;i--){
            if(RightMax>height[i]){
                water+=RightMax-height[i];

            }
              else{
                RightMax=height[i];
              }
            
        }
        cout<<water;
    return 0;
}