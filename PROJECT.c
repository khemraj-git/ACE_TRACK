#include <stdio.h>
#include <stdlib.h>
#include <math.h> // For M_PI and sqrt

#define M_PI 3.14159265358979323846
// Function to calculate the area of a circle
float area_circle(float radius) {
    return M_PI * radius * radius;
}

// Function to calculate the circumference of a circle
float circumference_circle(float radius) {
    return 2 * M_PI * radius;
}

// Function to calculate the area of a rectangle
float area_rectangle(float length, float width) {
    return length * width;
}

// Function to calculate the perimeter of a rectangle
float perimeter_rectangle(float length, float width) {
    return 2 * (length + width);
}

// Function to calculate the area of a triangle (using Heron's formula)
float area_triangle(float side1, float side2, float side3) {
    float s = (side1 + side2 + side3) / 2;
    if (s * (s - side1) * (s - side2) * (s - side3) < 0) {
        return -1.0; // Indicate invalid triangle dimensions
    }
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

// Function to calculate the perimeter of a triangle
float perimeter_triangle(float side1, float side2, float side3) {
    return side1 + side2 + side3;
}

int main() {
    int choice;

    do {
        printf("\n--- Mensuration Calculator ---\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 4.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1: {
                float radius;
                printf("Enter the radius of the circle: ");
                if (scanf("%f", &radius) == 1 && radius >= 0) {
                    printf("Area: %.2f\n", area_circle(radius));
                    printf("Circumference: %.2f\n", circumference_circle(radius));
                } else {
                    printf("Invalid radius. Please enter a non-negative number.\n");
                    while (getchar() != '\n');
                }
                break;
            }
            case 2: {
                float length, width;
                printf("Enter the length of the rectangle: ");
                if (scanf("%f", &length) == 1 && length >= 0) {
                    printf("Enter the width of the rectangle: ");
                    if (scanf("%f", &width) == 1 && width >= 0) {
                        printf("Area: %.2f\n", area_rectangle(length, width));
                        printf("Perimeter: %.2f\n", perimeter_rectangle(length, width));
                    } else {
                        printf("Invalid width. Please enter a non-negative number.\n");
                        while (getchar() != '\n');
                    }
                } else {
                    printf("Invalid length. Please enter a non-negative number.\n");
                    while (getchar() != '\n');
                }
                break;
            }
            case 3: {
                float side1, side2, side3;
                printf("Enter the length of side 1 of the triangle: ");
                if (scanf("%f", &side1) == 1 && side1 >= 0) {
                    printf("Enter the length of side 2 of the triangle: ");
                    if (scanf("%f", &side2) == 1 && side2 >= 0) {
                        printf("Enter the length of side 3 of the triangle: ");
                        if (scanf("%f", &side3) == 1 && side3 >= 0) {
                            float area = area_triangle(side1, side2, side3);
                            if (area >= 0) {
                                printf("Area: %.2f\n", area);
                                printf("Perimeter: %.2f\n", perimeter_triangle(side1, side2, side3));
                            } else {
                                printf("Invalid triangle dimensions. The sum of any two sides must be greater than the third side.\n");
                            }
                        } else {
                            printf("Invalid side 3. Please enter a non-negative number.\n");
                            while (getchar() != '\n');
                        }
                    } else {
                        printf("Invalid side 2. Please enter a non-negative number.\n");
                        while (getchar() != '\n');
                    }
                } else {
                    printf("Invalid side 1. Please enter a non-negative number.\n");
                    while (getchar() != '\n');
                }
                break;
            }
            case 4:
                printf("Exiting the calculator.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                while (getchar() != '\n'); // Clear the input buffer
        }
    } while (choice != 4);

    return 0;
}