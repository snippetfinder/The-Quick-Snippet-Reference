
package array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Insert {

private static void addElement(
        Integer[] arr, int element,
        int position)
    {
        // Printing the original array # [3, 2, 1]
        System.out.println(Arrays.toString(arr));

        // Converting array to ArrayList
        List<Integer> list = new ArrayList<>(
            Arrays.asList(arr));
         
        // Adding the element at position
        list.add(position , element);
         
        // Converting the list back to array
        arr = list.toArray(arr);
 
        
 
        // Printing the updated array # [3, 2, 1]
        System.out.println(Arrays.toString(arr));
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // Sample array
        Integer[] array  = { 3, 2, 1 };
        // Element to be inserted
        int item = 100;
        // Index Position to insert
        int index = 1;
     
        // Calling the function to insert
        addElement(array , item, index);
    }
}
