// accept number from users and calculate factorial
// deep concept
#include<iostream>
using namespace std;

class Array
{
  private:
    int *Arr;
    int iSize;

    public:
      Array(int X)
      {
        iSize=X;
        Arr=new int(iSize);
      }
    ~Array() //Destructor
    {
      delete []Arr;
    }
    void Accept() //Member function
    {
      int iCnt=0;
      cout<<"please enter the elements : "<<endl;
      for(iCnt=0;iCnt<iSize;iCnt++)
      {
        cin>>Arr[iCnt];
      }
    }
    void Display() //Member function
    {
      cout<<"Elements of array are: "<<endl;
      int iCnt=0;
      for(iCnt=0;iCnt<iSize;iCnt++)
      {
        cout<<Arr[iCnt]<<"\t";
      }
      cout<<endl;
    }


    // logic 

};//end of class

int main()
{
    int iLength=0;
    
    cout<<"enter the number of elements that you want to store: "<<endl;
    cin>>iLength;
    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    return 0;
}