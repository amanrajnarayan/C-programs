#include <Stdio.h>
void main()
{
    int i,j,k,n,a[20];
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter the elements in array:\n");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }

        }
    }
    printf("New array without duplicates are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}