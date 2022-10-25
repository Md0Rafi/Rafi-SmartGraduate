package Java_Closed_Module;

public class Prog_23 {

		rafi r=new rafi();
		void manipulate (int a) {
			System.out.println("the number is "+r.num);
			System.out.println("manipulating a protected member from other class....");
			r.num=a;
			System.out.println(r.num);
		}

		public static void main(String[] args) {
			// TODO Auto-generated method stub
			Prog_23 ex1=new Prog_23();
			ex1.manipulate(5);
			System.out.println("manupulated successfully...");

		}

	}
	class rafi{
		protected int num=10;

	}
