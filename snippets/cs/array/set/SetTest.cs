
using System;

public class SetTest {
	static void Main(string[] args)
	{
		int[] array = {5, 4, 3, 2, 1};
		int index = 1;
		int item = 100;

		Console.WriteLine("before setting");
		foreach (int el in array)
        {
            Console.WriteLine(el);
        }
        array[index] = item;  // ≡
		Console.WriteLine("after setting");
		foreach (int el in array)
        {
            Console.WriteLine(el);
        }
	}

}
