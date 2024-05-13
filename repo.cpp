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
			arr1[number1]=Doctor;
			number1++;
			return number1;
		}
		void editDoctor(int id,doctor Doctor)
	{
		arr1[id-1]=Doctor;
	}
	void getDoctor(int id)
	{
		 arr1[id].getDoctor(id);
	}
/*	void removeDoctor(int id)
	{
		arr[id].removeValue();
	}*/
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
		arr2[id].getMedicine();
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
			arr3[number3]=Patient;
			number3++;
			return number3;
		}
		void editPatient(int id,patient Patient)
	{
		arr3[id-1]=Patient;
	}
	void getPatient(int id)
	{
		arr3[id].getPatient();
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
			arr4[number4]=StaffInf;
			number4++;
			return number4;
		}
		void editStaffInf(int id,staffInf StaffInf)
	{
		arr4[id-1]=StaffInf;
	}
	void getStaffInf(int id)
	{
		arr4[id].getStaffInf();
	}
/*	void removeStaffInf(int id)
	{
		arr[id].removeValue();
	}*/
};
