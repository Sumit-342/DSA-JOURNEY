#include<iostream>
using namespace std;

int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    //Displaying the given matrix
    cout<<"Matrix before transpose : "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<""<<endl;
    }
    
        cout<<endl;
    // logic of transpose of matrix
    cout<<"Matrix after Transpose : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    // Displaying after transpose

      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<""<<endl;
    }


    return 0;
}