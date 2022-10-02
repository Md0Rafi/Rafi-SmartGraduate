package java_programs;

import java.util.Scanner;

public class Vowel {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		System.out.println("Enter an alphabet :");
		char c = s.next().charAt(0);
		if ((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
		{
			System.out.printf("%c is a vowel",c);
		}
		else
		{
			System.out.printf("%c is a consonant",c);
		}
		s.close();
	}

}
