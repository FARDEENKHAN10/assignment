#include<stdio.h>
int main()
{
    char str[5][20];
    int i,j,k;
    printf("enter 5 city names");
    for(i=0;i<5;i++)
        fgets(str[i],20,stdin);
    for(i=0;i<5;i++)
    {
        k=0;
        for(j=0;str[i][j];j++)
      {
        if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='y')
            k++;
    }
    printf("total vowels in %s is %d\n",str[i],k);
    }
    return 0;
}
