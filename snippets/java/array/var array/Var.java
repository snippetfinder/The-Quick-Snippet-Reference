package array;

import java.util.Arrays;

public class Var {
    
    public static void main(String args[]) {
        // declarations of arrays
        int[] array = new int[0];
        System.out.println(Arrays.toString(array));
        int[] IntArr = { 1, 2, 3, 4, 5 };  // ≡
        System.out.println(Arrays.toString(IntArr));
        String [] StringArray = { "evans", "tom" };
        System.out.println(Arrays.toString(StringArray));
        int[][] multidimensionalArrayInt = new int[4][2]; 
        System.out.println(Arrays.toString(multidimensionalArrayInt));
        String [][] multidimensionalArrayString = new String[4][2];
        System.out.println(Arrays.toString(multidimensionalArrayString));

       // with inititialization
        String[][] salutation = { {"Mr. ", "Mrs. ", "Ms. "}, {"Evans"} };
        System.out.println(Arrays.toString(salutation));
    }
}
