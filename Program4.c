// problem statements: Accept 2 values from user and perform addition

// step:1 understand the problem statement 
// conclusion : we have to accept 2 integer and perform it's addition

//step 2: write the algorithm 
/*
    START 
        Aceept first number from user and store it into no1
        Aceept second number from user and store it into no2
        Create one variable to store the result named as Ans 
        perform Addition of no1 and no2, store the resulit in Ans
        Display the result from Ans to the user.
    STOP
*/

//step:3 Deside the programming language (c/c++/java)
//we select C programming.

//Step 4: write the program 
#include<stdio.h>

int main()
{
    int iValue1=0; 
    int iValue2=0; 
    int iAns=0;

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iAns=iValue1+iValue2;

    printf("Addition is: %d\n",iAns);

    return 0; 

}

//step 5: test the code
/*
test case 1:
Input : 10 11
output : 21

Test case : 2
Input : 10 0 
Output:10

Test case : 3
Input : 12 -6
Output:6

Test case : 4
Input : -6 -5
Output:-11
*/