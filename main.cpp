/********************************************************
 * Author		: Qian Dong
 * Email		: post2qian@gmail.com
 * Created Time	: 2014年01月12日 星期日 06时12分34秒
 * Filename		: main.cpp
 * Description	: 
 * ******************************************************/
#include <iostream>
#include "func1.c"
#include "func2.c"
#include "func3.cpp"
using namespace std;

int main(){
	int a = 10, b = 1, c = 0;
	int *pa = &a, *pb = &b;
	c = func1(a, b);
	cout << "a = " << a << ", b = " << b << ", c = " << c <<endl;
	a = 10; 
	b = 1;
	c = func2(pa, pb);
	cout << "a = " << a << ", b = " << b << ", c = " << c <<endl;
	a = 10;
	b = 1;
	c = func3(a, b);
	cout << "a = " << a << ", b = " << b << ", c = " << c <<endl;
	return 0;
}

