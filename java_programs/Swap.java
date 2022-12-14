//[ROGRAM TO SWAP TWO NUMBERS USING TEMP

package java_programs;

public class Swap {
	public static void main(String[] a) {
		 
		float first = 2.50f, second = 4.50f; 
		float temporary;
		
		System.out.println("--Before swap--"); 
		 System.out.println("First number = " + first); 
		 System.out.println("Second number = " + second); 
		 
		 // Value of first is assigned to temporary
		 temporary = first; 
		 
		 // Value of second is assigned to first
		 first = second; 
		 
		 /* Value of temporary (which contains the initial value of first) is assigned to second*/
		 second = temporary; 
		 
		 System.out.println("--After swap--"); 
		 System.out.println("First number = " + first); 
		 System.out.println("Second number = " + second);
	}

}
