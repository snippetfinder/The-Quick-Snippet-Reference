
using System;
 
public class Sort
{
    public static void Main()
    {
        int[] array = { 5, 4, 3, 2, 1 };
        Console.WriteLine("before sorting");

        foreach(int i in array) {
            Console.Write(i + " ");
        }
        Array.Sort(array);

        Console.WriteLine("after sorting");

        foreach(int el in array){
            Console.WriteLine(el.ToString());
        }
    }
}
 