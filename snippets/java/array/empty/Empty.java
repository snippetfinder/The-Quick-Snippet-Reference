package array;

public class Empty {

    public static void main(String args[]) {
        int[] array = new int[]{3, 2};
        if(array.length == 0){
          System.out.println("\n Array is empty "); 
        }else{
            System.out.println("\n Array has Items ");
        }
        // clear the array by reassigning to empty array 
        array = new int[0];  
        if(array.length == 0){
          System.out.println("\n Array is empty again "); 
        } 
    }
}
