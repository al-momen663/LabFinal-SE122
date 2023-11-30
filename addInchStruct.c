#include <stdio.h>

// Define a structure to represent distances in inch-feet format
struct Distance {
    int feet;
    float inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    // Add feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // If the sum of inches is greater than or equal to 12, convert to feet
    if (result.inches >= 12.0) {
        result.inches -= 12.0;
        result.feet++;
    }

    return result;
}

int main() {
    // Declare variables of type struct Distance
    struct Distance distance1, distance2, sum;

    // Input the first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &distance1.feet);
    printf("Inches: ");
    scanf("%f", &distance1.inches);

    // Input the second distance
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &distance2.feet);
    printf("Inches: ");
    scanf("%f", &distance2.inches);

    // Add the two distances
    sum = addDistances(distance1, distance2);

    // Display the result
    printf("\nSum of distances:\n");
    printf("Feet: %d\n", sum.feet);
    printf("Inches: %.2f\n", sum.inches);

    return 0;
}
