#include"class person.cpp"
#include<iostream>
using namespace std;

class staffinf :public person {
	private:
        int salary ;
        string jobtitle ;
    public:
        // *****************set*******************************
        void setSalary(int salary){
        this->salary= salary ;
        }
        void setJobtitle(string jobtitle){
        this->jobtitle= jobtitle;
        }
        //*******************get*******************************
        int getSalary(){
        return salary;
		};
		string getJobtitle(){
        return jobtitle;
        }
};
