#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    // Displaying the Matrix

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
        cout<<endl;

        cout<<"Matrix after Rotation : "<<endl;
    // Transpose of matrix


    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
  


    //Reverse the matrix
    int start=0,end=3;
    for(int i=0;i<4;i++){

        while(start<end){
            swap(matrix[i][start],matrix[i][end]);
            start++,end--;
        }


    }
    // Matrix after getting reverse
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}