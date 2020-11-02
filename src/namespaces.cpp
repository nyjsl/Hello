/*
 * namespaces.cpp
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */
#include <iostream>
#include "namesps.h"

void other(void);
void another(void);

//int main(void){
//	using debts::Debt;
//	using debts::showDebt;
//	Debt golf = {
//			{
//					"Benny",
//					"Gotashif"
//			},
//			120.0
//	};
//	showDebt(golf);
//	other();
//	another();
//	return 0;
//}

void other(void){
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = {"Doodles","Glister"};
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for(i=0;i<3;i++){
		getDebt(zippy[i]);
	}
	for(i=0;i<3;i++){
		showDebt(zippy[i]);
	}
	cout << " Total debt: $ "<< sumDebt(zippy, 3) << endl;
}

void another(void){
	using pers:: Person;
	Person collector = {"Milo","Rightshift"};
	pers::showPerson(collector);
	std::cout << std::endl;
}



