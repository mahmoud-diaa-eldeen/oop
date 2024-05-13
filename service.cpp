#include "valdition.cpp"
/////////////////////////////  Doctor \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface DoctorService
class doctorService {
	public:
		virtual int addDoctor(doctor Doctor) = 0;
		virtual doctor getDoctor(int id) = 0;
		virtual int editDoctor(doctor Doctor) = 0;
};
// Class DoctorServiceImpl
class DoctorServiceImpl  {
	private:
		doctorRepoImpl DoctorRepository;
		valditionDoctor DoctorValidation;
		doctor doctorResult;
	public:
		int addDoctor(doctor Doctor) {
			if(DoctorValidation.doctorValdition(Doctor) == 1){
				int id = DoctorRepository.addDoctor(Doctor);
					return id;
				
			}
			return -1;
		}
		void getDoctor(int id) {
			 DoctorRepository.getDoctor(id);
		}
		int editDoctor(int id,doctor Doctor) {
			 DoctorRepository.editDoctor(id,Doctor);
				cout<<"Sucess Edit Doctor Wit ID ["<<Doctor.getId()<<"]"<<endl;
		}
};

/////////////////////////////  patient \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface patientService
class patientService {
	public:
		virtual int addPatient(patient Patient) = 0;
		virtual patient getPatient(int id) = 0;
		virtual int editPatient(patient Patient) = 0;
};
// Class patientServiceImpl
class patientServiceImpl {
	private:
		patientRepoImpl PatientRepoatry;
		valditionPatient patientValidation;
		patient patientResult;
	public:
		int addPatient(patient Patient) {
			if(patientValidation.patientValdition(Patient) == 1) {
				int id= PatientRepoatry.addPatient(Patient);
				
					return id;
				
			}
			return -1;
		}
		void getPatient(int id) {
			 PatientRepoatry.getPatient(id);
		}
		int editPatient(int id,patient Patient) {
			 PatientRepoatry.editPatient(id,Patient);
				cout<<"Sucess Edit Patient Wit ID ["<<Patient.getId()<<"]"<<endl;
			
		}
};

/////////////////////////////  staffInf,,Staffinf \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface staffinfService
class staffinfService {
	public:
		virtual int addStaffinf(staffInf StaffInf) = 0;
		virtual staffInf getStaffInf(int id) = 0;
		virtual int editStaffInf(staffInf StaffInf) = 0;
};
// Class StaffinfServiceImpl
class staffInfServiceImpl {
	private:
		staffInfRepoImpl staffInfRepoatry;
		valditionStaffInf staffInfValidation;
		staffInf staffInfResult;
	public:
		int addStaffInf(staffInf StaffInf) {
			if(staffInfValidation.staffInfValdition(StaffInf) == 1) {
				int id = staffInfRepoatry.addStaffInf(StaffInf);
				
					return id;
				
			}
			return -1;
		}
		void getStaffInf(int id) {
			staffInfRepoatry.getStaffInf(id);
		}
		int editStaffInf(int id,staffInf StaffInf) {
			staffInfRepoatry.editStaffInf(id,StaffInf);
				cout<<"Sucess Edit Staffinf Wit ID ["<<StaffInf.getId()<<"]"<<endl;
			
		}
};


/////////////////////////////  medicine ,,Medicine \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// interface MedicineService
class medicineService {
	public:
		virtual int addMedicine(medicine Medicine) = 0;
		virtual patient getMedicine(int id) = 0;
		virtual int editPatient(medicine Medicine) = 0;
};
// Class MedicineServiceImpl
class medicineServiceImpl {
	private:
		MedicineRepoImpl MedicineRepoatry;
		valditionMedicine MedicineValidation;
	public:
		int addMedicine(medicine Medicine) {
			if(MedicineValidation.medicineValdition(Medicine) == 1) {
				int id = MedicineRepoatry.addMedicine(Medicine);
				
					return id;
				
			}
			return -1;
		}
		void getMedicine(int id) {
		 MedicineRepoatry.getMedicine(id);
		}
		int editMedicine(int id,medicine Medicine) {
			MedicineRepoatry.editMedicine(id,Medicine);
				cout<<"Sucess Edit medicine Wit ID ["<<Medicine.getId()<<"]"<<endl;
			
		}
};
