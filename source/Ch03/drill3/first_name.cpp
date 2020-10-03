#include "std_lib_facilities.h"
int main()
{
	string friend_name;
	string first_name;
	cout <<"add meg a first namet"<<endl;
	cin >> first_name;
	cout <<"Add meg a barátod nevét"<<endl;
	cin >>friend_name;
	char friend_sex='0';
	cout <<"If your friend male write m. If your friend famela famela wirte f"<<endl;
	cin >>friend_sex;
	int age;
	cout <<"Add meg a barátod életkorát"<<endl;
	cin >>age;
	cout <<"Dear "<<first_name<<","<<endl;
	cout <<"	How are you? I miss you. ";
	cout << "Have you seen your "<<friend_name<<" lately?";
	if (friend_sex=='m')
	cout <<"If you see " <<friend_name <<" please ask him to call me. "<<endl;
    if (friend_sex=='f')
	cout <<"If you see " <<friend_name<< " please ask her to call me. "<<endl;
	

if (age <= 0 || age >= 110){
 simple_error("you're kidding!");}
	if (age<12)
	cout <<"Next year will be "<<age+1;
	if(age==17)
    cout <<"Next year will be able to vote";
    if(age>100)
    cout <<"“I hope you are enjoying retirement"<<endl;


cout<<"“Yours sincerely"<<endl<<endl<<"erik";
	
	return 0;
}