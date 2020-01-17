#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	int x;
    setcolor(5);
	cout<<"Inputkan Nilai x: ";
	cin>>x;
	setcolor(3);
	
	switch(x) {
	case 10000:
		cout<<"Sepuluh ribu rupiah";
		break;
	case 20000:
		cout<<"Dua puluh ribu rupiah";
		break;
	case 30000:
		cout<<"Tiga puluh ribu rupiah";
		break;
	case 40000:
		cout<<"Empat puluh ribu rupiah";
		break;
	case 50000:
		cout<<"Lima puluh ribu rupiah";
		break;
	default:
		cout<<"Tidak terdaftar di program";
		break;
	}
    return 0;
}
