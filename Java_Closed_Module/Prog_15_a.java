package Java_Closed_Module;

public class Prog_15_a {

	public static void main(String[] args) {
		int i=0;
		int num=0;
		String pn = "";
		
		for(i=1; i<=100; i++) {
			int counter = 0;
			
			for(num = i; num >= 1; num--) {
				if(i%num==0) {
					counter++;
				}
			}
			if(counter == 2) {
				pn = pn + i + " ";
			}
		}
		System.out.println("The prime numbers between 1 to 100 are :");
		System.out.println(pn);
	}
}
