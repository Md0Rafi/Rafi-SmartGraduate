//PROGRAM TO FIND THE GIVEN NUMBER IS A PRIME OR NOT

package Java_Closed_Module;

import java.util.Scanner;

public class Prime_No 
{

	public static void main(String[] args) 
	{
		
		boolean isPrime = true;
		Scanner s = new Scanner(System.in);
		System.out.println("Enter an integer :");
		int num = s.nextInt();
		s.close();
		int temp;
		
		for(int i = 2; i <= num/2; i++)
		{
			temp = num % i;
			if(temp == 0)
			{
				isPrime = false;
				break;
			}
		}
		if(isPrime)
		{
			System.out.println("The entered number is a prime");
		}
		else
		{
			System.out.println("The entered number is not a prime.");
		}
		

	}

}
