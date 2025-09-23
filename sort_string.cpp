#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s="lEetCode";
     vector<int>upper(26,0);
        vector<int>lower(26,0);

        for(int i=0;i<s.size();i++){

            //lower case

            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            int index=s[i]-'a';
                lower[index]++;
                s[i]='#';
            }

            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            int index=s[i]-'A';
                upper[index]++;
                 s[i]='#';
            }
        }

        string vowel;
        // upper case

        for(int i=0;i<26;i++ ){
            char c='A'+i;

            while(upper[i]){
                vowel+=c;
                upper[i]--;
            }
        }

        // lower case

         for(int i=0;i<26;i++ ){
            char c='a'+i;

            while(lower[i]){
                vowel+=c;
                lower[i]--;
            }
        }

        int first=0,second=0;

        while(second<vowel.size()){
            if(s[first]=='#'){
                s[first]=vowel[second];
                second++;
            }
            first++;
        }
        cout<<"Sorted String according to their ASCII values : " <<s;

    return 0;
}