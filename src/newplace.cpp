/*
 * newplace.cpp
 *
 *  Created on: 2020年10月30日
 *      Author: xiaolian
 */
//#include <iostream>
//#include <new>
//const int BUF = 512;
//const int N = 5;
//char buffer[BUF]; //chunk of memory
/**
 * 定位new运算符
 * delete只能用于指向常规new运算符分配的内存
 * 定位new运算符分配的内存位于delete的管辖区域之外
 */
//int main() {
//	using namespace std;
//	double *pd1, *pd2;
//	pd1 = new double[N];  // use heap
//	pd2 = new (buffer) double[N]; //use buffer array
//	for (int i = 0; i < N; i++) {
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	}
//	cout << "Memory address: heap," << pd1 << " static " << (void*) buffer
//			<< endl;
//
//	cout << "Memory contents: " << endl;
//	for (int i = 0; i < N; i++) {
//		cout << pd1[i] << " at " << &pd1[i] << endl;
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//	cout << endl << endl;
//	double *pd3, *pd4;
//	pd3 = new double[N]; 		// find new address
//	pd4 = new (buffer) double[N]; //overwrite old data
//
//	for (int i = 0; i < N; i++) {
//		pd4[i] = pd3[i] = 1000 + 40.0 * i;
//	}
//	cout << "Memory address: heap," << pd3 << " static " << (void*) buffer
//			<< endl;
//
//	cout << "Memory contents: " << endl;
//	for (int i = 0; i < N; i++) {
//		cout << pd3[i] << " at " << &pd3[i] << endl;
//		cout << pd4[i] << " at " << &pd4[i] << endl;
//	}
//	cout << endl << endl;
//
//	delete[] pd1;
//
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double)) double[N];
//	for (int i = 0; i < N; i++) {
//		pd2[i] = pd1[i] = 1000 + 60.0 * i;
//	}
//	cout << "Memory address: heap," << pd1 << " static " << (void*) buffer
//			<< endl;
//
//	cout << "Memory contents: " << endl;
//	for (int i = 0; i < N; i++) {
//		cout << pd1[i] << " at " << &pd1[i] << endl;
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//
//	delete[] pd1;
//
//	delete[] pd3;
//
//}

