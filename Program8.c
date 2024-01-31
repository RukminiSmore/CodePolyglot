// Problem statement: Accept radius from user and calculate the area of circle

// step:1 understand the problem statement 
// conclusion : We are going to use the formula as PI*R*R. we have to accept radius and calculatee the area of circle

//step 2: write the algorithm 
/*
    START 
        Aceept the radius from user and store into Radius 
        Create variable as PI and store value 3.14
        Calculate area PU*Radius *Radius
        Display the value of area to the user 
    STOP
*/

//step:3 Deside the programming language (c/c++/java)
//we select C programming.

//Step 4: write the programe

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////
//
// Function Name  : CalculateArea
// Description    : It is used to perform area of circle 
// Input Arguments: float
// Output         : float 
// Author         : Rukmini Santosh More
// date           : 02/10/2023 
//
/////////////////////////////////////////////////////////////////////////////
float CalculateArea(float fValue )
{
  
    auto float fAns=0.0f;
    auto float  PI=3.14f;

    fAns= PI * fValue * fValue;

    return fAns;
}

///////////////////////////////////////////////////////////////////////////////////
//                                                                               //
// Entry point function of an application which performs the area of circle      //
//                                                                               //
///////////////////////////////////////////////////////////////////////////////////
int main()
{
    
    auto float fRadius=0.0f; //variable to store the radius 
    auto float fArea=0.0f;   // variable to store the result 

    
    printf("Enter the radius of circle: \n");
    scanf("%f",&fRadius);

    fArea=CalculateArea(fRadius); // function call to perform the area 
    printf("Area of radius is:  %f\n",fArea);

    return 0;
}


/*
    Test Cases 
    TesT Case 1:
    radius = 10.5
    result=346.184998


*/