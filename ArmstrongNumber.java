package Work;
import java.util.*;

public class ArmstrongNumber {
    public static void main(String[] args){
        Scanner s=new Scanner(System.in);
        int num=s.nextInt();
        int rem,sum=0;
        int num1=num;
        while(num1>0)
        {
            rem=num1%10;
            sum+=(rem*rem*rem);
            num1/=10;
        }
        if(sum==num)
            System.out.println("Armstrong Number");
        else
            System.out.println("It is not an Armstrong Number");
    }
}
