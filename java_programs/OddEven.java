package java_programs;

import java.util.Scanner;

public class OddEven {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("Enter an integer :");
		int n = s.nextInt();
		
		if(n % 2 == 0)
		{
			System.out.println("The number is even");
		}
		else
		{
			System.out.println("The number is odd");
		}
		s.close();
	}

}
