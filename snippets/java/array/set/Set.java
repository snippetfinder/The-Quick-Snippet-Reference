package array;

import java.util.Arrays;

public class Set {

    public static void main(String args[]) {
        int[] array = new int[]{5, 4, 3, 2, 1};
        int index = 1;
        int item = 100;
        array[index] = item;  // ≡
        System.out.println(Arrays.toString(array));
    }
}
