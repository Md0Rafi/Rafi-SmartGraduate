package java_programs;

import java.util.Scanner;

public class QuoRem {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the dividend :");
		int a = s.nextInt();
		System.out.println("Enter the divisor :");
		int b = s.nextInt();
		
		int remainder = a % b;
		int quotient = a / b;
		
		System.out.printf("The quotient is %d and the remainder is %d",quotient,remainder);
		s.close();
	}

}
