using System;
using System.Linq;

public class Shuffle
{
    static void Main(string[] args)
    {
        int[] array = { 1, 2, 3, 4, 5 };
        Random randNumber = new Random();
        array = array.OrderBy(x => randNumber.Next()).ToArray();  // ≡
        foreach (int el in array)
        {
            Console.WriteLine(el);
        }
    }
}
