//#include "student_class.cpp"
//try tamplet<>**********************************
#include "oop_control.cpp"
	doctor Doctor;
	staffInf StaffInf;
	patient Patient;
	medicine Medicien;
	int id1=0;
	int index1 =0,about=0;
	int id2=0;
	int index2 =0;
	int id3=0;
	int index3 =0;
	int id4=0;
	int index4 =0;
	int renter=0;
	doctor fun1();
	patient fun2();
	staffInf fun3();
	medicine fun4();
		bool b2=false;
		bool bol=true;
	int procces;
	char contn;
	int i=1;
	controlDoctor con1;
	controlMedicine con4;
	controlPatient con2;
	controlstaffInf con3;
int main ()
{	line14:
	cout<<"please choose proecess about :\n\n1)Doctor        2)patient\n\n3)staff       4)medicine\n";
	cin>>about;
	if(about==1)
	{goto line24;}
	else if(about==2)
	{goto line91;}
	else if(about==3)
	{goto line155;}
	else if (about==4)
	{goto line219;}
	else
	{cout<<"wrong value try again \n";
	goto line14;}
	//doctor arr[10];
	line24:
	cout<<"plaese chose your process:\n\n\t1)Add        2)edit\n\n\t3)remove     4)exit\n";
	cin>>procces;
	while(bol==true)
	{
		switch (procces)
	{
		case 1:
		{ 
		line43 :
	Doctor=fun1();
		renter=	con1.addDoctor(Doctor);
		if(renter==-1)
		{index1--;
		goto line43;}
		cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;	
	}
	case 2:
		{
			cout<<"enter Doctor id which you want to edit : ";
			cin>>id1;
			 b2=true;
			Doctor=fun1();
			con1.editDoctor(id1,Doctor);
			cout<<"\nthe new values : \n";
			con1.getDoctor(id1-1);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
		}
		case 3:
			{
			cout<<"enter Doctor id which you want to remove : ";
			cin>>id1;	
			//con1.remove(st_id);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
			}
	case 4:
		{
			bol=false;
			break;
		}
	}
	
	}
	
//**********************************************
	line91	:
	cout<<"plaese chose your process:\n\n\t1)Add        2)edit\n\n\t3)remove     4)exit\n";
	cin>>procces;
	while(bol==true)
	{
		switch (procces)
	{
		case 1:
		{ 
		line105 :
	Patient=fun2();
		renter=con2.addPatient(Patient);
		if(renter==-1)
		{index2--;
		goto line105;}
		cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;	
	}
	case 2:
		{
			cout<<"enter Patient id which you want to edit : ";
			cin>>id2;
			 b2=true;
			Patient=fun2();
			con2.editPatient(id2,Patient);
			cout<<"\nthe new values : \n";
			con2.getPatient(id2-1);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
		}
		case 3:
			{
			cout<<"enter Patient id which you want to remove : ";
			cin>>id2;	
			//con1.remove(st_id);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
			}
	case 4:
		{
			bol=false;
			break;
		}
	}
	
	}
	//*************************************************************
	line155:
	cout<<"plaese chose your process:\n\n\t1)Add        2)edit\n\n\t3)remove     4)exit\n";
	cin>>procces;
	while(bol==true)
	{
		switch (procces)
	{
		case 1:
		{ 
		line166 :
	StaffInf=fun3();
		renter=	con3.addStaffInf(StaffInf);
		if(renter==-1)
		{index3--;
		goto line166;}
		
		cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;	
	}
	case 2:
		{
			cout<<"enter Staff member id which you want to edit : ";
			cin>>id3;
			 b2=true;
			StaffInf=fun3();
			con3.editStaffInf(id3,StaffInf);
			cout<<"\nthe new values : \n";
			con3.getStaffInf(id3-1);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
		}
		case 3:
			{
			cout<<"enter Staff meber id which you want to remove : ";
			cin>>id3;	
			//con1.remove(st_id);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
			}
	case 4:
		{
			bol=false;
			break;
		}
	}
	
	}
	//**************************************
	line219:
	cout<<"plaese chose your process:\n\n\t1)Add        2)edit\n\n\t3)remove     4)exit\n";
	cin>>procces;
	while(bol==true)
	{
		switch (procces)
	{
		case 1:
		{ 
		line227 :
	Medicien=fun4();
		renter=	con4.addMedicine(Medicien);
		if(renter==-1)
		{index4--;
		goto line227;}
		cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;	
	}
	case 2:
		{
			cout<<"enter Medicien id which you want to edit : ";
			cin>>id4;
			 b2=true;
			Medicien=fun4();
			con4.editMedicine(id4,Medicien);
			cout<<"\nthe new values : \n";
			con4.getMedicine(id4-1);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
		}
		case 3:
			{
			cout<<"enter Medicien id which you want to remove : ";
			cin>>id4;	
			//con1.remove(st_id);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line14;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
			}
	case 4:
		{
			bol=false;
			break;
		}
	}
	
	}
	
	}
		doctor fun1()
	{
		string name;
	int age;
	string address;
	string dateofBirth;
	string phoneNumber;
	string gender;
	if(b2==true)
			{
					cout<< "please enter doctor's number "<<id1<<" name : ";
			cin>>name;
			Doctor.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter doctor's number "<<index1+1<<" name : ";
					index1++;
			cin>>name;
			Doctor.setName(name);
			}
			cout<<"please enter the age : ";
			cin>>age;
			Doctor.setAge(age);
				cout<<"please enter the Address : ";
			cin>>address;
			Doctor.setAddress(address);
			cout<<"please enter the dateofBirth : ";
			cin>>dateofBirth;
			Doctor.setDateofBirth(dateofBirth);
			cout<<"plaese enter the PhoneNumber : ";
			cin>>phoneNumber;
			Doctor.setPhoneNumber(phoneNumber);
			cout<<"plaese enter the Gender : ";
			cin>>gender;
			Doctor.setGender(gender);
			return Doctor;
	}
	
	patient fun2()
	{
		string name;
	int age;
	string address;
	string dateofBirth;
	string phoneNumber;
	string gender;
	if(b2==true)
			{
					cout<< "please enter patient's number "<<id2<<" name : ";
			cin>>name;
			Patient.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter patient's number "<<index2+1<<" name : ";
			index2++;
			cin>>name;
			Patient.setName(name);
			}
			cout<<"please enter the age : ";
			cin>>age;
			Patient.setAge(age);
				cout<<"please enter the Address : ";
			cin>>address;
			Patient.setAddress(address);
			cout<<"please enter the dateofBirth : ";
			cin>>dateofBirth;
			Patient.setDateofBirth(dateofBirth);
			cout<<"plaese enter the PhoneNumber : ";
			cin>>phoneNumber;
			Patient.setPhoneNumber(phoneNumber);
			cout<<"plaese enter the Gender : ";
			cin>>gender;
			Patient.setGender(gender);
			return Patient;
	}
	
	
	staffInf fun3()
	{
		string name;
	int age;
	string address;
	string dateofBirth;
	string phoneNumber;
	string gender;
	if(b2==true)
			{
					cout<< "please enter staff membr's number "<<id3<<" name : ";
			cin>>name;
			StaffInf.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter staff member's number "<<index3+1<<" name : ";
			index3++;
			cin>>name;
			
			StaffInf.setName(name);
			}
			cout<<"please enter the age : ";
			cin>>age;
			StaffInf.setAge(age);
				cout<<"please enter the Address : ";
			cin>>address;
			StaffInf.setAddress(address);
			cout<<"please enter the dateofBirth : ";
			cin>>dateofBirth;
			StaffInf.setDateofBirth(dateofBirth);
			cout<<"plaese enter the PhoneNumber : ";
			cin>>phoneNumber;
			StaffInf.setPhoneNumber(phoneNumber);
			cout<<"plaese enter the Gender : ";
			cin>>gender;
			StaffInf.setGender(gender);
			return StaffInf;
	}
	medicine fun4()
	{
		string nme;
		string effectiveMaterial;
		int takeNumber ;
		string sideEffect;
		string n;
		//bool narcotic ;
	if(b2==true)
			{
					cout<< "please enter medicien's number "<<id4<<" name : ";
			cin>>nme;
			Medicien.setName(nme);
			b2=false;
			}
			else
			{
					cout<< "please enter medicien's number "<<index4+1<<" name : ";
					index4++;
			cin>>nme;
			Medicien.setName(nme);
			}
			cout<<"please enter mdicien's effective Material :";
			cin>>effectiveMaterial;
			Medicien.setEffectiveMaterial(effectiveMaterial);
			cout<<"please enter number of takes :";
			cin>>takeNumber;
			Medicien.setTakeNumber(takeNumber);
			cout<<"please enter medicien's side effect :";
			cin>>sideEffect;
			Medicien.setSideEffect(sideEffect);
			cout<<"please enter if medicen is narcotic :";
			cin>>n;
			if(n=="y"||n=="Y"||n=="yes"||n=="Yes"||n=="YES")
			Medicien.setNrcotic();
			
	return Medicien;
	}
