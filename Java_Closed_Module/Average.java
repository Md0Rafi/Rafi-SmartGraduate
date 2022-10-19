//PROGRAM TO FIND AVERAGE IN A SEPERATE FUNCTION

package Java_Closed_Module;

import java.util.Scanner;

public class Average 
{
	float avg(int[] arr,int n)
	{
		float a=0;
		int sum = 0;
		for(int num : arr) {
			sum += num;
		}
		a = sum/n;
		return a;
	}
	public static void main(String[] args) 
	{
		Scanner r = new Scanner(System.in);
		System.out.println("Enter the no. of terms :");
		int n = r.nextInt();
		int[] arr = new int[n];
		System.out.println("Enter the elements :");
		for(int i=0;i<arr.length;i++)
		{
			arr[i] = r.nextInt();
		}
		r.close();
		Average obj = new Average();
		System.out.println("The average of the entered numbers is "+obj.avg(arr, n));
	}

}
