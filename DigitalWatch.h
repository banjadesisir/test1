//DigitalWatch
class DigitalWatch:public Watch{
	public:
		DigitalWatch(){}

		void showTime(int am){
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

			if(am=1){
				if((getHour()>12)||(getHour()>12&&getMin()>0)||(getHour()>12 &&getSec()>0)){
				cout<<h-12<<":"<<m<<":"<<s<<"pm"<<endl;
				}else{
				cout<<h<<":"<<m<<":"<<s<<"am"<<endl;
				}

			}else{
				cout<<h<<":"<<m<<":"<<s<<endl;
			}
		}
};
