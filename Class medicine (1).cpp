#include<iostream>
using namespace std;

class medicine {
	private:
		string name ;
		string effectiveMaterial;
		int takeNumber ;
		string sideEffect;
		int availableNumber ;
		bool narcotic ;
	public:
		void setName(string name)
		{this->name=name;}
		void setEffectiveMaterial(string effectiveMaterial)
		{this->effectiveMaterial=effectiveMaterial;}
		void setSideEffect(string sideEffect)
		{this->sideEffect=sideEffect;}
		void setTakeNumber(int takeNumber)
		{this->takeNumber=takeNumber;}
		void setNrcotic()
		{narcotic= true;}
		//*******************get*******************************
	    string getName(){
		return name;
		}
		string getEffectiveMaterial(){
		return effectiveMaterial;
		}
		string getSideEffect(){
		return sideEffect ;
		}
		int getTakeNumber(){
		return takeNumber;
		}
		bool getNarcotic(){
		return narcotic;
		};
};
