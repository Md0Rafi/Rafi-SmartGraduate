import java.util.Scanner;

public class Multiple {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the value of A :");
		int A = scan.nextInt();
		System.out.println("Enter the value of B :");
		int B = scan.nextInt();
		
		int mul = A*B;
		System.out.println("The multiple of "+A+" "+B+" is "+mul);
	}

}
