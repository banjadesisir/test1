//CAR
#include<iostream>
#include<iomanip>

using namespace std;
class Car:public Vehicle{
	double cost;
	double speed;
	bool hasAirBag;
	public:
		Car():cost(1),speed(1),hasAirBag(false){}
		Car(double cst, double sped, bool hasAB):cost(cst),speed(sped),hasAirBag(hasAB){}

		double getCost(){
			return cost;
		}
		double getSpeed(){
			return speed;
		}
		bool getHasAirBag(){
			return hasAirBag;
		}

		void setCost(double cost){
			this->cost=cost;
		}
		void setSpeed(double speed){
			this->speed=speed;
		}
		void setHasAirBag(bool hasAirBag){
			this->hasAirBag=hasAirBag;
		}
		double raisePrice(double newprice){
			this->cost=newprice;
		}
};
