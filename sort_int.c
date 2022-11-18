#include<stdio.h>
void sort(int p[],int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
}
void main()
{
    int a[5]={3,1,5,4,7};
    int i;
    sort(a,5);
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
}
