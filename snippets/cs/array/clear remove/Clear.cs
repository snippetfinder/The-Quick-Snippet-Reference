using System;
public class Clear {

	public static void Main()
    {
		int[] myArr = {5, 4, 3, 2, 1};
		Console.WriteLine("Before Clearing Array");
		PrintArrayItems(myArr);
		Console.WriteLine();
		Array.Clear(myArr, 0, myArr.Length);  // ≡
		Console.WriteLine("After Clearing Array");
		PrintArrayItems(myArr);
	}

	public static void PrintArrayItems(int[] myArr){
		for (int i = 0; i < myArr.Length; i++) 
        {
			Console.WriteLine("{0}", myArr[i]);
		}
	}
}
