#include<stdio.h>
int main()
{
    char s[4][20]={"my","name","is","fardeen"};
    char w1[]="name",w2[]="fardeen";
    int i,x,y;
    for(i=0;i<4;i++)
    {
        if(s[i]=="name")
            x=i;
        if(s[i]=="fardeen")
            y=i;
    }
    int z=(x-y-1);
    printf("%d",z);
    return 0;
}
