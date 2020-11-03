/*
 * usestock.cpp
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */

#include <iostream>
#include "stock00.h"
#include "stack.h"
#include "mytime0.h"
#include "vector.h"
int main(){

//	Stock fulffy_the_cat;
//	fulffy_the_cat.accquire("NanoSmart", 20, 12.50);
//	fulffy_the_cat.show();
//	fulffy_the_cat.buy(15,18.125);
//	fulffy_the_cat.show();
//	fulffy_the_cat.sell(400,20.00);
//	fulffy_the_cat.show();
//	fulffy_the_cat.buy(300000,4.125);
//	fulffy_the_cat.show();
//	fulffy_the_cat.sell(300000,0.125);
//	fulffy_the_cat.show();

    using std::cout;
//    cout << "Using constructors to create new objects\n";
//    Stock stock1("NanoSmart",12,20.0); //syntax 1
//    stock1.show();
//    Stock stock2 = Stock("Boffo Objects" ,2,2.0);// syntax 2
//    stock2.show();
//    cout << "Assign stock1 to stock2\n";
//    stock2 = stock1;
//    cout << "Listing stock1 and sstock2:\n";
//    stock1.show();
//    stock2.show();
//    cout << " Using a constructor to rest an object\n";
//    stock1 = Stock("Nifty foods",10,50.0);
//    stock1.show();


    // create an array of initialized objects
//    const int STKS = 4;
//    Stock stocks[STKS] = {
//    		Stock("NanoSmart",12,20.0),
//    		Stock("Boffo Objects",200,2.0),
//    		Stock("Monolithis Obelisks",130,3.25),
//    		Stock("Fleep Enterprises",60,6.5),
//    };
//    cout << "Stok holdings:\n";
//    int st;
//    for(st =0;st<STKS;st++){
//    	stocks[st].show();
//    }
//    const Stock * top = &stocks[0];
//    for(st =1;st<STKS;st++){
//    	top = &top->topval(stocks[st]);
//    }
//    cout << "\n Most valuable holding:\n";
//    top->show();

    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout << " planning time = ";
    planning.Show();
    cout << std::endl;
    cout << " coding time = ";
    coding.Show();
    cout << std::endl;
    cout << " fixing time = ";
    fixing.Show();
    cout << std::endl;
//    total = coding.Sum(fixing);
    total = coding + fixing;
    cout << " total time = ";
    total.Show();
    cout << std::endl;
    cout << " Done\n";


	return 0;
}

