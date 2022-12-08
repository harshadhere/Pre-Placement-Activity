import java.io.File;

class CreateFile {
    public static void main(String a[])throws Exception
    {
        File fobj = new File("Marvellous.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File created successfully");

        }
        else
        {
            System.out.println("Unable to create the file");
        }
    }
    
}
