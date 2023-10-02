#include <stdio.h>

// Function to calculate BMI
float calculate_bmi(float weight, float height_cm) {
    float height_m = height_cm / 100.0;
    float bmi = weight / (height_m * height_m);
    return bmi;
}

int main() {
    float weight, height_cm, bmi;

    // Input weight in kilograms
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // Input height in centimeters
    printf("Enter your height in centimeters: ");
    scanf("%f", &height_cm);

    // Calculate BMI
    bmi = calculate_bmi(weight, height_cm);

    // Print the result
    printf("Your BMI is: %.2f\n", bmi);

    // Interpret the BMI result
    if (bmi < 18.5) {
        printf("You are underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("Your weight is normal.\n");
    } else if (bmi >= 24.9 && bmi < 29.9) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}
