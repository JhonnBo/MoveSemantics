#pragma once
#include "DynamicArray.h"

void ByVal(MyArray obj) // передача по значению
{}

MyArray ReturnVal(MyArray obj) //возврат по значению
{
	return obj;
}
void main()
{
	MyArray a(5); // constructor 1 param
	
}