#include <iostream>
#include "Date.h"


int main(){
	timeD::Date anniv = timeD::Date(13,9,2002);
	anniv.nextDay(61);
	std::cout << anniv.getDay() << "/" << anniv.getMonth() << std::endl;


	return 0;
}