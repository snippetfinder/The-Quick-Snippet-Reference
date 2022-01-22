package array;

import java.util.Arrays;

public class Replace {

    public static void main(String args[]) {
        int[] array = new int[]{3, 2,1};
        int index = 1;
        int item= 100;
        System.out.println(Arrays.toString(array)); // [3, 2, 1]
        array[index] = item;  // ≡
        System.out.println(Arrays.toString(array)); // [3, 100, 1]
    }
}
