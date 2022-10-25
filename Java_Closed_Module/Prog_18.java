package Java_Closed_Module;

import java.util.Scanner;

public class Prog_18 {

	public static void main(String[] args) {
		int i,num,temp=0;
		
		Scanner r = new Scanner(System.in);
		System.out.println("Enter the number :");
		int n = r.nextInt();
		r.close();
		
		while(n>0) {
			temp += n%10;
			temp *= 10;
			n /= 10;
		}
		System.out.println("The number in words :");
		while(temp > 0) {
			n = temp % 10;
			switch(n) {
				case 0:
					System.out.print(" ");
				    break;
	
				case 1:
					System.out.print(" ONE ");
					break;
				case 2:
					System.out.print(" TWO ");
					break;
				case 3:
					System.out.print(" THREE ");
					break;	
				case 4:
					System.out.print(" FOUR ");
					break;	
				case 5:
					System.out.print(" FIVE ");
					break;	
				case 6:
					System.out.print(" SIX ");
					break;
				case 7:
					System.out.print(" SEVEN ");
					break;	
				case 8:
					System.out.print(" EIGHT ");
					break;
				case 9:
					System.out.print(" NINE ");
					break;	
				default:
					System.out.println("invalid");
			}
			temp /= 10;
		}
	}

}
