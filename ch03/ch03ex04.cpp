#include <iostream>

using namespace std;
int main() {
        const int HOURS_IN_DAY = 24;
        const int MINUTES_IN_HOURS = 60;
        const int SECONDS_IN_MINUTES = 60;

        long seconds_sourse;
        int seconds, minutes, days;

        cout << "Enter the number of seconds: ";
        cin >> seconds_sourse;

        days = seconds_sourse / (HOURS_IN_DAY * MINUTES_IN_HOURS * SECONDS_IN_MINUTES);
        minutes = (seconds_sourse / SECONDS_IN_MINUTES) % MINUTES_IN_HOURS;
        seconds = seconds_sourse % SECONDS_IN_MINUTES;

        cout << seconds_sourse << " seconds = " << days << " days " <<
                minutes << " minutes " <<
                seconds << " seconds";

        return 0;
}
