#include"service.cpp"
//****************doctor**************
class controlDoctor{
	
	DoctorServiceImpl doctorService;
	public: 
		int  addDoctor (doctor Doctor) 
	 	{
	  return doctorService.addDoctor(Doctor);
	}
	void editDoctor(int id,doctor Doctor)
	{
		doctorService.editDoctor(id,Doctor);
	}
	void getDoctor(int id)
	{
		doctorService.getDoctor(id);
	}
	/*void removeDoctor(int id)
	{
		doctorService.removeDoctor(id);
	}*/
};
//****************medicine**************
class controlMedicine{
	
	medicineServiceImpl medicineService;
	public: 
		int  addMedicine (medicine Medicine) 
	 	{
	  return medicineService.addMedicine(Medicine);
	}
	void editMedicine(int id,medicine Medicine)
	{
		medicineService.editMedicine(id,Medicine);
	}
	void getMedicine(int id)
	{
		medicineService.getMedicine(id);
	}
/*	void removeMedicine(int id)
	{
		medicineService.removeMedicine(id);
	}*/
};
//****************patient**************
class controlPatient{
	
	patientServiceImpl patientService;
	public: 
		int  addPatient (patient Patient) 
	 	{
	 return patientService.addPatient(Patient);
	}
	void editPatient(int id,patient Patient)
	{
		patientService.editPatient(id,Patient);
	}
	void getPatient(int id)
	{
		patientService.getPatient(id);
	}
	/*void removePatient(int id)
	{
		patientService.removePatient(id);
	}*/
};
//****************staffinformatoin**************
class controlstaffInf{
	
	staffInfServiceImpl StaffInfService;
	public: 
		int  addStaffInf (staffInf  StaffInformatoin) 
	 	{
	  return StaffInfService.addStaffInf(StaffInformatoin);
	}
	void editStaffInf(int id,staffInf StaffInformatoin)
	{
		StaffInfService.editStaffInf(id,StaffInformatoin);
	}
	void getStaffInf(int id)
	{
	StaffInfService.getStaffInf(id);
	}
	/*void remove(int id)
	{
		staffInformatoinService.remove(id);
	}*/
};
