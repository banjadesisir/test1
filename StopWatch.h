
using namespace std;
class StopWatch:public Watch{
	public:
		StopWatch(){}
		void start(){
			cout<<"StopWatch Started"<<endl;
		}
		void stop(){
			cout<<"StopWatch Stopped"<<endl;
		}
		void display(){
			double h=getHour();
			double m=getMin();
			double s=getSec();

			if(s>59){
				s=s-60;
				++m;
				setSec(s);
			}
			if(m>59){
				m=m-60;
				++h;
				setMin(m);
			}
			if(h>24){
				cout<<"Hour cannot be more than 24";
			}
			cout<<h<<":"<<m<<":"<<s<<endl;
		}
		void pause(){
			cout<<"Stopwatch Paused."<<endl;
		}
		void resume(){
			cout<<"Stopwatch Resumed."<<endl;
		}
};
