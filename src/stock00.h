/*
 * stock00.h
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */

#ifndef STOCK00_H_
#define STOCK00_H_
#include <string>
class Stock{
private :
	std::string company;
	long shares;
	double share_val;
	double total_val;
	//定义位于类声明中的函数都将自动成为内联函数
	void set_tot(){ total_val = shares*share_val;}
public:
	//two constructors
	Stock(); //default constructor
	Stock(const std::string & co,long n=0,double pr = 0.0);
	~Stock(); // noisy destructor
	void accquire(const std::string & co,long n,double pr);
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	void show() const; // promise not to change the invoking object
	const Stock & topval(const Stock & s) const;
}; // note semicolon at the end



#endif /* STOCK00_H_ */
