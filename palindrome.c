#include<stdio.h>
int main(){
    int num;
    printf("Enter a num:",num);
    scanf("%d",num);
    
    int org=num;
    int reverse=0;

    while(num>0){
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    if(org==reverse){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;

}