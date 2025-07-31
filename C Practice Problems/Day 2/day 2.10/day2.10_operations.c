#include <stdio.h>
#define PI 3.14159
#include "day2.10.h"

float volumeCube(float side) { return side * side * side; }
float volumeCuboid(float l, float b, float h) { return l * b * h; }
float volumeSphere(float r) { return (4.0/3.0) * PI * r * r * r; }
float volumeCylinder(float r, float h) { return PI * r * r * h; }
float volumeCone(float r, float h) { return (1.0/3.0) * PI * r * r * h; }