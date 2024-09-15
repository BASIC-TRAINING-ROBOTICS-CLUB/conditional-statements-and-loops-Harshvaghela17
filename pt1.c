#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define G 9.8 // Acceleration due to gravity

void calculateProjectileMotion(double velocity, double angle) {
    double angleRad = angle * PI / 180.0; // Convert angle to radians
    double timeOfFlight = (2 * velocity * sin(angleRad)) / G;
    double maxHeight = (velocity * velocity * sin(angleRad) * sin(angleRad)) / (2 * G);
    double range = (velocity * velocity * sin(2 * angleRad)) / G;

    printf("Time of Flight: %.2f seconds\n", timeOfFlight);
    printf("Maximum Height: %.2f meters\n", maxHeight);
    printf("Range: %.2f meters\n", range);
}

int main() {
    double velocity, angle;

    printf("Enter the initial velocity (m/s): ");
    scanf("%lf", &velocity);
    printf("Enter the launch angle (degrees): ");
    scanf("%lf", &angle);

    calculateProjectileMotion(velocity, angle);

    return 0;
}
