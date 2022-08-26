#include<stdio.h>
//Write a program in C to find GCD of two numbers using recursion.
int gcd(int a , int b);

int main (){
    int a;
    int b;
    printf("Enter the first value :");
    scanf("%d" , &a);
    printf("Enter the second value :");
    scanf("%d" , &b);
    printf("result = %d\n" , gcd(a , b));

return 0;
}

int gcd(int a, int b) {
    if(a==0) {
        return b;
    } else if(b==0) {
        return a;
    }
    else gcd(b, a%b);
}