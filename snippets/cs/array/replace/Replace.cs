
using System;

public class Replace {
	static void Main(string[] args)
	{
		int[] array = {3, 2, 1};
		int index = 1;
		int item = 100;

		Console.WriteLine("before replacing");
		foreach (int el in array)
        {
            Console.WriteLine(el);
        }
        array[index] = item;
		Console.WriteLine("after replacing");
		foreach (int el in array)
        {
            Console.WriteLine(el);
        }
	}

}
