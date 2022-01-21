
using System;
 
public class Search
{
    public static void Main()
    {
        int[] array = { 5, 4, 3, 2, 1 };
        int item = 4;
        int index = Array.IndexOf(array, item);
        Console.WriteLine(index);
    }
}
 