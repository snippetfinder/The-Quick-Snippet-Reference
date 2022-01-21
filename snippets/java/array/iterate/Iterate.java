package array;

public class Iterate {

    public static void main(String args[]) {
       // iterating array, method 1
       int ar[] = { 5, 4, 3, 2, 1 };
       for(int i = 0; i<ar.length;i++){
          System.out.print(i + " :  "+ar[i]+", ");
       }
       System.out.println();

        int x;
        // iterating over an array
        for (int i : ar) {
            // accessing each element of array
            x = i;
            System.out.print(x + " ");
        }

    }
}
