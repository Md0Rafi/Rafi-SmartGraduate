package java_programs;

import java.util.Scanner;

public class Pyramid_pattern {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("Enter no of rows :");
		int n = s.nextInt();
		int i,j;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				System.out.println("* ");
			}
			System.out.println();
		}
	}

}
