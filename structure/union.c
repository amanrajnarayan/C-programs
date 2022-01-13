#include <stdio.h>
#include <string.h>

union student
{
    int roll;
    char name[20];
    int fee;

}s1;

int main()
{
    printf("Enter roll\n");
    scanf("%d",&s1.roll);
    printf("\nroll = %d",s1.roll);
    printf("\nEnter name\n");
    scanf("%s",&s1.name);
    printf("\nname =%s",s1.name);
    printf("\nEnter fee\n");
    scanf("%d",&s1.fee);
    printf("\nfee =%d",s1.fee);

    return 0;
}
