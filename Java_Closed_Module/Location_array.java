//PROGRAM TO FIND THE LOCATION OF AN ELEMENT IN AN ARRAY

package Java_Closed_Module;

import java.util.Arrays;
import java.util.Scanner;

public class Location_array {

	public static void main(String[] args) 
	{
		Scanner r = new Scanner(System.in);
		int i;
		boolean c = true;
		int[] a = {21,34,65,76,98,34,62,38};
		System.out.println("Enter an element to search in the array :");
		int search = r.nextInt();
		r.close();
		for(i=0;i<a.length;i++)
		{
			if(search == a[i])
			{
				System.out.println(a[i]+" is present at index "+i);
			    c = false;
				break;
			}
		}
		if(c)
		{
			System.out.println("The element is not present in the array");
		}
		System.out.println(Arrays.toString(a));
	}

}
