#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int permutation(int n,int r)
{
    return(fact(n)/fact(r));
}
int main()
{
   int n,r,c;
   printf("enter total item and selected item number");
   scanf("%d%d",&n,&r);
   c=permutation(n,r);
   printf("total arrangments is %d",c);
   return 0;
}

