//PROGRAM TO REVERSE AN ARRAY

package Java_Closed_Module;

import java.util.Arrays;

public class Reverse_array {

	public static void main(String[] args) 
	{
		int i;
		int[] a = {2,6,9,3,1,8,4};
		System.out.println("The array is : "+Arrays.toString(a));
		System.out.print("The reversed array is :");
		for(i=a.length-1;i>=0;i--)
		{
			System.out.print(a[i]+",");
		}
	}

}
