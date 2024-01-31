import java.util.*;

class Program520
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str=sobj.nextLine();

        System.out.println("Enter the word that you want to search :");
        String word=sobj.nextLine();

        word=word.trim();
        str=str.trim(); 

         str=str.trim();

         str=str.replaceAll("\\s+"," ");

         String Arr[]=str.split(" ");

         System.out.println("Number of words are: "+Arr.length);

        
        int iCnt=0;
         int iFrequency=0;
        for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
           if(word.equals(Arr[iCnt]))
           {
              iFrequency++;
           } 
        } 
        System.out.println("Frequency of the word is : "+iFrequency);    
    }
}