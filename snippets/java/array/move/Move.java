/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Other/File.java to edit this template
 */
package array;

import java.util.Arrays;

/**
 *
 * @author Evans Meja
 */
public class Move {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        int sourceArray[] = new int[] { 5, 4, 3, 2, 1};
        int destinationArray[] = new int[] { 85, 40, 13, 2, 91};
        int destinationIndex = 2;
        int sourceStart = 1;
        int count = 3;
        System.out.println(Arrays.toString(sourceArray));
        System.out.println(Arrays.toString(destinationArray));

        int[] arrayCut = Arrays.copyOfRange(sourceArray,sourceStart,sourceStart+count);
        int[] array2 = Arrays.copyOfRange(sourceArray,0,sourceStart);
        int[] array3 = Arrays.copyOfRange(sourceArray,sourceStart+count,sourceArray.length);

        System.out.println(Arrays.toString(arrayCut));
        int array2Len = array2.length;
        int array3Len = array3.length;
        int[] remining_array = new int[array2Len + array3Len];
        System.arraycopy(array2, 0, remining_array, 0, array2Len);
        System.arraycopy(array3, 0, remining_array, array2Len, array3Len);

        System.out.println(Arrays.toString(remining_array));

        int[] p1 = Arrays.copyOfRange(destinationArray,0,destinationIndex);
        int[] p2 = Arrays.copyOfRange(destinationArray,destinationIndex,destinationArray.length);


        int[] final_array = new int[destinationArray.length + arrayCut.length];

        System.arraycopy(p1, 0, final_array, 0, p1.length);
        System.arraycopy(arrayCut, 0, final_array, p1.length, arrayCut.length);
        System.arraycopy(p2, 0, final_array, (p1.length + arrayCut.length) , p2.length);

        System.out.println(Arrays.toString(final_array));



    }
}