// Day 11 of 30 Days 👾

import java.time.*;
import java.util.*;
public class Solution {
    public static int[] calculateAge(String dob) {

        LocalDate birthDate = LocalDate.parse(dob, java.time.format.DateTimeFormatter.ofPattern("dd-MM-yyy"));
        LocalDate currentDate = LocalDate.now();

        Period period = Period.between(birthDate, currentDate);

        int days = period.getDays();
        int months = period.getMonths();
        int years = period.getYears();

        return new int[] { days, months, years };
    }

    public static void main(String[] args) {
        System.out.println(Arrays.toString(calculateAge("10-06-2023"))); // Output Format : [10, 9, 0]
        System.out.println(Arrays.toString(calculateAge("12-11-1993"))); // Output Format: [8, 4, 30]
    }
}
