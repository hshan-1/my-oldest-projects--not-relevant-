#include <cstdio>
#include <iostream>
#include<fstream>
#include<windows.h>
#include <locale.h>

using namespace std;
int main()

{
setlocale(LC_CTYPE, "Polish");
int h,m,s,t,t1,choice;


{
	a:
	system("cls");
	
{

	printf("chcesz wy��czy� komputer?\n");
	//endl;
	printf("1.Tak\n2.Nie(wy��czenie programu)\n");
	cin>>choice;

}


//prze��cznik wyboru/
{
	switch(choice)

		{
			case 1:
				break;
			case 2:
				return 0;
			default:
				goto a;
		}
}
/*printf("chcesz skorzysta� z ostatnich ustawie�?");cout<<endl;
printf("")*/
	b:
	printf("ustaw za ile:\n");
	cout<<"godzin: ";
	cin>>h;
	cout<<"minut: ";
	cin>>m;
	cout<<"sekund: ";
	cin>>s;
}
//podprogram planowania zamkni�cia systemu
{
//plik batchfile
{
		
    ofstream plik("batman.bat");
	t=s+m*60+h*3600;
	plik<<"@ECHO OFF\n";
	plik<<"shutdown -s -t "<<t<<endl;
	plik<<"PAUSE";
	
	plik.close(); 
	
	
}
//komunikat
{
	t1=5;
	p:
	system("cls");
	cout<<"za: "<<t1<<" rozpocznie si� odliczanie";cout<<endl;
	Sleep(1200);
}
//sprawdzanie odliczania
	{
	
	if(t1>0)
		{
			
			t1--;
			goto p;
		}
	if(t1=0){
	}
}
zapisane:
	system("batman.bat");
	system("cls");
	printf("naci�nij dowolny klawisz");
	system("cls");
	scanf("");
}
	
//anulowanie zaplanowanego wy��czania
	printf("\nnaci�nij ''1'' aby anulowa�");cout<<endl;
	printf("naci�nij ''2'' aby zmieni� czas");cout<<endl;
	printf("naci�nij ''3'' aby wy��czy� program");cout<<endl;
	cin>>choice;
	switch(choice)
		{
			case 1:
				system("cls");
				break;
			case 2:
				system("shutdown -a");
				system("cls");
				goto b;
			case 3:
				return 0;
		}
	//Sleep(2000);
{
c:
	ofstream stop("stop.bat");
	stop<<"@ECHO OFF\n";
	stop<<"shutdown -a "<<endl;
	stop<<"PAUSE";
	stop.close(); 
	system("stop.bat");
	goto a;
	
}
	return 0; 
}
