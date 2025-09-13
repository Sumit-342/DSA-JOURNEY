#include<iostream>
using namespace std;

int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};


     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
        cout<<endl;

        cout<<"Matrix after 90 Degree anticlockwise Rotation : "<<endl;
    // Transpose of matrix


    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }

    for(int j=0;j<4;j++){
            
            int start=0,end=3;
            
            while(start<end){
                
                swap(matrix[start][j],matrix[end][j]);
                
                start++,end--;
            }
        }


         for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;
}