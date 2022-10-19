//PROGRAM TO RESIZE AN ARRAY IN JAVA

package Java_Closed_Module;

import java.util.ArrayList;

import java.util.Arrays;

public class Resize_arr {

	public static void main(String[] args) 
	{
		String[] arr = {"A","B","C","D","E"};
		System.out.println("The array elements are");
		System.out.println(Arrays.toString(arr));
		
		//METHOD 1
		String[] resize_arr = Arrays.copyOf(arr, 10); //EXTENDS ARRAY ARR TO 10
		resize_arr[5] = "F";
		System.out.println("Extended array by method 1:");
		System.out.println(Arrays.toString(resize_arr));
		
		//METHOD 2
		ArrayList<String> array = new ArrayList<>(Arrays.asList(arr));
		array.add("F"); //ADDS "F" TO THE ARRAY ARR
		System.out.println("Extended array by method 2:");
		System.out.println(array);
	}

}
