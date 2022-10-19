//PROGRAM TO CHECK IMPLICIT AND EXPLICIT TYPE CASTING

package Java_Closed_Module;

public class Init_Cast {

	public static void main(String[] args) {
		
		byte b;  	// 8 BIT : -128 TO 127
		short s; 	//16 BIT : -32,768 TO 32,767
		int i;   	//32 BIT : -2,147,483,648 TO 2,147,483,647
		long l;  	//64 BIT : -9,223,372,036,854,775,808 TO +9,223,372,036,854,775,807
		float f; 	//32 BIT : 3.4e-308 to 3.4e+038
		double d;	//64 BIT : 1.7e-308 to 1.7e+308
		char c;  	//RANGE  : 65,535
		
		//IMPLICIT TYPE CASTING
		s = 127;
		i = s;
		System.out.println(i);
		
		//EXPLICIT TYPE CASTING
		d = 34.5d;
		f = (float) d;
		System.out.println(f);
	}

}
