// Day 02 of 30 Days 👾

public class Solution {
    public static String decidingCategory(double bmi) {
        if (bmi < 18.5) {
            return "Underweight";
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            return "Healthy";
        } else if (bmi >= 25.0 && bmi <= 29.9) {
            return "Overweight";
        } else {
            return "Obesity";
        }
    }

    public static Object[] calculateBMI(double height, double weight) {
        if (height == 0 || weight == 0) {
            System.out.println("Invalid Input");
            System.exit(0);
        }
        double BMI = weight / Math.pow(height / 100, 2);
        Object[] result = { Math.round(BMI * 100) / 100.0, decidingCategory(BMI) };
        return result;
    }

    // Example 1
    public static void main(String[] args) {
        System.out.println(calculateBMI(160, 49));
    }
}