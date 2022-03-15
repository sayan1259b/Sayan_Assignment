#pragma once
class Emp
{
	int emp_no;
	char* name;
	char* department;
public:
	Emp();
	void get_emp_details();
	void display_emp_details();
	~Emp();
};