/*
 * namesps.cpp
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */
#include <iostream>
#include "namesps.h"

namespace pers{

	using std::cout;
	using std::cin;

	void getPserson(Person & p){
		cout << "Enter first name: ";
		cin >> p.fname;
		cout << "Enter last name: ";
		cin >> p.lname;
	}
	void showPerson(const Person & p){
		std::cout << p.lname <<", " << p.fname;
	}
}

namespace debts{

 	 void getDebt(Debt & d){
 		getPserson(d.name);
 		std::cout << "Enter debt: ";
 		std::cin >> d.amount;
 	 }
 	 void showDebt(const Debt & d){
 		 showPerson(d.name);
 		 std::cout<< ":$" << d.amount << std::endl;
 	 }
 	 double sumDebt(const Debt ar[],int n){
 		 double total = 0;
 		 for(int i=0;i<n;i++){
 			 total+=ar[i].amount;
 		 }
 		 return total;
 	 }
}



