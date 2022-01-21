package array;
import java.util.Arrays;
import java.util.Random;

public class Shuffle {

    public static void main(String args[]) {
        int[] arr = { 1, 2, 3, 4, 5 };
        Random randNumber = new Random();
        for (int i = 0; i < arr.length; i++) {
            int noToSwap = randNumber.nextInt(arr.length);
            int temp = arr[noToSwap];
            arr[noToSwap] = arr[i];
            arr[i] = temp;
        }
        System.out.println(Arrays.toString(arr));
    }
}
