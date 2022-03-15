#include <iostream>
#include <string.h>
#include "CString_sayan.h"

using namespace std;


#pragma warning(disable:4996)
CString::CString()
{
	m_len = 0;
	m_pbuff = new char;
	*m_pbuff = '\0';
}

CString::CString(const char* str)
{
	m_len = strlen(str);
	m_pbuff = new char[m_len + 1];
	strcpy(this->m_pbuff, str);

}


CString CString::operator+(const CString& ss)
{
	CString temp;
	delete[] temp.m_pbuff;
	temp.m_len = m_len + ss.m_len;
	temp.m_pbuff = new char[temp.m_len + 1];
	strcpy(temp.m_pbuff, m_pbuff);
	strcat(temp.m_pbuff, ss.m_pbuff);
	return temp;
}

char& CString::operator[](int index)
{
	cout << "operator[]" << endl;
	return m_pbuff[index];
}

CString& CString::operator=(const CString&c)
{

	CString temp;
	delete[] temp.m_pbuff;
	temp.m_len = c.m_len;
	strcpy(temp.m_pbuff, c.m_pbuff);
	cout << "operator= &" << endl;
	return temp;

}

CString& CString::operator=(CString&& c)
{
	this->m_len = c.m_len;
	this->m_pbuff = c.m_pbuff;
	cout << "operator= &&" << endl;
	return *this;
}
CString& CString::operator,(CString&c)
{
	this->m_len = c.m_len;
	this->m_pbuff = c.m_pbuff;
	cout << "operator= ," << endl;
	return *this;
}

CString& CString::operator+=(const char* ss)
{
	char* temp = new char[20];
	m_len += strlen(ss);
	delete[] m_pbuff;
	m_pbuff = new char[m_len + 1];
	strcpy(m_pbuff, temp);
	strcat(m_pbuff, ss);
	delete[] temp;

	return *this;
}

void CString::accept_string()
{
	cout << "Enter the string" << endl;
	cin.getline(m_pbuff, 20);

}

CString::CString(char ch, int no)
{
	m_len = no;
	m_pbuff = new char[m_len + 1];
	memset(m_pbuff, ch, no);
	m_pbuff[m_len] = '\0';
}

void CString::show_string()
{
	cout << m_len << " " << m_pbuff << endl;
}
CString::CString(const CString& s)
{
	this->m_len = s.m_len;
	this->m_pbuff = s.m_pbuff;
	strcpy(this->m_pbuff, s.m_pbuff);
	cout << "copy const" << endl;
}
CString::CString(CString&& s)
{
	m_len = s.m_len;
	m_pbuff = s.m_pbuff;
	//s.m_pbuff = nullptr;
	cout << "Move constructor called" << endl;
}
istream& operator >> (istream& in, CString& c)
{
	in >> c.m_pbuff;
}
ostream& operator << (ostream& out, CString& c)
{

}
CString::~CString()
{
	//destructor
}
