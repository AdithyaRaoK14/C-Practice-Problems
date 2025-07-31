#include <stdio.h>
#include "day2.10.h"

int main() {
    printf("Cube: %.2f\n", volumeCube(3));
    printf("Cuboid: %.2f\n", volumeCuboid(3, 4, 5));
    printf("Sphere: %.2f\n", volumeSphere(3));
    printf("Cylinder: %.2f\n", volumeCylinder(3, 5));
    printf("Cone: %.2f\n", volumeCone(3, 5));
    return 0;
}