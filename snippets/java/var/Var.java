package var;

import java.util.Dictionary;
import java.util.Enumeration;
import java.util.Hashtable;

public class Var {
    
    public static void main(String args[]) {
        // declarations of arrays
        int number = 10;
        double decimal = 2.3;
        String string = "Hello there.";  // ≡
        System.out.println(string); // Hello there.
        string = "Goodbye!";
        System.out.println(string); // Goodbye

        Dictionary<String, Double> dict = new Hashtable<String, Double>();
        dict.put("number", 2.3);
        dict.put("heigh", 50.3);


        Enumeration enu = dict.elements();
  
        System.out.println("The enumeration of values are:");
  
        // values
        while (enu.hasMoreElements()) {
            System.out.println(enu.nextElement());
        }
        
    }
}