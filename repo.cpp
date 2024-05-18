#include"Values.cpp"
//template <typename R>
//*******************doctor********************************
class doctorRepo{
	virtual int addDoctor(doctor Doctor)=0;
	virtual void editDoctor (int id ,doctor Doctor)=0;
	virtual void getDoctor (int id)=0;
	virtual void removeDoctor (int id)=0;
};
int number1=0;

class doctorRepoImpl{
	doctor arr1[1000];
	public :
		int addDoctor (doctor Doctor)
		{
			arr1[number1].setName(Doctor.getName());
			arr1[number1].setAddress(Doctor.getAddress());
			arr1[number1].setDateofBirth(Doctor.getDateofBirth());
			arr1[number1].setPhoneNumber(Doctor.getPhoneNumber());
			arr1[number1].setGender(Doctor.getGender());
			arr1[number1].setAge(Doctor.getAge());
			arr1[number1].setSalary(Doctor.getSalary());
			number1++;
			return number1;
		}
		void editDoctor(int id,doctor Doctor)
	{
		arr1[id-1]=Doctor;
	}
	void getDoctor(int id)
	{
		 arr1[id-1].getDoctor(id);
	}
};

//********************************medicine********************************
class medicineRepo{
	virtual int addMedicine(medicine Medicine)=0;
	virtual void editMedicine (medicine Medicine)=0;
	virtual void getMedicine (int id)=0;
	virtual void removeMedicine (int id)=0;
};


int number2=0;
class MedicineRepoImpl{
	medicine arr2[1000];
	public :
		int addMedicine (medicine Medicine)
		{
			arr2[number2]=Medicine;
			number2++;
			return number2;
		}
		void editMedicine(int id,medicine Medicine)
	{
		arr2[id-1]=Medicine;
	}
	void getMedicine(int id)
	{
		arr2[id-1].getMedicine();
	}
/*	void removeMedicine(int id)
	{
		arr[id].removeValue();
	}*/
};
//***************************patient*************************************
class patientRepo{
	virtual int addPatient(patient Patient)=0;
	virtual void editPatient (patient Patient)=0;
	virtual void getPatient (int id)=0;
	virtual void removePatient (int id)=0;
};



int number3=0;
class patientRepoImpl{

	patient arr3[1000];
	public :
		int addPatient (patient Patient)
		{
			arr3[number3].setName(Patient.getName());
			arr3[number3].setAddress(Patient.getAddress());
			arr3[number3].setDateofBirth(Patient.getDateofBirth());
			arr3[number3].setPhoneNumber(Patient.getPhoneNumber());
			arr3[number3].setGender(Patient.getGender());
			arr3[number3].setAge(Patient.getAge());
       	    arr3[number3].setDiagnosis (Patient.getDiagnosis() );
        	arr3[number3].setPrescribedMedications(Patient.getPrescribedMedications());
         	arr3[number3].setComment(Patient.getComment());
			number3++;
			return number3;
		}
		void editPatient(int id,patient Patient)
	{
		arr3[id-1]=Patient;
	}
	void getPatient(int id)
	{
		arr3[id-1].getPatient();
	}
/*	void removePatient(int id)
	{
		arr[id].removeValue();
	}*/
};
//*********************************staffInf****************************************
class staffInfRepo{
	virtual int addStaffInf(staffInf StaffInf)=0;
	virtual void editStaffInf(staffInf StaffInf)=0;
	virtual void getStaffInf (int id)=0;
	virtual void removeStaffInf (int id)=0;
};




int number4=0;
class staffInfRepoImpl {
	staffInf arr4[1000];
	public :
		int addStaffInf (staffInf StaffInf)
		{
			arr4[number4].setName(StaffInf.getName());
			arr4[number4].setAddress(StaffInf.getAddress());
			arr4[number4].setDateofBirth(StaffInf.getDateofBirth());
			arr4[number4].setPhoneNumber(StaffInf.getPhoneNumber());
			arr4[number4].setGender(StaffInf.getGender());
			arr4[number4].setAge(StaffInf.getAge());
			arr4[number4].setSalary(StaffInf.getSalary());
			arr4[number4].setJobtitle(StaffInf.getJobtitle());
			number4++;
			return number4;
		}
		void editStaffInf(int id,staffInf StaffInf)
	{
			arr4[id-1].setName(StaffInf.getName());
			arr4[id-1].setAddress(StaffInf.getAddress());
			arr4[id-1].setDateofBirth(StaffInf.getDateofBirth());
			arr4[id-1].setPhoneNumber(StaffInf.getPhoneNumber());
			arr4[id-1].setGender(StaffInf.getGender());
			arr4[id-1].setAge(StaffInf.getAge());
			arr4[id-1].setSalary(StaffInf.getSalary());
			arr4[id-1].setJobtitle(StaffInf.getJobtitle());
			cout<<"\nthe new values : \n";
			arr4[id-1].getStaffInf();
	}
	void getStaffInf(int id)
	{
		arr4[id-1].getStaffInf();
	}
/*	void removeStaffInf(int id)
	{
		arr[id].removeValue();
	}*/
};
