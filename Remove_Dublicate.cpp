#include<iostream>
using namespace std;

int main(){
int arr[]={1, 2, 2, 3, 3},writePtr=0,readPtr;
int size=sizeof(arr)/sizeof(arr[0])-1;

for(readPtr=1;readPtr<size;readPtr++){
    if(arr[readPtr]!=arr[writePtr]){
        writePtr++;
        arr[writePtr]=arr[readPtr];
    }

}
cout<<"Unique Elements : ";
for(int i=0;i<=writePtr;i++){
    cout<<arr[i]<<" ";

}

cout<<endl;
    return 0;
}