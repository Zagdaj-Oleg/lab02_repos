// Lab_02.cpp
// ������ ����� ³���������
// ����������� ������ �2.
// ˳��� �������� 
// B����� 8

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	//double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	z1 = cos(x) * cos(x) * cos(x) * cos(x) + sin(y) * sin(y) + 1. / 4 * (sin(x + x) * sin(x + x)) - 1;
	//z2 = sin(x + y) * sin(y - x);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	//cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;

}
