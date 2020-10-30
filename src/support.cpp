/*
 * support.cpp
 *
 *  Created on: 2020年10月30日
 *      Author: xiaolian
 */
#include <iostream>
using namespace std;
extern double warming; // use warming from another file

void update(double dt);

void local();


void update(double dt){
	warming+= dt;
	cout << "updating global waring to " << warming << endl;
}

void local(){
	double warming = 0.8;
	cout << "local warming is " << warming << endl;
	// :: 作用域运算符,放在变量名前,表示该变量使用全局版本
	cout << "but global waring is " << ::warming << endl;
}



