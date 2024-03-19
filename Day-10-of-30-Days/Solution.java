// Day 10 of 30 Days 👾

import java.util.Arrays;
public class Solution {
    public static int[] commonElements(int[] num, int[] num2) {
        int[] res = new int[Math.min(num.length, num2.length)];
        int count = 0;
        for (int i = 0; i < num.length; i++) {
            for (int j = 0; j < num2.length; j++) {
                if (num[i] == num2[j]) {
                    res[count] = num[i];
                    count++;
                    break;
                }
            }
        }
        return Arrays.copyOf(res, count);
    }

    private static void printArray(int[] array) {
        System.out.print("[");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]);
            if (i < array.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }

    public static void main(String[] args) {
        // Examples
        int[] array1 = { 1, 2, 3 };
        int[] array2 = { 4, 5, 6 };
        int[] result1 = commonElements(array1, array2);
        printArray(result1); // Output: []

        int[] array3 = { 1, 2, 3, 4 };
        int[] array4 = { 3, 4, 5, 6 };
        int[] result2 = commonElements(array3, array4);
        printArray(result2); // Output: [3, 4]
    }
}
