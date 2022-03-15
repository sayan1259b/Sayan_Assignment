#include <iostream>
#include "complexsayan.h"

using namespace std;

Complex::Complex()
{
	m_real = 0;
	m_imag = 0;
	count++;
}
Complex::Complex(int real, int imag)
{
	m_real = real;
	m_imag = imag;
	count++;
}
Complex Complex::add(const Complex& c)
{
	Complex temp;
	temp.m_real = this->m_real + c.m_real;
	temp.m_imag = this->m_imag + c.m_imag;
	return temp;
}
Complex Complex::operator+(const Complex c)
{
	Complex temp;
	temp.m_real = this->m_real + c.m_real;
	temp.m_imag = this->m_imag + c.m_imag;
	return temp;
}

Complex Complex::operator-()
{
	Complex t;
	t.m_real = -m_real;
	t.m_imag = -m_imag;

	return t;

}

Complex& Complex::operator++()
{
	++m_imag;
	++m_real;
	return *this;
	// // O: insert return statement here
}

Complex Complex::operator++(int)
{
	Complex t = *this;
	this->m_real++;
	this->m_imag++;
	return t;
}

bool Complex::operator==(Complex& cc)
{
	return (m_real == cc.m_real && m_imag == cc.m_imag) ? true : false;
}


void Complex::display() const
{

	cout << m_real << " " << m_imag << endl;
}
int Complex::getreal() const
{
	return m_real;
}
int Complex::getimag() const
{
	return m_imag;
}
void Complex::setreal(int real)
{
	this->m_real = real;
}
void Complex::setimag(int imag)
{
	this->m_imag = imag;
}
void Complex::accpept()
{

	cout << "Enter the Real and Imaginary Part\n";
	cin >> m_real >> m_imag;
}