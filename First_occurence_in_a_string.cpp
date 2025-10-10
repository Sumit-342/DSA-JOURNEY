#include<iostream>
#include<vector>
using namespace std;

void lpsfind(vector<int>&lps , string s){
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

    }

int main(){
    string haystack="sadbutsad";
    string needle = "sad";

     vector<int>lps(needle.size(),0);
        

        lpsfind(lps,needle);
        int first=0, second=0;

        while(first<haystack.size() && second<needle.size()){
            // match

            if(haystack[first]==needle[second]){
                first++,second++;
            }

            // not match

            else{
                if(second==0){
                    first++;
                }
                else{
                    second=lps[second-1];
                }
            }
        }

        if(second==needle.size()){
            cout<<" First Occurrence in a String : "<< first-second;
        }

        else{
            cout<<" No  First Occurrence in a String found ";
        }

    return 0;
}