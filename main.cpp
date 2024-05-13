//#include "student_class.cpp"
//try talnet<>**********************************
#include "oop_control.cpp"
	doctor Doctor;
	staffinformatoin Staffinformatoin;
	patient Patient;
	medicien Medicien;
	template <typename T>
	T fun();
		bool b2=false;
int main ()
{
		doctorContrller con1;
	bool bol=true;
	int procces;
	char contn;
	int f=2;
	int i=1,number=0;
	doctor arr[10];
	line24:
	cout<<"plaese chose your process:\n\n\t1)Add        2)edit\n\n\t3)remove     4)exit\n";
	cin>>procces;
	while(bol==true)
	{
		switch (procces)
	{
		case 1:
		{ 
		
	Doctor=fun<doctor>();
			con1.addStudent(s);
		cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line24;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;	
	}
	case 2:
		{
			cout<<"enter student id which you want to edit : ";
			cin>>st_id;
			 b2=true;
			s=fun();
			con1.edit(st_id,s);
			cout<<"\nthe new values : \n";
			con1.get(st_id-1);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line24;
		else if (contn=='n'||contn=='N'||contn=='2')
	{procces=4;}
	break;
		}
		case 3:
			{
			cout<<"enter student id which you want to remove : ";
			cin>>st_id;	
			con1.remove(st_id);
			cout<< "Do you wnat to do new process: 1)yes    2)no\n";
		cin>>contn;
		if (contn=='y'||contn=='Y'||contn=='1')
		goto line24;
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
		T fun()
	{
		string name;
	int age;
	string address;
	string dateofBirth;
	string phoneNumber;
	string gender;
	if(b2==true)
			{
					cout<< "please enter doctor's number "<<st_id<<" name : ";
			cin>>name;
			doctor.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter doctor's number "<<index+1<<" name : ";
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
	
/*	patient fun()
	{
		string name;
	int age;
	string address;
	string dateofBirth;
	string phoneNumber;
	string gender;
	if(b2==true)
			{
					cout<< "please enter patient's number "<<st_id<<" name : ";
			cin>>name;
			Patient.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter patient's number "<<index+1<<" name : ";
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
	staffinformatoin fun()
	{
		string name;
	int age;
	string address;
	string dateofBirth;
	string phoneNumber;
	string gender;
	if(b2==true)
			{
					cout<< "please enter staffinformatoin's number "<<st_id<<" name : ";
			cin>>name;
			Staffinformatoin.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter staffinformatoin's number "<<index+1<<" name : ";
			cin>>name;
			Staffinformatoin.setName(name);
			}
			cout<<"please enter the age : ";
			cin>>age;
			Staffinformatoin.setAge(age);
				cout<<"please enter the Address : ";
			cin>>address;
			Staffinformatoin.setAddress(address);
			cout<<"please enter the dateofBirth : ";
			cin>>dateofBirth;
			Staffinformatoin.setDateofBirth(dateofBirth);
			cout<<"plaese enter the PhoneNumber : ";
			cin>>phoneNumber;
			Staffinformatoin.setPhoneNumber(phoneNumber);
			cout<<"plaese enter the Gender : ";
			cin>>gender;
			Staffinformatoin.setGender(gender);
			return Staffinformatoin;
	}*/
	medicien fun4()
	{
		string name;
		string effectiveMaterial;
		int takeNumber ;
		string sideEffect;
		string n;
		bool narcotic ;
	if(b2==true)
			{
					cout<< "please enter medicien's number "<<st_id<<" name : ";
			cin>>name;
			Medicien.setName(name);
			b2=false;
			}
			else
			{
					cout<< "please enter medicien's number "<<index+1<<" name : ";
			cin>>name;
			Medicien.setName(name);
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
	}
