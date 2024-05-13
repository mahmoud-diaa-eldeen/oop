//**********************medicine*************************
class valditionMedicine{
	serviceMedicineImpl medicineService;
	public :
		void medicineValdition (medicine Medicine)
		{
		if(Medicine.name[0]<65||Medicine.name[0]>90)
		{
			cout<<"The medicine's name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if (Medicine.takeNumber<1)
		{
			cout<<"The medicine's number of take medicine must be more than one, please enter it again:\n";
				return -1;
		}
		else
		 medicineService.addMedicine(Medicine);	
		}
};
//*************************doctor********************

class valditionDoctor{
	serviceDoctorImpl doctorService;
	public:
	void doctorValdition (doctor Doctor)
	{
		if(Doctor.name[0]<65||Doctor.name[0]>90)
		{
			cout<<"The doctor's name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if(Doctor.phoneNumber.lenght!=11)
		{
			cout<<"The doctor's phone number must be 11 number, please enter it again:\n";
			return -1;
		}
		else if(Doctor.age<25)
		{
			cout<<"The doctor's age must be more than 25, plase enter it again:\n";
			return -1;
		}
		else
		 doctorService.addDoctor(Doctor);	
		}
//********************************patient*********************
class valditionPatient{
	servicePatientImpl patientService;
	public:
	void patientValdition (patient Patient)
	{
		if(Patient.name[0]<65||Patient.name[0]>90)
		{
			cout<<"The patient's name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if(Patient.phoneNumber.lenght!=11)
		{
			cout<<"The patient's phone number must be 11 number, please enter it again:\n";
			return -1;
		}
		else
		 patientService.addPatient(Patient);	
		}	
//****************************staffinformation****************
class valditionStaffinformation{
	serviceStaffinformationImpl staffinformationService;
	public:
	void staffinformationValdition (staffinformation Staffinformation)
	{
		if(Staffinformation.name[0]<65||Staffinformation.name[0]>90)
		{
			cout<<"The staff member name must start with capital letter, please enter it again:\n";
			return -1;
		}
		else if(Staffinformation.phoneNumber.lenght!=11)
		{
			cout<<"The staff member phone number must be 11 number, please enter it again:\n";
			return -1;
		}
		else if(Staffinformation.age<25)
		{
			cout<<"The staff member age must be more than 25, plase enter it again:\n";
			return -1;
		}
		else
		 staffinformationService.addStaffinformation(Staffinformation);	
		}
};
