/*
 * stock00.cpp
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */
#include <iostream>
#include "stock00.h"

Stock::Stock(){
	std::cout << "Default constructor called \n";
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}
Stock::Stock(const std::string& co,long n,double pr){
	std::cout << " Constructor using " << co << "called\n";
	company = co;
	if(n<0){
		std::cout << " Number of shares can't be negative:" << company <<  " shares set to 0 \n";
		shares = 0;
	}else{
		shares = n;
	}
	share_val = pr;
	set_tot();
}
Stock::~Stock(){
	std::cout << "Buy, " << company << "!\n";
}

void Stock::accquire(const std::string & co,long n,double pr){
	company = co;
	if(n<0){
		std::cout<< "Number of shares can't be negative;"
				<< company << " shares set to 0.\n";
		shares = 0;
	}else{
		shares = n;
	}
	share_val = pr;
	set_tot();
}
void Stock::buy(long num,double price){
	if(num<0){
		std::cout << "Number of shares purchased can't be negative Transaction is aborted. \n";
	}else{
		shares+=num;
		share_val = price;
		set_tot();
	}
}
void Stock::sell(long num,double price){
	using std::cout;
	if(num<0){
		cout << "Number of shares sold can't be negative. Transaction is aborted.\n";
	}else if(num>shares){
		cout << "You can't sell more than you have. Transaction is aborted.\n";
	}else{
		shares -=num;
		share_val = price;
		set_tot();
	}

}
void Stock::update(double price){
	share_val = price;
	set_tot();
}
void Stock::show() const{
	std::cout << "Company: "<< company
			<< "Shares :" << shares << "\n"
			<<" Share price: $ "<< share_val
			<< " Total Worth: $"<< total_val << "\n";

}
// this 指针, 指向调用对象
const Stock & Stock:: topval(const Stock & s) const{
	if(s.total_val>this->total_val){
		return s;     // arguments object
	}else{
		return *this; // invoking object
	}
}




