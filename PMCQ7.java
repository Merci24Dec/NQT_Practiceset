public class Main 
{
    public static void main(String[] args)
    {
        int count=1;
        while(count<=3){
        System.out.println(count % 2 ==1?count + 2:count - 1);
        ++count;
    } 
}
}
//o/p
//3 1 5
