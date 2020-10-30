//============================================================================
// Name        : Hello.cpp
// Author      : weixing
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "cordia.h"

//5种变量存储方式
/**
 * 描述          持续性     		作用域		链接性			如何声明
 * 自动          自动				代码块		无				在代码块中
 * 寄存器			自动				代码块		无				代码块中 register关键字
 * 静态,无链接性	静态				代码块		无    			代码块中 static关键字
 * 静态,外部链接性 静态				文件			外部				不在任何函数内
 * 静态,内部链接性	静态				文件			内部				不在任何函数内 static关键字
 */

// 在多文件程序中,可以在一个文件(且只能在一个)中定义一个外部变量.使用该变量的其他文件必须使用关键字extern来声明它
double warming = 0.3; // warming defined
void update(double dt);
void local();
//int main() {
//	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//
////	rect rplace = {
////	        3.00,
////	        4.00
////	    };
////	polar pplace = rect_2_polar(rplace);
////	show_polar(pplace);
//
//	cout << "Global warming is " << warming << endl;
//	update(1.0);
//	cout << "Global warmingis " << warming << endl;
//	local();
//	cout << "Global warmingis " << warming << endl;
//
//
//	return 0;
//}
