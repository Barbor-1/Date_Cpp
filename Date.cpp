#include "Date.h"
#include <iostream>


namespace timeD {
	Date::Date(int day,int month, int year) : _day(day), _month(month), _year(year){

	}

	int Date::getDay(){
		return _day;
	}

	int Date::getMonth(){
		return _month;
	}

	int Date::getYear(){
		return _year;
	}

	void Date::nextDay(int a){
		do{ //Si a est grand (exemple a = 64)
			if ((_day + a) > getDayInMonth(_month)){
				a = (_day + a) - getDayInMonth(_month);
				if (_month == 12){
					_month = 1;
					_year ++;
				}else{
					_month ++;
				}
				_day = 0;
			}else{
				_day += a;
				a = 0;
			}
		}while(a > 0);
	}

	int Date::getDayInMonth(int month){
		if (month == 2){
			return (_year%4)?28:29; //Cas année bisextile
		}
		if((month == 1 || month == 3 || month == 5 || month == 7
        || month == 8 || month == 10 || month == 12)){
			return 31;
		}
		return 30;
		
	}

	bool Date::isDate(){
		//temp
		return true;
	}

}