//MAIN
#include<iomanip>
#include<iostream>
#include "vehicle.h"
#include "car.h"

using namespace std;
void display(Car );
int main(){
	//Variable declarations
	Car c1;
	int id;
	string br,mo;
	double cst,sp;
	bool airb;
	char choice;
	bool forairbag=false;


	cout<<"**CAR INFO**"<<endl;
	cout<<"Enter Vehicle's ID: ";
	cin>>id;
	c1.setVehicleID(id);
	fflush(stdin);
	cout<<"Enter Vehicle's Brand: ";
	getline(cin,br);
	fflush(stdin);
	c1.setVehicleBrand(br);
	cout<<"Enter Vehicle's Model: ";
	getline(cin,mo);
	c1.setVehicleModel(mo);
	cout<<"Enter Vehicle's Speed: ";
	cin>>sp;
	c1.setSpeed(sp);
	cout<<"Does the vehicle have Airbag? :(Y/N) ";
	cin>>choice;
	if(choice=='Y'){
		forairbag=true;
	}
	c1.setHasAirBag(forairbag);
	cout<<"Enter Vehicle's Cost: ";
	cin>>cst;
	c1.setCost(cst);

	display(c1);

	cout<<endl<<"Do you want to raise the cost?(Y/N) ";
	cin>>choice;
	if(choice=='Y'){
		cout<<"Enter new cost: "<<endl;
		cin>>cst;
		c1.setCost(cst);
		display(c1);
	}

//	c1.run();


	return 0;
}
void display(Car c1){
		cout<<endl<<"ID= "<<c1.getVehicleID()<<endl;
		cout<<"Brand= "<<c1.getVehicleBrand()<<endl;
		cout<<"Model= "<<c1.getVehicleModel()<<endl;
		cout<<"Speed= "<<c1.getSpeed()<<endl;
		cout<<"Cost= "<<c1.getCost()<<endl;
		if(c1.getHasAirBag()==1){
			cout<<"Vehicle has airbags."<<endl;
		}else{
			cout<<"Vehicle has no airbags."<<endl;
		}

	}
