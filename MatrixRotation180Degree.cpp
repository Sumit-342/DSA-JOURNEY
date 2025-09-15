#include<iostream>
using namespace std;

int main(){
    
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    // Displaying the entered matrix
    cout<<"Entered matrix : "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

        cout<<"Matrix after 180 degree rotation : "<<endl;
    // Reversing the column

     for(int j=0;j<4;j++){
            
            int start=0,end=3;
            
            while(start<end){
                swap(matrix[start][j],matrix[end][j]);
                
                start++,end--;
            }
        }

    //  Reversing the row
        
        for(int i=0;i<4;i++){
            
            int start=0, end=3;
            
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                
                start++,end--;
            }
        }  

    // Displaing the final output
    

     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}