#pragma once
#include "DynamicArray.h"

void ByVal(MyArray obj) // �������� �� ��������
{}

MyArray ReturnVal(MyArray obj) //������� �� ��������
{
	return obj;
}
void main()
{
	MyArray a(5); // constructor 1 param
	
}