using System;
using System.Collections.Generic;
public class Unique {

	public static void Main()
    {
		 int []array = {1,23,5,2,2,2,4,5};

         int n = array.Length;

        for (int i = 0; i < n; i++)
        { 
            // is it aready picked?
            int j;
            for (j = 0; j < i; j++)
                if (array[i] == array[j])
                    // no need to continue
                     break;
            // If not then print it
            if (i == j)
            Console.Write(array[i] + " ");
        }


	}

}
