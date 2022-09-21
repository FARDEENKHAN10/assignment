#include<stdio.h>
int main()
{
    int i,s,y,j,count;
    for(i=1;i<=1000;i++){
        s=1;
        count=0;
        y=i;
        while(y!=0)
        {
           y=y/10;
           count++;
        }
        for(j=0;j<count;j++){
            if(count==1)
                s=s*(i%10);
            if(count==2)
            {
                y=i;
                s=s*((y%10)*(y%10));
                y=y/10;
            }
            else
            {
                y=i;
                s=s*((y%10)*(y%10)*(y%10));
                y=y/10;
            }
        }
        if(i==s)
           printf("%d ",i);
    }
    return 0;
}
