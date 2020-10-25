/*
author: cclplus
date:2020/10/25
if you think it is necessary to reward me,
my qq number is 641208111
*/

#ifndef __MATRIX_CLL_H__
#define __MATRIX_CCL_H__
#include "pch.h"

class Matrix {
private:
	int rows_num, cols_num;
	double **p;
	void initialize();//��ʼ������

public:
	Matrix(int, int);
	Matrix(int, int, double);//Ԥ��ֿռ�
	virtual ~Matrix();//��������Ӧ�����麯�������Ǵ��಻��������
	Matrix& operator=(const Matrix&);//����ĸ���
	Matrix& operator=(double *);//�������ֵ��������
	Matrix& operator+=(const Matrix&);//�����+=����
	Matrix& operator-=(const Matrix&);//-=
	Matrix& operator*=(const Matrix&);//*=
	Matrix operator*(const Matrix & m)const;
	static Matrix Hadamard(const Matrix & m, const Matrix & n);
	static Matrix Solve(const Matrix&, const Matrix&);//������Է�����Ax=b
	void Show() const;//������ʾ
	void swapRows(int, int);
	double det();//����������ʽ
	double Point(int i, int j) const;
	static Matrix inv(Matrix);//�����������
	static Matrix eye(int);//����һ����λ����
	int row() const;
	int col() const;
	static Matrix T(const Matrix & m);//����ת�õ�ʵ��,�Ҳ��ı����
	Matrix gaussianEliminate();//��˹��Ԫ��
	friend std::istream& operator>>(std::istream&, Matrix&);//ʵ�־��������
};


#endif
