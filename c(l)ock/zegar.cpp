#include <iostream>
#include <windows.h>
#include <cstdlib>


using namespace std;


int main() 
{
int h,m,m1,s,s1,a,b;
godz:
	cout<<"(00):00.00";
	cout<<"\n";
	cin>>h;
	system("cls");
	if(h<0 || h>23) {
		cout<<"ustaw poprawnie!(0-23)\n";
		goto godz;
	}
min:
	cout<<h<<":(0)0.00\n";
	std::cin>>m1;
	system("cls");
	if(m1<0 || m1>5) {
		cout<<"ustaw poprawnie!(0-5)\n";
		goto min;
	}
min1:
	cout<<h<<":"<<m1<<"(0).00\n";
	cin>>m;
	system("cls");
	if(m<0 || m>9) {
		cout<<"ustaw poprawnie!(0-9)\n";
		goto min1;
	}
sec:
	cout<<h<<":"<<m1<<m<<".(0)0\n";
	cin>>s1;
	system("cls");
	if(s1<0 || s1>5) {
		cout<<"ustaw poprawnie!(0-5)\n";
		goto sec;
	}
sec1:
	cout<<h<<":"<<m1<<m<<"."<<s1<<"(0)";
	cout<<"\n";
	cin>>s;

	system("cls");
	if(s<0 || s>9)
	{
		cout<<"ustaw poprawnie!(0-9)\n";
		goto sec;
	}
czas:
	if(s==10) 
	{
		//Beep(1568, 200);
		s1=s1+1;
		s=s-10;

	}
	if(s1==6)
	{
		//Beep(1568, 200);
		m=m+1;
		s1=s1-6;
	}	
	if(m==10) 
	{
		//Beep(1397, 200);
		m1=m1+1;
		m=m-10;
	}
	if(m1==6) 
	{
		Beep(1397, 200);
		h=h+1;
		m1=m1-6;
	}

	if(h==24)
	{
		Beep(900, 500);
		h=h-24;
	}
	system("cls");
	cout<<h<<":"<<m1<<m<<"."<<s1<<s;
	Sleep(1000);
	s+=1;
	goto czas;
	return 0;
}

