//VEHICLE
#include<iomanip>
#include<iostream>
using namespace std;

class Vehicle{
	int vehicleID;
	string brand;
	string model;
public:
	Vehicle():vehicleID(0),brand("."),model("."){}
	Vehicle(int vID,string brnd,string modl):vehicleID(vID),brand(brnd),model(modl){}

	int getVehicleID(){
		return vehicleID;
	}
	string getVehicleBrand(){
		return brand;
	}
	string getVehicleModel(){
		return model;
	}

	void setVehicleID(int vehicleID){
		this->vehicleID=vehicleID;
	}
	void setVehicleBrand(string brand){
		this->brand=brand;
	}
	void setVehicleModel(string model){
		this->model=model;
	}
	void run(){
		cout<<"Started running."<<endl;
	}
	void stop(){
		cout<<"Stopped."<<endl;
	}

};
