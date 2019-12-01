// Cauchy_problem.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <math.h>
using namespace std;

double f(double x, double y)
{
	//return (2*x*y);
	return (3 * pow(x, 2));
}
double f(double x)
{
	//return (exp(pow(x,2)));
	return (pow(x, 3) + 2);
}

int main()
{
	ofstream fout,f1,f2,f3;
	fout.open("Cauchy.txt");
	f1.open("x_Cauchy.txt");
	f2.open("y_Cauchy.txt");
	f3.open("y1_Cauchy.txt");

	//double a = 0; double b = 1;
	double a = 1; double b = 2;
	double h = 0.01; 
	double n = (b - a) / h;

	//double x = a, y = 1;
	double x = a, y = 3;

	f1 << x << endl;
	f2 << y << endl;
	f3<< f(x) << endl;
	for (int i = 1; i <= n ; i++)
	{
		y = y + h * f(x, y);
		x = x + h; // комментарий:)
		f1 << x << endl;
		f2 << y << endl;
		f3 << f(x) << endl;
	}
	fout.close();
	f1.close();
	f2.close();
	f3.close();
	cout << "done";
	return 0;
}

