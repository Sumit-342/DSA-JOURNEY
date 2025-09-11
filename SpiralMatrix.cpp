#include<iostream>
using namespace std;

int main(){
    int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},left=0,right=3,bottom=3,top=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
        cout<<endl;
    cout<<"Sprial matrix form : "<<endl;
    while(left<=right && top<=bottom){

        for(int j=left;j<=right;j++){
                cout<<(matrix[top][j])<< " ";
                
        }       
            cout<<endl;
                
                top++;
                
        
         for(int i=top;i<=bottom;i++){
                cout<<(matrix[i][right])<<" ";
         }  
                cout<<endl;
                right--;

         if(top<=bottom){
            for(int j=right;j>=left;j--){
                cout<<(matrix[bottom][j])<<" ";

            }   
                cout<<endl;
                bottom--;
            
            }

         if(left<=right){
            for(int i=bottom;i>=top;i-- ){
                cout<<(matrix[i][left])<<" ";

            }   
                cout<<endl;
                left++;
            
            }
    }


    return 0;
}