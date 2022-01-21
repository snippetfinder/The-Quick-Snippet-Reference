package array;
import java.util.Arrays;

public class Sort {

    public static void main(String args[]) {
        int [] array = {5, 4, 3, 2, 1};
        Arrays.sort(array);
        for (int i = 0; i < array.length; i++) {
            System.out.println(array[i]);
         }
        // array (0 => 1, 1 => 2, 2 => 3, 3 => 4, 4 => 5, )
    }
}