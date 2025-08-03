#ifndef DAY5_2_H
#define DAY5_2_H

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex a, Complex b);
Complex subtract(Complex a, Complex b);
Complex multiply(Complex a, Complex b);

#endif
