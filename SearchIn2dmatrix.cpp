#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1,5,9},
        {14,20,21},
        {30,34,43}
    };

    int row=matrix.size(),col=matrix[0].size(),target;

    // Displaying the entered matrix
    cout<<"Given Matrix is : "<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;

    cout<<"Enter The number you want to search : ";
    cin>>target;

    // Searching logic 

    int i=0,j=col-1;
    bool found=false;

    while(i<row && j>=0){

        if(matrix[i][j]==target){
            cout<<"Found the value at "<<i<<" " <<j<<endl;
            found =true;
            break;

        }

        else if(matrix[i][j]>target){
            j--;
        }

        else {
            i++;
        }

       

    }

    if(!found){
         
            cout<<"Error !!, Entered element is not present in the matrix"<<endl;
        
    }

    return 0;
}