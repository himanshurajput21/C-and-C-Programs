#include<iostream>
using namespace std;
class time {
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		void enter();
		void add_time(time, time);
};

void time::enter() {
	cout<<"Enter the time:"<<endl;
	cout<<"Hours:";
	cin>>hours;
	cout<<"Minutes:";
	cin>>minutes;
	cout<<"Seconds:";
	cin>>seconds;
}

void time::add_time(time t1, time t2) {
	int hr, min, sec;
	sec=t1.seconds+t2.seconds;
	min=t1.minutes+t2.minutes+sec/60;
	sec%=60;
	hr=t1.hours+t2.hours+min/60;
	min%=60;
	cout<<"\nResultant time in \"hh mm ss\" format is:\n";
	cout<<"\nHours:"<<hr;
	cout<<"\nMinutes:"<<min;
	cout<<"\nSeconds:"<<sec;
}

int main() {
	time ob1,ob2,ob;
	ob1.enter();
	ob2.enter();
	ob.add_time(ob1,ob2);
	return 0;
}
