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
	return (5*y*cos(5*x));
}

int main()
{
	ofstream fout,f1,f2,f3;
	fout.open("Cauchy.txt");
	f1.open("x_Cauchy.txt");
	f2.open("y_Cauchy.txt");

	double a = 0; double b = 5;
	double h = 0.01; 
	double n = (b - a) / h;

	double x = a, y = 1;

	f1 << x << endl;
	f2 << y << endl;
	for (int i = 1; i <= n ; i++)
	{
		y = y + h * f(x, y);
		x = x + h; 
		f1 << x << endl;
		f2 << y << endl;
	}
	fout.close();
	f1.close();
	f2.close();
	cout << "done";
	return 0;
}

