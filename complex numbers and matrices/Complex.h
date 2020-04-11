#ifndef COMPLEX_H
#define COMPLEX_H


class Complex {
	double real;
	double imaginary;
public:
	Complex();
	Complex(double,double);

	void setReal(double r);
	double getReal()const;

	void setImaginary(double i);
	double getImaginary() const;

	bool operator!()const;

	~Complex();

};

#endif
