
package array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Insert {

private static void addElement(
        Integer[] arr, int element,
        int position)
    {
        System.out.println(Arrays.toString(arr));

        List<Integer> list = new ArrayList<>(
            Arrays.asList(arr));
         
        list.add(position , element);
        arr = list.toArray(arr);
        System.out.println(Arrays.toString(arr));
    }

    public static void main(String args[]) {
        Integer[] array  = { 3, 2, 1 };
        int item = 100;
        int index = 1;
        addElement(array , item, index);
    }
}
