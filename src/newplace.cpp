/*
 * newplace.cpp
 *
 *  Created on: 2020年10月30日
 *      Author: xiaolian
 */
#include <iostream>
#include <new>
const int BUF = 512;
const int N = 5;
char buffer[BUF]; //chunk of memory

int main(){
	using namespace std;
	double *pd1,*pd2;
	pd1 = new double[N];  // use heap
	pd2 = new (buffer) double[N]; //use buffer array
	for(int i=0;i<N;i++){
		pd2[i] = pd1[i] = 1000+20.0*i;
	}
	cout << "Memory address: heap," << pd1 << " static " << (void*)buffer << endl;

	cout << "Memory contents: "<< endl;
	for(int i=0;i<N;i++){
		cout << pd1[i] << " at " << &pd1[i] << endl;
		cout << pd2[i] << " at " << &pd2[i] << endl;
	}

}



