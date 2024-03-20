// Day 11 of 30 Days 👾
#include <iostream>
#include <ctime>
#include <iomanip>
#include <tuple>
#include <sstream>
using namespace std;

tm parseDate(const std::string &dob) {
    tm time = {};
    istringstream ss(dob);
    ss >> get_time(&time, "%d-%m-%Y");
    return time;
}

tuple<int, int, int> calculateAge(const std::string &dob) {
    tm birthDate = parseDate(dob);
    time_t now = time(nullptr);
    tm *currentDate = localtime(&now);

    time_t birthTime = mktime(&birthDate);
    time_t currentTime = mktime(currentDate);

    int ageInSeconds = difftime(currentTime, birthTime);
    int years = ageInSeconds / (60 * 60 * 24 * 365);
    int months = (ageInSeconds % (60 * 60 * 24 * 365)) / (60 * 60 * 24 * 30);
    int days = ((ageInSeconds % (60 * 60 * 24 * 365)) % (60 * 60 * 24 * 30)) / (60 * 60 * 24);

    return {days, months, years};
}

int main() {
    // Examples
    auto age1 = calculateAge("10-06-2023"); // Output: [14, 9, 0]
    auto age2 = calculateAge("12-11-1993"); // Output: [16, 4, 30]

    cout << "[" << get<0>(age1) << ", " << get<1>(age1) << ", " << get<2>(age1) << "]" << endl;
    cout << "[" << get<0>(age2) << ", " << get<1>(age2) << ", " << get<2>(age2) << "]" << endl;

    return 0;
}
