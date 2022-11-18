#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],w1[10],w2[10];
    int i,j;
    printf("enter 5 words");
    for(i=0;i<5;i++)
        gets(str[i]);
    printf("enter 2 words to find distance");
    gets(w1);
    gets(w2);
    int x=-1,y=-1,min=1000;
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],w1)==0)
            x=i;
        if(strcmp(str[i],w2)==0)
            y=i;
        if(x!=-1&&y!=-1)
            min=abs(y-x);
    }
    printf("%d",min-1);
    return 0;

}
