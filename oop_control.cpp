#include"servce.cpp"
//****************doctor**************
class controlDoctor{
	
	doctorSirviceImp doctorService;
	public: 
		int  addDoctor (doctor Doctor) 
	 	{
	  doctorSrvice.addDoctor(Doctor);
	}
	void editDoctor(int id,doctor Doctor)
	{
		doctorService.editDoctor(id,Doctor);
	}
	void showDoctor(int id)
	{
		doctorService.getDoctor(id);
	}
	void removeDoctor(int id)
	{
		doctorService.removeDoctor(id);
	}
};
//****************medicine**************
class controlMedicine{
	
	medicineSirviceImp medicineService;
	public: 
		int  addMedicine (medicine Medicine) 
	 	{
	  medicineSrvice.addMedicine(Medicine);
	}
	void editMedicine(int id,medicine Medicine)
	{
		medicineService.editMedicine(id,Medicine);
	}
	void getMedicine(int id)
	{
		medicineService.getMedicine(id);
	}
	void removeMedicine(int id)
	{
		medicineService.removeMedicine(id);
	}
};
//****************patient**************
class controlPatient{
	
	patientSirviceImp patientService;
	public: 
		int  addPatient (patient Patient) 
	 	{
	  patientSrvice.addPatient(Patient);
	}
	void editPatient(int id,patient Patient)
	{
		patientService.editPatient(id,Patient);
	}
	void showPatient(int id)
	{
		patientService.getPatient(id);
	}
	void removePatient(int id)
	{
		patientService.removePatient(id);
	}
};
//****************staffinformatoin**************
class controlstaffinformatoin{
	
	staffInformatoinSirviceImp stafInformatoinService;
	public: 
		int  addStaffInformatoin (staffInformatoin StaffInformatoin) 
	 	{
	  staffinformatoinSrvice.addStaffInformatoin(StaffInformatoin);
	}
	void editStaffInformatoin(int id,staffInformatoin StaffInformatoin)
	{
		staffInformatoinService.edit(id,Patient);
	}
	void show(int id)
	{
	staffInformatoinService.get(id);
	}
	void remove(int id)
	{
		staffInformatoinService.remove(id);
	}
};
