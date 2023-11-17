#include <iostream>
using namespace std;
 
int main(){
	int Si_Kancil, garuda, Mans, Marker, Calc;
	float Book, Stat, Disc, FixBook, FixStat;

  cout << "===   Daftar barang beserta harganya    ===" << endl;
  cout << ":  Si kancil          : Rp 105.000,00     :" << endl;
  cout << ":  Garuda             : Rp 188.000,00     :" << endl;
  cout << ":  Buku Manusia       : Rp  55.000,00     :" << endl;
  cout << ":  White Board Marker : Rp  10.000,00     :" << endl;
  cout << ":  Calculator         : Rp  35.000,00     :" << endl;
  cout << endl;
  
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Si Kancil yang dibeli            : "; cin>>Si_Kancil;
 cout<<"Masukkan jumlah Garuda yang dibeli               : "; cin>>garuda;
 cout<<"Masukkan jumlah Buku Manusia yang dibeli         : "; cin>>Mans;
 cout<<"Masukkan jumlah Whiteboard Marker yang dibeli    : "; cin>>Marker;
 cout<<"Masukkan jumlah Calculator yang dibeli           : "; cin>>Calc;
 cout<<"\n"<<endl;
   
  // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<Si_Kancil<<"\t\tSi Kancil  \t\t105000 \t\t"<<Si_Kancil*105000<<"\t    |"<<endl;
 cout<<"\t|   "<<garuda<<   "\t\tGaruda     \t\t188000 \t\t"<<garuda*188000<<"\t    |"<<endl;
 cout<<"\t|   "<<Mans<<   "\t\tBuku Manusia \t\t55000 \t\t"<<Mans*55000<<"\t    |"<<endl;
 cout<<"\t|   "<<Marker<<"\t\tWhiteboard Marker \t10000 \t\t"<<Marker*10000<<"\t    |"<<endl;
 cout<<"\t|   "<<Calc<<"\t\tCalculator \t\t35000 \t\t"<<Calc*35000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Book = Si_Kancil*105000+garuda*188000;
 Disc = 0.1*Book;
 Stat = Mans*55000+Marker*10000+Calc*35000;
 cout<<"\t|\t\t\tHarga Total Buku \t: "<<Book<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Book-Disc<<"\t    |"<<endl;
 FixBook = Book-Disc;
 Disc = 0.1*Stat;
 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"   \t    |"<<endl;
 FixStat = Stat-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixBook+FixStat<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}

