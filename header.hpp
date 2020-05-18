#include <iostream>

class Complex{
	private:
	double _real;
	double _imag;

	public:
	Complex();
	Complex(double real);
	Complex(double real, double imag);
	Complex(const Complex &comp);
	~Complex();
   	
	double getReal();
	double getImag();
	void Print()

	Complex Complex_sum(Complex a);
	Complex Complex_sub(Complex a);
	Complex Complex_multi(Complex a);
	Complex Complex_div(Complex a);
	Complex conj();
	double magnitudeComplx();
	double phaseComplex():
}; 		
