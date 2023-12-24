#include<iostream>
#include<iomanip>
#include "Watch.h"
#include "StopWatch.h"
#include "DigitalWatch.h"

using namespace std;

int main(){
	StopWatch S1;
	DigitalWatch D1;
	double hrr,minn,secc;
	char choice;
	int am;
	cout<<"Enter the Time in 24-hr Format (HH MM SS): ";
	cin>>hrr>>minn>>secc;
	S1.setHour(hrr);
	D1.setHour(hrr);
	S1.setMin(minn);
	D1.setMin(minn);
	S1.setSec(secc);
	D1.setSec(secc);
	cout<<"Do you want to show Am/Pm after the Time?(Y/N) ";
	cin>>choice;
	if(choice=='Y'){
		am=1;
	}
	D1.showTime(am);
	S1.display();
	return 0;

}
