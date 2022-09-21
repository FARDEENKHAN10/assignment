#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k=64;
        for(j=1;j<=13;j++){
            if(j<=8-i||j>=i+6){
                if(j<=14/2){
                   k++;
                   printf("%c",k);
                }
                 else{
                    k--;
                    printf("%c",k);
                 }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


