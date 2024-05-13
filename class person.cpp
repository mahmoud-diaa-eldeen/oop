#include<iostream>
using namespace std;

class person {
    private:
        int id;
        string name;
        string address ;
        string dateofBirth;
        string phoneNumber;
        string maritalststus ;
        string gender ;
    public:
        //Set
        void setId(int id){
        this->id= id ;
        }
        void setName(string name){
        this->name= name ;
        }
        void setAddress(string address){
        this->address= address;
        }
        void setDateofBirth(string phoneNumber){
        this->dateofBirth= dateofBirth ;
        }
        void setPhoneNumber(string phoneNumber){
        this->phoneNumber= phoneNumber ;
        }
        void setMaritalststus(string maritalststus){
        this->maritalststus= maritalststus ;
        }
        void setGender(string gender){
        this->gender= gender ;
        }
        //Get
        int getId(){
        return id ;
        }
        string getName(){
        return  name ;
        }
        string getAddress(){
        return address ;
        }
        string setDateofBirth(){
        return dateofBirth;
        }
        string getPhoneNumber(){
        return phoneNumber;
        }
        string Maritalststus(){
        return maritalststus;
        }
        string setGender(){
        this->gender= gender ;
        }
};
