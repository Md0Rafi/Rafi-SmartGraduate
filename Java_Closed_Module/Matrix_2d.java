//PROGRAM TO DISPLAY A MULTI DIMENSIONAL MATRIX

package Java_Closed_Module;

public class Matrix_2d {

	public static void main(String[] args) 
	{
		int[][] a = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		int i,j;
		for(i=0;i<a.length;i++)
		{
			for(j=0;j<a.length;j++)
			{
				System.out.printf("%4d ",a[i][j]);
			}
			System.out.println();
		}
	}

}
