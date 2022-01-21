package array;

import java.util.Arrays;

public class Merge {

    public static void main(String args[]) {
        int[] array1 = {3, 2, 1};
        int[] array2 = {100, 200, 300};

        int array1Len = array1.length;
        int array2Len = array2.length;

        int[] res = new int[array1Len + array2Len];

        System.arraycopy(array1, 0, res, 0, array1Len);
        System.arraycopy(array2, 0, res, array1Len, array2Len);

        System.out.println(Arrays.toString(res));
    }
}
