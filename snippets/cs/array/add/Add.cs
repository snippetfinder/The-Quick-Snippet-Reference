using System;

public class Add {         
    static void Main(string[] args)
    {
        int[] array1 = { 1, 2, 3 };
        int[] array2 = { 4, 5 };
        Array.Resize(ref array1, array1.Length + array2.Length);                      // ≡
        Array.Copy(array2, 0, array1, array1.Length - array2.Length, array2.Length);  // ≡

        foreach(int el in array1){
            Console.WriteLine(el.ToString());
        }
    }
}
