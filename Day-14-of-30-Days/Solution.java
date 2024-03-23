// Day 13 of 30 Days 👾
public class Solution {
    public static double convertToKilometers(double miles) {
        return (miles * 1.60934);
    }

    public static double convertToMiles(double kilometers) {
        return Math.round(kilometers * 0.621371);
    }

    // Examples
    public static void main(String[] args) {
        System.out.println(convertToKilometers(10));
        System.out.println(convertToMiles(16.0934));
    }
}
