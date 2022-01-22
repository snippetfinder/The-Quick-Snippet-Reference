
using System;
 
public class Reverse
{
    public static void Main()
    {
        int[] array = { 1, 2, 3, 4, 5 };
        Console.WriteLine("before reversing");

        foreach(int el in array){
            Console.WriteLine(el.ToString());
        }
        Array.Reverse(array);  // ≡

        Console.WriteLine("after reversing");

        foreach(int el in array){
            Console.WriteLine(el.ToString());
        }
    }
}
 