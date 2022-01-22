
using System;

public class Join {
	
	static void Main(string[] args)
	{
		object[] array = {"abc", "xyz", "123"};
		string s1 = string.Join("-", array);  // ≡
		Console.WriteLine(s1);
	}

}
