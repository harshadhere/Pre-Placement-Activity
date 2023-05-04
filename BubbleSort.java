import java.util.Currency;


class MergeSort
{
    public void Conqure(int Arr[],int s,int Mid,int e)
    {
        int len = s + Mid + 1;
        int len1 = e - Mid;

        int L[len]; 
        int R[len1];

        for(int i=0;i<len;i++)
        {
             L[i] = Arr[s + i];
        }

        for(int j = 0;j<len1;j++)
        {
            R[j] = Arr[Mid + j + 1];
        }

        i = 0;
        j = 0;
        int k = s;

        while(i < len && j < len1)
        {
            if(L[i] <= R[j])
            {
                Arr[k] = L[i];
                i++;
            }
            else
            {
                Arr[k] = R[j];
                j++;
            }
            k++;
        }

        while(i<len)
        {
            Arr[k++] = L[i++];
        }

        while(j <len1)
        {
            Arr[k++] = R[j++];
        }


    }  
    public void Devide(int Arr[],int s,int e)
    {
        if(s>=e)
        {
            return;
        }
       int Mid= s + e/2; 
        Devide(Arr, s, Mid);
        Devide(Arr, Mid+1, e);
        Conqure(Arr,s,Mid,e);
    }

}

public class BubbleSort
{

    public static void Bubble(int Arr[])
    {  
       for(int i =0;i<Arr.length -1;i++)
       {
          for(int j = 0;j<Arr.length -i-1;j++)
          {
              if(Arr[j] > Arr[j+1])
              {
                   int temp = Arr[j];
                   Arr[j] = Arr[j+1];
                   Arr[j+1] = temp;
              }
          }
       }
    }

    public static void Selection(int Arr[])
    {
        int Current = 0;
        int temp = 0;

        for(int i = 0;i<Arr.length-1;i++)
        {
            Current = i;

            for(int j = i+1;j<Arr.length;j++)
            {
                    if(Arr[j] < Arr[Current])
                    {
                        Current = j;
                    }
            }
             temp = Arr[i];
             Arr[i] = Arr[Current];
             Arr[Current] = temp;
        }
    }

    public static void Insertion(int Arr[])
    {

        for(int i = 1;i< Arr.length;i++)
        {
            int j = i -1;
            int current = Arr[i];
            while(j >= 0 && current < Arr[j])
            {
                Arr[j+1] = Arr[j];
                j--;
            }
            Arr[j+1] = current;
        }
    }
    

    public static void Display(int Arr[])
        {
            for(int i = 0;i<Arr.length;i++)
            {
                System.out.println(" "+Arr[i]);
            }
        }
    public static void main(String arg[])
    {
  
       int Arr[] =  {10,2,23,43,3}; 
      
      

        Display(Arr);

        MergeSort obj = new MergeSort();

        obj.Devide(Arr,0,Arr.length-1);

        System.out.println("Array after Merge Sort : ");

         Display(Arr);
    }
}