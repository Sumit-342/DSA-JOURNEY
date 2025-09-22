#include<iostream>
using namespace std;

void rotateclockwise(string &s){
     for(int i=s.size()-1;i>0;i--){
            swap(s[i],s[i-1]);
        }
        
}

void rotateanticlockwise(string &s){
        for(int i=0;i<s.size()-1;i++){
            swap(s[i],s[i+1]);
        }
    }


int main(){
    string s1="amazon";
    string s2="azonam";
    string clockwise,anticlockwise;

    clockwise=s1;

    rotateclockwise(clockwise);
    rotateclockwise(clockwise);
    if(clockwise==s2){
        cout<<s2<<endl;;
        
    }

    anticlockwise=s1;

    rotateanticlockwise(anticlockwise);
    rotateanticlockwise(anticlockwise);

    if(anticlockwise==s2){
        cout<<s2<<endl;
    }
    return 0;
}
