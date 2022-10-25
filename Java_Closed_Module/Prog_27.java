package Java_Closed_Module;

import java.util.Scanner;
public class Prog_27 {

	public static void main(String[] args) {
		
		Scanner r=new Scanner(System.in);
		System.out.println("enter the invested amount : ");
		double inv=r.nextDouble();
		double value=inv;
		value +=inv*0.4;
		System.out.println("first year value after increased by 40% : $"+value);
		value-=1500;
		System.out.println("second year value after lost $1500 : $"+value);
		value+=value*0.2;
		System.out.println("third year after increment of 20% : $"+value);
		r.close();
	}

}
