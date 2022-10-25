package Java_Closed_Module;

class base{
	String method() {
		return "WOW";
	}
}
class derived{
	public void used() {
		base z=new base();
		System.out.println("base says, "+z.method());
	}
}
public class Prog_25 {
	public static void main(String[] args) {
		derived d=new derived();
		d.used();
	}

}
