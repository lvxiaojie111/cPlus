

/*
author: cclplus
date:2020/10/25
if you think it is necessary to reward me,
my qq number is 641208111
*/
//#include <stdlib.h>
//#include <iostream>//��������ӿ�
#include <pch.h>
#include <matrix.h>

using namespace std;
int main()
{
	for(int i=0;i<10;i++)
	{
		cout<< i;
		printf("\n");//����
	}
	cout << "\n";//����
	cout << "���������������";
	cout << "\n";
	cout << "���������������";
	/*Matrix A = Matrix(3, 1);
	cin >> A;
	A.Show();
	Matrix b = Matrix(3,2,1.5);
	cin >> b;
	b.Show();*/
	
	Matrix C = Matrix(3, 3, 2);
	Matrix D = Matrix(3, 3, 4);
	Matrix S = Matrix::Hadamard(C, D);
	//C.Show();
	//D.Show();
	//S.Show();
	cin.clear();
	cin.sync();
	cin.get();
	/*
	Matrix A = Matrix(3, 3);
	cin >> A;
	Matrix b = Matrix(3, 1);
	cin >> b;
	Matrix x = Matrix::Solve(A, b);
	x.Show();
	*/
	
	system("pause");
}                                                                                                                                                                                                                                                                     