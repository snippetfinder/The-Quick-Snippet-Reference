
package array;
import java.util.Set;
import java.util.List;
import java.util.Arrays;
import java.util.HashSet;
import java.util.TreeSet;

class Unique {
    public static void main(String[] args){
        // method 1 with has set
        List<Integer> aList = Arrays.asList(1,23,5,2,2,2,4,5);
        Set<Integer> hashSet = new HashSet<>(aList);
        for (int h : hashSet)
            System.out.println(h);

        // method 2 with tree set
        Set<Integer> treeSet = new TreeSet<>(aList);
        System.out.println("Created TreeSet is");
        for (int t : treeSet)
            System.out.println(t);
    }
}
