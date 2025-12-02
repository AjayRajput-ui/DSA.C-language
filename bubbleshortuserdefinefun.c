#include<stdio.h>
void bubbleshort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
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
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[10];
    int i,j,temp,n;
    printf("enter a range :");
    scanf("%d",&n);
    printf("enter a %d number:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleshort(a,n);
}