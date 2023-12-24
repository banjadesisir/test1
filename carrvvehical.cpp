
using namespace std;
class Vehicle{
private:
    int vehicleID;
    string brand;
    string model;
public:
    Vehicle();
    Vehicle(int vehicleID,string brand,string model);
    void seVehicleID(int vehicleID);
    void setBrand(string brand);
    void setModel(string model);
    int getVehicleID();
    string getBrand();
    string getModel();

    void run(int vehicleID,string brand,string model);
    void stop(int vehicleID,string brand,string model);




};

int main(){
Vehicle v;
int vehicleiD;
string brand,model;
cout<<"enter vehicle id"<<endl<<vehicleID;
cin>>vehicleID;
v.setVehicleID(vehicleID);
cout<<"enter the brand"<<brand<<endl;
cin>>brand;
v.setBrand(string brand);
cout<<"enter the model"<<model<<endl;
cin>>brand;
v.setModel(string model);


}
