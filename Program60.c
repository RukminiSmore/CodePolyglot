#include<stdio.h> //for printf and scanf
#include<stdlib.h> //for malloc and free

int main()
{
    int iCount=0;
    int *ptr=NULL;

    printf("Enter number of elemets:\n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount *sizeof(int));

    printf("Enter the elements:\n");
    scanf("%d",&ptr[0]);
    scanf("%d",&ptr[1]);
    scanf("%d",&ptr[2]);
    scanf("%d",&ptr[3]);
    return 0;
}
