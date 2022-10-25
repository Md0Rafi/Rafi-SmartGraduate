package Java_Closed_Module;
import java.util.Scanner;
public class Prog_15_b {

	public static void main(String[] args) {
		Scanner r=new Scanner(System.in);
		
		System.out.println("Enter any number :");
		
		int num1=r.nextInt();
		r.close();
		
		int number,temp,total=0;
		number=num1;
		
		while(number!=0) {
		
			temp=number%10;
			total =total+temp*temp*temp;
			number /=10;
		}
		
		if(total==num1) 
			System.out.println(num1+" is an amstrong number.");
		
		else
			System.out.println(num1+" it is a perfect number.");

	}

}
