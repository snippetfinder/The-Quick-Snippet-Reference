package array;

import java.util.Arrays;

public class Reverse {

    public static void main(String args[]) {
        int array[] = {1,2,3,4,5};
        for (int i = 0; i < array.length/2; i++) {
            int tmp = array[i];
            array[i] = array[array.length-(1+i)];
            array[array.length-(1+i)] = tmp;
        }
        System.out.println(Arrays.toString(array));

    }
}
