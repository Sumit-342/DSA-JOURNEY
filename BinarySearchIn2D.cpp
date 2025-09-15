#include<iostream>
using namespace std;

int main(){
    int matrix[4][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},target=20,row=4,col=5;
    
     cout<<"Entered matrix : "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Searching logic 

    int start=0,end=row*col-1,mid;

    while(start<=end){

        mid=(start+end)/2;

        int row_index=mid/col;
        int col_index=mid%col;

        if(matrix[row_index][col_index]==target){
            cout<<"Find it at "<<row_index<<col_index<<endl;
            break;
        }

        else if(matrix[row_index][col_index]>target){
            end=mid-1;
        }

        else{
            start=mid+1;
        }
        
    }

    

    return 0;
}