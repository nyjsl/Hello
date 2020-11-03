/*
 * mytime0.h
 *
 *  Created on: 2020年11月3日
 *      Author: xiaolian
 */

#ifndef MYTIME0_H_
#define MYTIME0_H_
//计算时间,一个运算符重载示例

//重载限制
/**
 * 1.重载后的运算符必须至少有一个操作数是用户定义的类型,这样防止用户为标准类型重载运算符
 * 2.使用运算符时不能违反运算符原来的句法规则,例如不能将求模运算符重载成使用一个操作数
 * 3.不能创建新运算符
 * 4.不能重载下面的运算符
 * 	 sizeof
 * 	 .   成员运算符
 * 	 .*  成员指针运算符
 * 	 ::  作用域解析运算符
 * 	 ?
 * 	 typeid
 * 	 const_cast
 * 	 dynamic_cast
 * 	 static_cast
 * 	 reinterpret_cast
 *
 */
class Time{
private:
	int hours;
	int minutes;
public:
	Time();
	Time(int h,int m=0);
	void AddMin(int m);
	void AddHr(int h);
	void Rest(int h =0,int m =0);
	Time Sum(const Time & t) const;
	//运算符重载
	Time operator+(const Time& t) const;
	void Show() const;

	//友元函数
	/**
	 * friend表示 operator*()函数是在类中声明的,但它不是成员函数,因此不能使用成员运算符来调用
	 * 虽然operator*()函数不是成员你函数,但它与成员函数的访问权限相同
	 */
	friend Time operator*(double m,const Time & t);

};




#endif /* MYTIME0_H_ */
