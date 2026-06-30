int timeToMinutes(int hours, int minutes) {
    return hours * 60 + minutes;
}

double minutesToDecimalHours(int totalMinutes) {
    return totalMinutes / 60.0;
}

void minutesToHoursAndMinutes(int totalMinutes, int &hoursOut, int &minutesOut) {
    hoursOut = totalMinutes / 60;
    minutesOut = totalMinutes % 60;
}

int calculateIntervalMinutes(int hour1, int min1, int hour2, int min2) {
    int t1 = timeToMinutes(hour1, min1);
    int t2 = timeToMinutes(hour2, min2);
    return (t2 >= t1) ? (t2 - t1) : (t1 - t2);
}
