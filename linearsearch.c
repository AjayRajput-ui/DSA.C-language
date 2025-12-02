#include<stdio.h>
int main()
{
    int a[100];
    int i,s,p,r;
    printf("enter a range :");
    scanf("%d",&r);
    printf("enter a %d numbers:",r);
    for(i=0;i<r;i++)
 {
     scanf("%d",&a[i]);
 }


// printf("ENTER A 10 NUMBER");
// for(i=0;i<10;i++)
// {
//     scanf("%d",&a[i]);
// }
printf("enter a number that you want to search:");
scanf("%d",&s);
for(i=0;i<=r;i++)
{
    if(a[i]==s)
    {
    printf("the number is found at poistion  %d",i+1);
    p++;
    break;
    }
}
if(p==0)
{
    printf("number is not found:");
}

}