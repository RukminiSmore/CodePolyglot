// accept number from users and calculate factorial
// deep concept
#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
      Number(int x) 
      {
        iNo=x;
      } 

      int Factorial()
      {
        int iCnt=0;
        int iFact=1;
        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
            iFact=iFact*iCnt;
        }
        return iFact;

      }
};

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter the number :"<<endl;
    cin>>iValue;

    Number nobj(iValue);

    iRet=nobj.Factorial();

    cout<<"Factorial is: "<<iRet<<endl;

    return 0;
}