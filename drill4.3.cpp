#include "std_lib_facilities.h"

double converter(double x, string unit_x){
	double y=0;
	if(unit_x=="cm"){
		y=x/100;
	}
	if(unit_x=="in"){
		y=x*2.54/100;
	}
	if(unit_x=="ft"){
		y=x*12*2.54/100;
	}
	if(unit_x=="m"){
		y=x;
	}
	return y;
}
int main(){

	string input="";
	double num=0;
	double smallest=0;
	double largest=0;
	string unit;
	int i=0;
	double sum=0;
	double con_num=0;
	vector<double> v;
	while(cin>>input){
		if(input=="|"){break;}
		stringstream geek(input);
		geek>>num;
		geek>>unit;
		if(unit=="m" || unit=="cm" || unit=="in" || unit=="ft"){
			con_num=converter(num,unit);
			if(i==0){
				smallest=con_num; largest=con_num;
			}
			if(i>0){
				if(con_num<smallest){
					smallest=con_num;
					cout<<"This is the smallest so far"<<endl;
				}
				if(con_num>largest){
					largest=con_num;
					cout<<"This is the largest so far"<<endl;
				}
			}
			i++;
			sum+=con_num;
			v.push_back(con_num);
		}
	}
	cout<<"the smallest: "<<smallest<<" meter(s)"<<endl;
	cout<<"the largest: "<<largest<<" meter(s)"<<endl;
	cout<<"the number of values: "<<i<<endl;
	cout<<"the sum of values: "<<sum<<" meter(s)"<<endl;
	i=0;
	cout<<"the elements was/were: ";
	sort(v);
	for(i=0;i<v.size();i++){
		cout<<v[i]<<" m ";
	}
	cout<<endl;
	return 0;
}