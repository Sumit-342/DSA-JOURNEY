#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "aabcdaabc";
    vector<int>lps(s.size(),0);
        
        int prefix=0,suffix=1;
        
        while(suffix<s.size()){
            // when matched
            if(s[prefix]==s[suffix]){
                lps[suffix]=prefix+1;
                prefix++,suffix++;
            }
            
            // when not matched
            
            else{
                
                if(prefix==0){
                    lps[suffix]=0;
                    suffix++;
                }
                else{
                    prefix=lps[prefix-1];
                }
            }
        }
        cout<<"Longest Prefix Suffix is : "<< lps[s.size()-1];

    return 0;
}