#include<stdio.h>

// logical OR || -> if any of the conditiobn is TRUE then it enter inside the if 
// Logical And && -> if all of the condition are True it enters inside the if 
void DisplayClass(float fMarks)
{
    if (fMarks>100.00 || fMarks<0.00)
    {
        printf("Invalid marks......\n"); //filter 
    }
    else if((fMarks<35) && (fMarks>=0))
    {
        printf(" you are fail\n");
    }
    else if ((fMarks >=35.00) && (fMarks<50.00))
    {
        printf(" you are pass\n");
    }
    else if ((fMarks >=50.00) && (fMarks<60))
    {
        printf(" your class is second class\n");
    }
    else if ((fMarks >=60.00) && (fMarks<75))
    {
        printf("your class is first class\n");
    }
    else if ((fMarks >=75.00) && (fMarks<=100))
    {
        printf("your class is first class with Distinction\n");
    }
    
    

}
int main()
{
    auto float fValue=0.0f;
    
    printf("Enter your marks\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}