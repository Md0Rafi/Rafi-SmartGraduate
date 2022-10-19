//PROGRAM TO SORT AN ARRAY IN ASCENDING AND DESCENDING ORDER

package Java_Closed_Module;

import java.util.Arrays;

public class Sort_array 
{
	 public static void main(String[] args) 
	 {
		 int i,j,temp=0;
		 int[] arr = {4,9,6,1,8,3,7};
		 System.out.println("Before sorting :"+Arrays.toString(arr));
		 
		 //ASCENDING
		 for(i=0;i<arr.length;i++) 
		 {
			 for(j=0;j<arr.length;j++)
			 {
				 if(arr[i] < arr[j]) 
				 {
					 temp = arr[i];
					 arr[i] = arr[j];
					 arr[j] = temp;
				 }
			 }
		 }
		 System.out.println("Array after sorted in ascending order :"+Arrays.toString(arr));
		
		 //DESCENDING
		 for(i=0;i<arr.length;i++)
		 {
			 for(j=0;j<arr.length;j++)
			 {
				 if(arr[i] > arr[j])
				 {
					 temp = arr[i];
					 arr[i] = arr[j];
					 arr[j] = temp;
				 }
			 }
		 }
		 System.out.println("Array after sorted in descending order :"+Arrays.toString(arr));
	 }
}
