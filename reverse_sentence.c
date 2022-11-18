#include<stdio.h>
void swap(char s[],int i,int j)
{
    char temp;
    while(i<=j){
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
}
int main()
{
    char str[]="my name is fardeen";
    int s=0,e=0,flag=0,i=0;
    while(str[i]!='\0'){
        while(str[i]!=' ')
        {
            if(str[i]=='\0'){
                flag=1;
                break;
            }
            e++;
            i++;
        }
        swap(str,s,e-1);
        if(flag==1)
            break;
        s=e++;
        i++;
    }
    swap(str,0,i-1);
    printf("%s",str);
    return 0;
}
