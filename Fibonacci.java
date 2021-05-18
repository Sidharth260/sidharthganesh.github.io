package Work;
import java.util.*;

public class Fibonacci {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int n1=0,n2=1,n3;
        int n=s.nextInt();
        System.out.print(n1+" "+n2);
        for(int i=0;i<n;++i)
        {
            n3=n1+n2;
            System.out.print(" "+n3);
            n1=n2;
            n2=n3;
        }
    }
}
