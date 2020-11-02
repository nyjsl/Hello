/*
 * namesps.h
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */

#ifndef NAMESPS_H_
#define NAMESPS_H_

#include <string>

namespace pers{

	struct Person{
		std::string fname;
		std::string lname;
	};

	void getPserson(Person &);
	void showPerson(const Person &);
}

namespace debts{
 	 using namespace pers;
 	 struct Debt{
 		 Person name;
 		 double amount;
 	 };
 	 void getDebt(Debt &);
 	 void showDebt(const Debt &);
 	 double sumDebt(const Debt ar[],int n);
}



#endif /* NAMESPS_H_ */
