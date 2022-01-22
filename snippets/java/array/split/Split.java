package array;

public class Split {

    public static void main(String args[]){
        String str = "Coding World:A Computer Science Portal";
        String[] array = str.split(":");  // ≡
 
        for (String s : array)
            System.out.println(s);
    }
}
