#include<iostream>
#include<vector>
using namespace std;

int main(){
          // code here
          vector<int> arr={1,1,2,2,3,3,4,5,6,7};
        int n=arr.size(),i=0;
        
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
         arr.resize(i + 1);

    cout << "Array after removing duplicate elements: ";
    for (int num : arr) {
        cout << num << " ";
    }

    cout << endl;
    


    return 0;
}