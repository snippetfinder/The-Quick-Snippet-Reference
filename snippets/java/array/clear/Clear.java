package array;

import java.util.Arrays;

public class Clear {

    public static void main(String args[]) {
       int[] array = new int[]{5, 4, 3, 2, 1};
        System.out.println(Arrays.toString(array)); 
        // Setting  value to empty array
        for (int i = 0; i < array.length; i++) {
            array[i] = 0;
        }
        System.out.println(Arrays.toString(array));
    }
}
