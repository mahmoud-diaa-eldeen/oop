#include"doctor.cpp"
//template <typename R>
class objectRepo{
	virtual int addDoctor(doctor Doctor)=0;
	virtual void editDoctor (int id ,doctor Doctor)=0;
	virtual void getDoctor (int id)=0;
	virtual void removeDoctor (int id)=0;
};

int index1=0;
class doctorRepoImpl{
	doctor arr[1000];
	public :
		int addDoctor (doctor Doctor)
		{
			arr[index1]=Doctor;
			index1++;
			return index1;
		}
		void editDoctor(int id,doctor Doctor)
	{
		arr[id-1]=Doctor;
	}
	void getDoctor(int id)
	{
		arr[id].getvalue();
	}
	void removeDoctor(int id)
	{
		arr[id].removeValue();
	}
};

//****************************************************************
class medicineRepo{
	virtual int addMedicine(medicine Medicine)=0;
	virtual void editMedicine (medicine Medicine)=0;
	virtual void getMedicine (int id)=0;
	virtual void removeMedicine (int id)=0;
};


int index2=0;
class MedicineRepoImpl{
	R arr[1000];
	public :
		int addMedicine (R Medicine)
		{
			arr[index2]=Medicine;
			index2++;
			return index2;
		}
		void editMedicine(int id,medicine Medicine)
	{
		arr[id-1]=Medicine;
	}
	void getMedicine(int id)
	{
		arr[id].getvalue();
	}
	void removeMedicine(int id)
	{
		arr[id].removeValue();
	}
};
//****************************************************************
class patientRepo{
	virtual int addPatient(patient Patient)=0;
	virtual void editPatient (patient Patient)=0;
	virtual void getPatient (int id)=0;
	virtual void removePatient (int id)=0;
};



int inde3=0;
class patientRepoImpl{
	patient arr[1000];
	public :
		int addPatient (patient Patient)
		{
			arr[index3]=Patient;
			index3++;
			return index3;
		}
		void editPatient(int id,patient Patient)
	{
		arr[id-1]=Patient;
	}
	void getPatient(int id)
	{
		arr[id].getvalue();
	}
	void removePatient(int id)
	{
		arr[id].removeValue();
	}
};
//*************************************************************************
class staffInfRepo{
	virtual int addStaffInf(staffInf StaffInf)=0;
	virtual void editStaffInf(staffInf StaffInf)=0;
	virtual void getStaffInf (int id)=0;
	virtual void removeStaffInf (int id)=0;
};




int index4=0;
class staffInfRepoImpl{
	staffInf arr[1000];
	public :
		int addStaffInf (staffInf StaffInf)
		{
			arr[index4]=StaffInf;
			index4++;
			return index4;
		}
		void editStaffInf(int id,staffInf taffInf)
	{
		arr[id-1]=staffInf;
	}
	void getStaffInf(int id)
	{
		arr[id].getvalue();
	}
	void removeStaffInf(int id)
	{
		arr[id].removeValue();
	}
};
