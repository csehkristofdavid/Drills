#include "std_lib_facilities.h"

int main(){

	string first_name;
	string friend_name;
	char friend_sex=0;
	int age;
	cout<<"Enter the name of the person you want to write to (folloved by 'enter'):"<<endl;
	cin>>first_name;
	cout<<"Dear "<<first_name<<"!"<<endl;
	cout<<"	How are you? I am fine. I miss you. I am broing without you. The sun is not shinnying without you."<<endl;
	cout<<"Enter the of your friend (folloved by 'enter'):"<<endl;
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?"<<endl;
	cout<<"Enter 'm' if your friend is male or 'f' if female:"<<endl;
	cin>>friend_sex;
	if(friend_sex=='m')cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;
	if(friend_sex=='f')cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;
	cout<<"Enter the age of the recipient (folloved by 'enter'):"<<endl;
	cin>>age;
	if(age<=0 || age>=110) simple_error("you're kidding!");
	cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<endl;
	if(age<12)cout<<"Next year you will be "<<age+1<<"."<<endl;
	if(age==17)cout<<"Next year you will be able to vote."<<endl;
	if(age>70)cout<<"I hope you are enjoying retirement."<<endl;
	cout<<"Yours sincerely,"<<endl<<endl<<"Kristof."<<endl;


	return 0;
}