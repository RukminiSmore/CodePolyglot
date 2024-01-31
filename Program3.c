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
    int i,j,k;
    printf("Enter first number: \n");
    scanf("%d",&i);

    printf("Enter second number: \n");
    scanf("%d",&j);

    k=i+j;

    printf("Addition is: %d\n",k);

    return 0;
}