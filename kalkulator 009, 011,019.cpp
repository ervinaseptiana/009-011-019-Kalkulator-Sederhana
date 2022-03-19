#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int bil1,bil2, pil;
	float hasil;
	string operasi;
	bool loop = true;
	cout<<"Kalkulator Matematika Sederhana"<<endl;
	
	while (loop){
	cout<<"===============================================================\n"<<endl;
	cout<<"PILIH OPERATOR ARITMATIKA"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Keluar\n"<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pil;
	if(pil != 5){
	cout<<"Masukan Bilangan pertama : ";
	cin>>bil1;
	cout<<"Masukan Bilangan kedua : ";
	cin>>bil2; }
	switch(pil){
 case 1 : hasil=bil1+bil2;
	operasi='+';
	cout<<"\nHasil "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	break;
case 2 : hasil=bil1-bil2; 
	operasi='-';
	cout<<"\nHasil "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	break;
case 3 : hasil=bil1*bil2;
	operasi='*';
	cout<<"\nHasil "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	break;
case 4 : hasil=bil1/bil2;
	operasi='/';
	cout<<"\nHasil "<<bil1<<operasi<<bil2<<"="<<hasil<<endl;
	break;

case 5:
	cout<<"Keluar dari program...";
	loop = false;
	break;
		default :
	cout<<"Salah Masukan Operator"<<endl;
	}

}
return 0;
}
