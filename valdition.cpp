//#include"service.cpp"
#include "repo.cpp"
//**********************medicine*************************
class valditionMedicine{
	public :
		int medicineValdition (medicine Medicine)
		{
		if(Medicine.getName()[0]<65||Medicine.getName()[0]>90)
		{
			cout<<"The medicine's name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if (Medicine.getTakeNumber()<1)
		{
			cout<<"The medicine's number of take medicine must be more than one, please enter it again:\n";
				return -1;
		}
		else
		 return 1;	
		}
};
//*************************doctor********************

class valditionDoctor{
	public:
	int doctorValdition (doctor Doctor)
	{
		if(Doctor.getName()[0]<65||Doctor.getName()[0]>90)
		{
			cout<<"The doctor's name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if(Doctor.getPhoneNumber().length()!=11)
		{
			cout<<"The doctor's phone number must be 11 number, please enter it again:\n";
			return -1;
		}
		else
		 return 1;
		}
	};
//********************************patient*********************
class valditionPatient{
	public:
	int patientValdition (patient Patient)
	{
		if(Patient.getName()[0]<65||Patient.getName()[0]>90)
		{
			cout<<"The patient's name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if(Patient.getPhoneNumber().length()!=11)
		{
			cout<<"The patient's phone number must be 11 number, please enter it again:\n";
			return -1;
		}
		else
		 return 1;	
		}	
		};
//****************************staffinformation****************
class valditionStaffInf{
	public:
	int staffInfValdition (staffInf Staffinformation)
	{
		if(Staffinformation.getName()[0]<65||Staffinformation.getName()[0]>90)
		{
			cout<<"The staff member name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if(Staffinformation.getPhoneNumber().length()!=11)
		{
			cout<<"The staff member phone number must be 11 number, please enter it again:\n";
			return -1;
		}
		else
		 return 1;
		}
};
