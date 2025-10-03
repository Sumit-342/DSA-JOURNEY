#include<stdio.h>

int main(){

int lcm,n,n1;

printf("Enter two number : ");
scanf("%d %d",&n,&n1);

for(lcm=1;lcm<n*n1;lcm++){
    if(lcm%n==0 && lcm%n1==0)
    break;
}

printf("Lcm of %d and %d is %d : ",n,n1,lcm);
    return 0;
}