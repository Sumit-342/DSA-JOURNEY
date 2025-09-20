#include<iostream>
using namespace std;

int main(){
  string s;
  
  cout<<"Enter The String : ";
  getline(cin,s);
  cout<<" You Entered : "<<s<<endl;

  // Reverse The String 

  cout<<"Reverse String is :  ";

  int start=0,end=s.size()-1;

  while(start<end){
    swap(s[start],s[end]);
    start++,end--;
  }
  cout<<s;
    return 0;
}