

#ifndef DATE_H
#define DATE_H

namespace timeD {

	class Date
	{
	public:
		Date(int day = 1, int month = 1, int year = 1970);
		int getDay();
		int getMonth();
		int getYear();
		void nextDay(int a);

	private:
		int _day;
		int _month;
		int _year;

		int getDayInMonth(int month);
		bool isDate();
	
	};


}


#endif //DATE_H