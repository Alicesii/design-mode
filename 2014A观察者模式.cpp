#include<iostream> 
#include(vector)
using namespace std;
class Observer{
	public:
	  virtual void update(float temp,float humidity,float cleanness)=0;
}; 
class Subject{
	public:
		virtual void registerObserver(Observer *o)=0;//注册对主题感兴趣的观察者 
		virtual void removeObserver(Observer *o)=0;//删除观察者
		virtual void notifyObserver(Observer *o)=0//当主题变化时通知观察者 
		
};
class EnvironmentData:public Subject{
	private:
		vector<Observer*>observers;
		float temperature,humidity,cleanness;
	public:
		void registerObserver(Observer *o){
		observers.push_back(0);	
		}
		void removeObserver(Observer *o){
		}
		void notifyObserver{
		for(vector<Observer*>::const_iterator it=observers.begin(); it!=observers.end();it++)
		{
		(*it)‐>update(temperature,humidity,cleanness)	
		}
}
        void measurementsChanged(){
        	notifyObservers();
		}	
		void setMeasurements(float temp,float humidity,float cleanness){
		this->temperature=temperature;
		this->humidity=humidity;
		this->cleanness=cleanness;
			measurementsChanged()
		}
};
class CurrentConditionDisplay:public Observer{
	private:
		float temperature, humidity,cleanness
	Subject* envData;
	public:
		CurrentConditionDisplay{
		this->envData=envData;
		this->envData->registerObserver(this);	
		}
	void update(float temp,float humidity,float cleanness){
		this->temperature=temperature;
		this->humidity=humidity;
		this->cleanness=cleanness;
		display();
	}
	void display(){
		
	};
	int main(){
		EnvironmentData *envData=new EnvironmentData();
	    CurrentConditionDisplay currentDisplay=new 	CurrentConditionDisplay();
	    envData->setMeasurements(80,65,30,4f);
	    return 0;
		
	}	
		
};