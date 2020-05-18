#include <iostream>
#include "header.hpp"

Complex::Complex() {
	_real = 1;
	_imag = 1;
}

Complex::Complex(double real) {
	_real = real;
	_imag = 0;
}

Complex::Complex(double real, double imag) {
	_real = real;
 	_image = imag;
}

Complex::Complex(const Complex &comp) {
	_real = comp._real;
	_imag = comp._imag;
}

Complex::~Complex() {
	;
}

double Complex::getReal() {
	return _real;
}

double Complex::getImag() {
	return _imag;
}

Complex ::Complex_sum(Complex a){
	Complex temp;
	temp._real = _real1 + _real2;
	temp._imag = _imag1 + _imag2;
	return temp;	
}
Complex :: Complex_sub(Complex a){
	Complex temp;
	temp._real = _real2- _real1;
	temp._imag = _imag2 - _imag1;
	return temp;
}
Complex :: Complex_multi(Complex a){
	Complex temp;
	temp._real = _real1 * _real2;
	temp._imag = _imag2 * _imag1;
	return temp;
}
Complex :: Complex_div(Complex a){
	Complex temp;
	temp._real= _real2 /_real1;
        temp._imag= _imag2/_imag1;
	return temp;
}	
Complex Complex::conj() {
	Complex temp;
	temp._real = _real;
	temp._imag = -1 * _imag;
	return temp;
}
double Complex ::magnitudeComplex(){

	double magnitude = sqrt((_real * _real) + (_imag * _imag));
	return magnitude;
}
double Complex ::phaseComplex(){

	float angle = atan(_imag/_real);
	      angle = (_real < 0.0f) ? angle+PI : angle;
	      angle = (_real < 0.0f & _imag < 0.0f) ? angle-TAU : angle;
              return angle; 
}


