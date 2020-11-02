/*
 * namesps.h
 *
 *  Created on: 2020年11月2日
 *      Author: xiaolian
 */

#ifndef NAMESPS_H_
#define NAMESPS_H_

#include <string>
/**
 * 名称空间及其用途
 *  使用在已命名的名称空间中声明的变量,而不是使用全局外部变量
 *  使用在已命名的名称空间中声明的变量,而不是使用静态全局变量
 *  如果开发了一个函数或类库,将其放在一个名称空间中
 *  仅将编译指令using作为一种将旧代码转换为使用名称空间的权宜之计
 *  不要在头文件中使用using编译指令,这样做首先掩盖了要让哪些名称可用,另外包含头文件的
 *  顺序可能影响程序的行为.如果非要使用using编译指令,应该将其放在所有预处理编译指令#include 之后
 *  导入名称时,首先使用作用域解析运算符或using声明方法
 *  对于using声明,首先将其作用域设置为局部而不是全局
 */
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
