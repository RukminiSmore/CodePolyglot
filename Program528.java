import java.util.*;

class Program528
{
    public static void main(String args[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the string : ");
        String str=sobj.nextLine();

        str=str.replaceAll("\\s+","");

         System.out.println(str);


         str=str.toLowerCase();
          char Arr[]=str.toCharArray();
          
          HashMap<Character, Integer> hobj=new HashMap<>();

          int iCnt=0, Frequency=0;
          for(char ch: Arr)
          {
            if(hobj.containsKey(Arr[ich]))
            {
                Frequency=hobj.get(Arr[ich]);
                hobj.put(Arr[ich],Frequency+1);
            }
            else
            {
                hobj.put(Arr[ch],1);
            }
          }
          
          System.out.println(hobj);
    }
}
