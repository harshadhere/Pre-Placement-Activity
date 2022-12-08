public class GenericMethod {
    
    public static <T> void Display(T Arr[])
    {
        for(int i = 0;i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
    public static void main(String ar[])
    {
        Integer Arr[] = {10,20,30,40};

        Display(Arr);

        Character Arr[] = {'A','B','V','F'};
        Display(Arr);

        

    }
}
