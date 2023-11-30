#include <stdio.h>

// Define a structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time timeDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert everything to seconds and find the difference
    int totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int difference = totalSeconds1 - totalSeconds2;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = difference / 3600;
    difference %= 3600;
    diff.minutes = difference / 60;
    diff.seconds = difference % 60;

    return diff;
}

int main() {
    // Declare variables of type struct Time
    struct Time time1, time2, difference;

    // Input the first time
    printf("Enter the first time:\n");
    printf("Hours: ");
    scanf("%d", &time1.hours);
    printf("Minutes: ");
    scanf("%d", &time1.minutes);
    printf("Seconds: ");
    scanf("%d", &time1.seconds);

    // Input the second time
    printf("\nEnter the second time:\n");
    printf("Hours: ");
    scanf("%d", &time2.hours);
    printf("Minutes: ");
    scanf("%d", &time2.minutes);
    printf("Seconds: ");
    scanf("%d", &time2.seconds);

    // Calculate the difference between the two times
    difference = timeDifference(time1, time2);

    // Display the result
    printf("\nTime Difference:\n");
    printf("Hours: %d\n", difference.hours);
    printf("Minutes: %d\n", difference.minutes);
    printf("Seconds: %d\n", difference.seconds);

    return 0;
}
