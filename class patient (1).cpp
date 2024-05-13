#include"class person.cpp"
#include<iostream>
using namespace std;

class patient :public person {
	private:
        int age;
        string diagnosis ;
        string prescribedMedications ;
        string comment ;
    public:
        // *****************set*******************************
       void setAge(int age){
        this->age= age;
        }
        void setDiagnosis (string diagnosis ){
        this->diagnosis = diagnosis  ;
        }
        void setPrescribedMedications(string prescribedMedications){
        this->prescribedMedications = prescribedMedications  ;
        }
        void setComment(string comment){
        this->comment= comment ;
        }
        //get
        int getAge(){
        return age ;
        }
        string setdiagnosis (){
        return diagnosis ;
        }
        string detPrescribedMedications (){
        return prescribedMedications ;
        }
        string setComment (){
        return comment ;
        }
};
