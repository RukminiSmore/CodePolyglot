import java.util.*;

class Program530
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
            if(hobj.containsKey(Arr[ch]))
            {
                Frequency=hobj.get(Arr[ch]);
                hobj.put(Arr[ch],Frequency+1);
            }
            else
            {
                hobj.put(Arr[ch],1);
            }
          }
          set<character>setobj=hobj.keySet();
          for(char ch1: setobj)
          {
            System.out.println(ch1+" occures "+hobj.get(ch1)+"times");
          }
    }
}
