#include "day5.2.h"

Complex add(Complex a, Complex b) {
    Complex result = { a.real + b.real, a.imag + b.imag };
    return result;
}

Complex subtract(Complex a, Complex b) {
    Complex result = { a.real - b.real, a.imag - b.imag };
    return result;
}

Complex multiply(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}
