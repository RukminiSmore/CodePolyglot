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

/////////////////////////////////////////////////////////////////////////////
//
// Function Name  : Addition
// Description    : It is used to perform addition of two integers 
// Input Arguments: Integer, Integer
// Output         : Integer 
// Author         : Rukmini Santosh More
// date           : 25/09/2023 
//
/////////////////////////////////////////////////////////////////////////////
// Addition is a function which accepts 2 parameters as integer and it return integer

int  Addition(int iNo1, int iNo2)
{
    int iSum=0; //Variable to store the value of addition
    iSum = iNo1+ iNo2;
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
// Entry point function of an application which performs addition of 2 integers  //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0; //Variable to store first input
    int iValue2=0; //Variable to store the second input 
    int iAns=0;    //Variable to store the result 

    iAns=Addition(iValue1,iValue2);
    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter second number: \n");
    scanf("%d",&iValue2);

    iAns=iValue1+iValue2;

    printf("Addition is: %d\n",iAns); //Function call to perform addtiom 

    return 0; 

}

//step 5: test the code
/*
test case 1:
Input : 34 56
output : 90

Test case : 2
Input : -9 -10 
Output:-19

Test case : 3
Input : 45  20
Output:65

Test case : 4
Input : 16 12
Output:-28
*/