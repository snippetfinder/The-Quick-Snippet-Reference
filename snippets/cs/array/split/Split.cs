
using System;
 
public class Split
{
    public static void Main()
    {
        String phrase = "Coding World:A Computer Science Portal";
        string[] words = phrase.Split(':');  // ≡

        foreach (var word in words)
        {
            System.Console.WriteLine(word);
        }
    }
}
 