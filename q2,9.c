#include<stdio.h>
int main()
{
    int x;
    x=sizeof(int);
    printf("size of int is %d",x);
    x=sizeof(char);
    printf("size of char is %d",x);
    x=sizeof(float);
    printf("size of float is %d",x);
    x=sizeof(double);
    printf("size of double is %d",x);
    return 0;
}
