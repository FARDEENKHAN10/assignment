#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++){
        for(j=1;j<=19&&i<=3;j++)
        {
            if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i))
                printf("*");
            else
                printf(" ");
        }
        for(j=1;j<=14&&i==4;j++){
            if(j==8)
                printf("Mysirg");
            else
                printf("*");
        }
        for(j=1;j<=19&&i>4;j++){
            if(j>=i-3&&j<=23-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
