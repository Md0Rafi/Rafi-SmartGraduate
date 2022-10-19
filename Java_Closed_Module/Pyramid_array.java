//PROGRAM TO DISPLAY VALUES IN HALF PYRAMID STRUCTURE

package Java_Closed_Module;

public class Pyramid_array {

	public static void main(String[] args) 
	{
		int i,j;
		int[][] a = {{1},{2,3},{4,5,6},{7,8,9,10}};
		
		for(i=0;i<a.length;i++)
		{
			for(j=0;j<a[i].length;j++)
			{
				System.out.printf("%4d",a[i][j]);
			}
			System.out.println();
		}
	}

}
