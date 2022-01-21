using System;
public class Empty {
   public static void Main() {
      int[] array = new int[] {3, 2};
      Console.WriteLine("Before Emptying:");
      foreach (int el in array) {
         Console.WriteLine(el);
      }

      Array.Clear(array, 0, array.Length);
      Console.WriteLine("After Emptying::");
      foreach (int el in array) {
         Console.WriteLine(el);
      }
   }
}