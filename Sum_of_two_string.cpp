#include<iostream>
#include<algorithm>
using namespace std;

string add(string num1,string num2){
        string ans;
        int index1=num1.size()-1, index2=num2.size()-1;
        int sum=0,carry=0;


        while(index2 >= 0){
            sum=(num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum/10;
            char c = '0' + sum % 10;
            ans += c;

            index2--,index1--;

        }

        while(index1 >= 0){

            sum=(num1[index1] - '0')  + carry;
            carry = sum/10;
            char c = '0' + sum % 10;
            ans += c;

            index1--;
        }

        if(carry){
            ans+='1';
        }

        reverse(ans.begin(),ans.end());

        while(ans.size() > 1 && ans[0] == '0') {
            ans.erase(ans.begin());
        }

    
        return ans;
    }

int main(){
    string num1;
     string num2 ;
     cout<<"Enter The values in string 1 : ";
     getline(cin,num1);
     cout<<"Enter The values in string 2 : ";
     getline(cin,num2);

        if(num1.size() < num2.size()){
           cout<< "Sum of Two stringd is : " <<add(num2,num1)<<endl;
        }

        else{
           cout<< "Sum of Two stringd is : "<< add(num1,num2) << endl;
        }
    


    return 0;
}