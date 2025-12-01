#include<stdio.h>
int main()
{
    int a[10]={5,22,46,83,91,55};
    int i,j,temp;

    for(i=0;i<6;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("BABBLE SHORTING:\n");
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
}