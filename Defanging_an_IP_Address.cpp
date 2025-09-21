#include<iostream>
using namespace std;

int main(){
    string address ="255.100.50.0"; // output should be --> "255[.]100[.]50[.]0"
     string ans;

     for(int i=0;i<address.size();i++){

        if(address[i]=='.'){
            ans+="[.]";
        }

        else{
            ans+=address[i];
        }
     }

     cout<<"Answer is : "<<ans;
    return 0;
}