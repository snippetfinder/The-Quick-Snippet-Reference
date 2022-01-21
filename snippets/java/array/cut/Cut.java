package array;

import java.util.Arrays;

public class Cut {

    public static void main(String args[]) {
        int array[] = new int[] { 5, 4, 3, 2, 1};
        int start = 1;
        int count = 3;
        int[] arrayCut = Arrays.copyOfRange(array,start,start+count);
        int[] array2 = Arrays.copyOfRange(array,0,start);
        int[] array3 = Arrays.copyOfRange(array,start+count,array.length);
        System.out.println(Arrays.toString(arrayCut));
        int array2Len = array2.length;
        int array3Len = array3.length;
        int[] remining_array = new int[array2Len + array3Len];
        System.arraycopy(array2, 0, remining_array, 0, array2Len);
        System.arraycopy(array3, 0, remining_array, array2Len, array3Len);

        System.out.println(Arrays.toString(remining_array));
    }
}
