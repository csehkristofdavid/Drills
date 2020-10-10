#include "std_lib_facilities.h"

int main()
try{
	
	//cout<<"Success!\n"; 										//1
		
	//cout<<"Success!\n";										//2 
	
	//cout<<"Scucess!\n"; 										//3

	//cout<<"success"<<"\n"; 									//4

	/*int res=7;												//5
	vector<int> v(10);
	v[5]=res;
	cout<<"Success!\n";*/

	/*vector<int> v(10);										//6
	v[5]=7;
	if(v[5]==7) cout<<"Success!\n";*/

	/*if(true)cout<<"Success!\n";								//7
	else cout<<"Fail!\n";*/

	/*bool c=true;												//8
	if(c) cout<<"Success!\n";
	else cout<<"fail\n";*/

	/*string s="ape";											//9
	bool c=true;
	if(c)cout<<"Scucess!\n";*/

	/*string s="ape";											//10
	if(s=="ape")cout<<"Success!\n";*/

	/*string s="fool";											//11
	if(s=="fool")cout<<"Success!\n";*/

	/*s="fool";													//12
	if(s=="fool") cout<<"Success!\n";*/

	/*vector<char> v(5);										//13
	for(int i=0;i<v.size();++i)cout<<"success!\n";*/

	/*vector<char> v(5);										//14
	for(int i=0;i<v.size();++i) cout<<"success!\n";*/

	/*string s="success!\n";									//15
	for(int i=0;i<9;++i) cout<<s[i];*/

	/*if(true)cout<<"Success!\n";								//16
	else cout<<"Fail!\n";*/

	/*int x=2000;												//17
	int c=x;
	if(c==2000)cout<<"Success!\n";*/

	/*string s="Success!\n";									//18
	for(int i=0;i<9;++i)cout<<s[i];*/

	/*vector<int> v(5);											//19
	for(int i=0;i<=v.size();++i)cout<<"Success!\n";*/

	/*int i=0;													//20
	int j=9;
	while(i<10)i++;
	if(j<i)cout<<"Success!\n";*/

	/*int x=2;													//21
	double d=5/(double)x;
	if(d==x+0.5)cout<<"success!\n";*/

	/*string s="Success!\n";									//22
	for(int i =0;i<10;++i)cout<<s[i];*/

	/*int i=0;													//23
	int j=9;
	while(i<10)++i;
	if(j<i)cout<<"Success!\n";*/

	/*int x=4;													//24
	double d=5/((double)x-2);
	if(d==x/2+0.5)cout<<"Success!\n";*/

	//cout<<"Success!\n";											//25

	return 0;
}catch(exception&e){
	cerr<<"error: "<<e.what()<<endl;
	return 1;
}
catch(...){
	cerr<<"Oops: unknown excaption!"<<endl;
	return 2;
}