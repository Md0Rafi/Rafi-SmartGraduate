//PROGRAM TO ILLUSTRATE THE WORKING OF SWITCH CASE

package java_programs;

public class Switchcasedemo {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		int tech = 2; 
		 
		 switch(tech)
		 { 
			 case 1: 
			 { 
				 System.out.println("java"); 
				 break; 
			 } 
			 case 2:
			 { 
				 System.out.println("ES6"); 
				 break; 
			 } 
			 default:
			 { 
				 System.out.println("Not Listed..");
			 }
		}
	}
}
