
//Watch
using namespace std;

class Watch{
	double hr;
	double min;
	double sec;
	public:
		Watch():hr(0.0),min(0.0),sec(0.0){}
		Watch(double hhr,double mmin,double ssec):hr(hhr),min(mmin),sec(ssec){}

		double getHour(){
			return hr;
		}
		double getMin(){
			return min;
		}
		double getSec(){
			return sec;
		}
		void setMin(double min){
			this->min=min;
		}
		void setHour(double hr){
			this->hr=hr;
		}
		void setSec(double sec){
			this->sec=sec;
		}
};
