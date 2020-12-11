#include "std_lib_facilities.h"

int main()try{
	int birth_year=2001;
	cout<<birth_year<<"\t"<<birth_year<<"\t(decimal)"<<endl;
	cout<<birth_year<<"\t"<<hex<<birth_year<<"\t(hexadecimal)"<<endl;
	cout<<dec<<birth_year<<"\t"<<oct<<birth_year<<"\t(octal)"<<endl;
	int now=2020;
	cout<<dec<<now-birth_year<<"\t(decimal)"<<endl;
	cout<<hex<<now-birth_year<<"\t(hexadecimal)"<<endl;
	cout<<oct<<now-birth_year<<"\t(octal)"<<endl;
	int a,b,c,d;
	cin>>a>>oct>>b>>hex>>c>>d;
	cout << a << '\t'<< b << '\t'<< c << '\t'<< d <<endl;
	double x=1234567.89;
	cout<<defaultfloat<<x<<"\t(defaultfloat)"<<endl;
	cout<<fixed<<x<<"\t(fixed)"<<endl;
	cout<<scientific<<x<<"\t(scientific)"<<endl;
	cout<<'|'<<setw(10)<<"last name"<<'|'<<setw(20)<<"first name"<<'|'<<setw(20)<<"phone number"<<'|'<<setw(25)<<"email"<<'|'<<endl;
	cout<<'|'<<setw(10)<<"Cseh"<<'|'<<setw(20)<<"Kristof"<<'|'<<setw(20)<<"1230120"<<'|'<<setw(25)<<"csehkristof99@gmail.com"<<'|'<<endl;
	cout<<'|'<<setw(10)<<"Nemeth"<<'|'<<setw(20)<<"Viktor"<<'|'<<setw(20)<<"7382643"<<'|'<<setw(25)<<"nviktor02@gmail.com"<<'|'<<endl;
	cout<<'|'<<setw(10)<<"Tormasi"<<'|'<<setw(20)<<"Adam"<<'|'<<setw(20)<<"9876332"<<'|'<<setw(25)<<"tormasiadam01@gmail.com"<<'|'<<endl;
	cout<<'|'<<setw(10)<<"Jozsa"<<'|'<<setw(20)<<"Gergo"<<'|'<<setw(20)<<"1234441"<<'|'<<setw(25)<<"jogeri@gmail.com"<<'|'<<endl;
	cout<<'|'<<setw(10)<<"Juhasz"<<'|'<<setw(20)<<"Daniel"<<'|'<<setw(20)<<"2367882"<<'|'<<setw(25)<<"juhi2001@gmail.com"<<'|'<<endl;


	return 0;
}catch(exception& e){
	cerr<<"Error: "<<e.what()<<endl;
	return 1;
}