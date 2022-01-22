
using System;

public class Replace {
	static void Main(string[] args)
	{

    Console.WriteLine("array 1");
    int[] sourceArray = { 5, 4, 3, 2, 1};
    int[] destinationArray = { 85, 40, 13, 2, 91};
    int destinationIndex = 2;
    int sourceStart = 1;
    int count = 3;


    int arraySize = sourceArray.Length;

    int en = sourceStart + ( arraySize - (sourceStart + count));

    int[] remainingArray = new int[en];
    int[] cutArray = new int[count];

    int a = 0;
    int b = 0;
    for(int i=0;i<arraySize;i++){
        if(i >= sourceStart && i < (sourceStart+count)){
            cutArray[a] = sourceArray[i];
            a = a + 1;
        }else{
            remainingArray[b] = sourceArray[i];
            b = b + 1;
        }
    }

    Console.WriteLine("array 1");
    for(int i=0;i<a;i++){
        Console.WriteLine(cutArray[i]);
    }

    Console.WriteLine("array 2");
    for(int i=0;i<b;i++){
        Console.WriteLine(remainingArray[i]);
    }
	}

}
