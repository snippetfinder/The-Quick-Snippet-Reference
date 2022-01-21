package array;
import java.util.Arrays;  

public class Add {

    public static void main(String args[]) {
        int[] array = new int[]{3, 2};
        System.out.println(Arrays.toString(array)); 
        int n = array.length;  
        int newArray[] = new int[n+1];  
        int newValue = 7;  
        System.arraycopy(array, 0, newArray, 0, n);
        newArray[n] = newValue;  
        System.out.println(Arrays.toString(newArray)); 
    }
}



