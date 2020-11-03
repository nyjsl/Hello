/*
 * mytime0.cpp
 *
 *  Created on: 2020年11月3日
 *      Author: xiaolian
 */
#include <iostream>
#include "mytime0.h"

Time::Time(){
	hours = minutes = 0;
}

Time::Time(int h,int m){
	hours = h;
	minutes = m;
}

void Time::AddMin(int m){
	minutes += m;
	hours += minutes/60;
	minutes %= 60;
}

void Time::AddHr(int h){
	hours +=h;
}

void Time::Rest(int h,int m){
	hours = h;
	minutes = m;
}
//警告:不要返回指向局部变量或临时变量对象的引用.函数执行完毕后,局部变量和临时变量对象将消失
//引用将指向不存在的数据
Time Time::Sum(const Time & t) const{
	Time sum;
	sum.minutes = this->minutes+ t.minutes;
	sum.hours = this->hours + t.hours + sum.minutes/60;
	sum.minutes %=60;
	return sum;
}
Time Time::operator+(const Time & t) const{
	//这里面的代码跟Sum方法里面的一样即可
//	Time sum;
//	sum.minutes = this->minutes+ t.minutes;
//	sum.hours = this->hours + t.hours + sum.minutes/60;
//	sum.minutes %=60;
//	return sum;
	return Sum(t);
}

void Time::Show() const{
	std::cout << hours << " hours , " << minutes << " minutes";
}


