#include<iostream>
using namespace std;
int main()
{
	
	int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,8,7}}; // deklarasi variabel array 2D
	int (*Ptr_matrix)[3][4]; // deklarasi variabel pointer untuk variabel 2D array
	int x; // deklarasi variabel x
	int *xpointer; // deklarasi variabel xpointer
	xpointer = &x; // variabel xpointer menyimpan alamat memori var. x dan juga menunjukkan var xpointer ke var. x
	int y; // deklarasi variabel y
	int *ypointer; // deklarasi variabel ypointer
	ypointer = &y; // variabel ypointer menyimpan alamat memori var. y dan juga menunjukkan var ypointer ke var. y
	Ptr_matrix = &matrix; // // variabel ypointer menyimpan alamat memori var. matrix 2D array dan juga menunjukkan var Ptr_matrix ke var. matrix 2D array
	cout<<" Bilangan Matriks 3x4 adalah : \n";
	for(*xpointer=0;*xpointer<3;++*xpointer)
	{
		for(*ypointer=0;*ypointer<4;++*ypointer) // looping 3 kali untuk var. x dan looping 4 kali untuk var. y
		{
			
			cout<<"  "<<(*Ptr_matrix)[*xpointer][*ypointer]; // tampilkan nilai atau elemen - elemen matrix [3][4]
			
		}
		cout<<endl;
	}
	
	cout<<"\n Alamat memori : \n";
	for(*xpointer=0;*xpointer<3;++*xpointer)
	{
		for(*ypointer=0;*ypointer<4;++*ypointer) // looping 3 kali untuk var. x dan looping 4 kali untuk var. y
		{
			
			cout<<"  "<<(Ptr_matrix)[*xpointer][*ypointer]; // tampilkan alamat memori elemen - elemen matrix [3][4]
			
		}
		cout<<endl;
	}
	
	cout<<"\n Alamat array indeks pertama : \n";
	cout<<"  "<<Ptr_matrix[0][0]; // menampilkan alamat memori array indeks pertama
	
	return 0;
}
