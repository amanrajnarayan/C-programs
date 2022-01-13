#include <stdio.h>
#include <string.h>
struct products
{
    char name[20];
    int id;
    int cost;
    char brand[20];
}p[5];

int main()
{
    int i;
    printf("Enter information of products\n");

    for(i=0;i<5;i++)
    {
        printf("\nProduct %d\n",i+1);
        printf("Enter product name : \n");
        scanf("%s",&p[i].name);
        printf("Enter product id : \n");
        scanf("%d",&p[i].id);
        printf("Enter cost : \n");
        scanf("%d",&p[i].cost);
        printf("Enter Brand Name : \n");
        scanf("%s",&p[i].brand);
    }

    printf("\n\nDisplaying Information\n\n");
    /*printf("Name\t\tProduct_id\t\tCost\t\tBrand_name\n");*/
    for(i=0;i<5;i++)
    {
        /*printf("%s\t%d\t%d\t%s\n",p[i].name,p[i].id,p[i].cost,p[i].brand);*/
        printf("Product Name : %s\n",p[i].name);
        printf("Product id : %d\n",p[i].id);
        printf("Cost : %d\n",p[i].cost);
        printf("Brand Name : %s\n\n",p[i].brand);
    }
    return 0;
}