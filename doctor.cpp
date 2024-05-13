#include"class person.cpp"
#include<iostream>
using namespace std;

class doctor:public person {
	private:
        int salary ;
    public:
        // *****************set*******************************
        void setSalary(int salary){
        this->salary= salary ;
        }
        //*******************get*******************************
        int getSalary(){
        return salary;
		};
};
