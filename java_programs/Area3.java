//PROGRAM TO FIND THE AREA OF A TRIANGLE

package java_programs;
import java.util.Scanner;

public class Area3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in); 
		 System.out.println("Enter the width of the Triangle:"); 
		 double base = scanner.nextDouble(); 
		 
		 System.out.println("Enter the height of the Triangle:"); 
		 double height = scanner.nextDouble(); 
		 
		 //Area = (width*height)/2
		double area = (base* height)/2; 
		 System.out.println("Area of Triangle is: " + area);
		 scanner.close();
	}

}
