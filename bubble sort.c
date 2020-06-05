#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,n,d,a[100],flag=1;
printf("enter the size of array=");
scanf("%d",&n);
printf("\n enter an array of numbers\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i-1);j++)
        {
            if(a[j]>a[j+1])
            {
            flag=0;
            d=a[j];
            a[j]=a[j+1];
            a[j+1]=d;
            }
        }
        if(flag==1)
        {
            printf("already sorted\n");
            break;
        }

    }
printf("The shorted array is\n");
for(i=0;i<n;i++)
    printf("%d\n",a[i]);
return 0;
}
