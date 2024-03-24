// Day 15 of 30 Days 👾
public class Solution {
    public static String generateHexCode(int red, int green, int blue) {
        String hexRed = toHexString(red);
        String hexGreen = toHexString(green);
        String hexBlue = toHexString(blue);

        return "#" + hexRed + hexGreen + hexBlue;
    }

    // Helper function
    private static String toHexString(int value) {
        String hex = Integer.toHexString(value).toUpperCase();
        return hex.length() == 1 ? "0" + hex : hex;
    }

    // examples
    public static void main(String[] args) {
        System.out.println(generateHexCode(0, 0, 225)); // #0000E1
        System.out.println(generateHexCode(255, 255, 255)); // #FFFFFF
    }
}