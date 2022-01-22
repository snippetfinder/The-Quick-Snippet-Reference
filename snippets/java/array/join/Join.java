package array;

public class Join {

    public static void main(String args[]) {
        String[] array = new String[] { "abc", "xyz", "123" };
        String joined2 = String.join("-", array);  // ≡
        System.out.println(joined2);
    }
}
