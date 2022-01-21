package array;
import java.util.stream.IntStream;

public class Search {

    public static void main(String args[]) {
        int[] array = {5, 4, 3, 2, 1};
        int item = 4;
        int index = IntStream.range(0, array.length).
                filter(i -> item == array[i]).
                findFirst().orElse(-1);
        System.out.println(index);
    }
}