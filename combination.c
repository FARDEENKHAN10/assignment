#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int combination(int n,int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
   int n,r,c;
   printf("enter total item and selected item number");
   scanf("%d%d",&n,&r);
   c=combination(n,r);
   printf("total combination is %d",c);
   return 0;
}

