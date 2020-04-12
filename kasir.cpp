#include <iostream>

// Author : By awal ramadhan
// Membuat Kasir Restoran Makanan
// Menggunakan Do while Switch case

using namespace std;

int main(){
int kode,pri,jml,tot,byr,kbl;
char mad;
do
{
  cout << "==========================\n"<<endl;
  cout << "========RUMAH MAKAN=======\n"<<endl;
  cout << "========SEDERHANAAA=======\n"<<endl;
  cout << "==========================\n"<<endl;
  cout << "\nMenu Makanan :         Harga"<<endl;
  cout << "\n1.Ayam Goreng         Rp.10000"<<endl;
  cout << "\n2.Mie Ayam            Rp.11000 "<<endl;
  cout << "\n3.Bakso               Rp.11000 "<<endl;
  cout << "\n4.Ikan Bakar          Rp.10000 "<<endl;
  cout << "\n5.Teh Manis           Rp.4000"<<endl;
  cout << "\n6.Es Jeruk            Rp.5000"<<endl;
  cout << "\n7.Aqua Gelas          Rp.2000"<<endl;
  cout << "\nMasukkan Pilihan Anda : "<<endl;
  cin >> kode;
  
switch(kode){
  case 1:
    cout << "\nAyam Goreng"<<endl;
    pri=10000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
      cout << "\ntotal Harga Yaitu : Rp. "<<tot<<endl;
      cout << "\nDIBAYAR : Rp. ";
      cin >> byr;
        kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T :";
      cin >> mad;
      break;
  case 2:
    cout << "\nMie Ayam"<<endl;
    pri=11000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
      cout << "\ntotal Harga Yaitu : Rp. "<<tot<<endl;
      cout << "\nDIBAYAR : Rp. ";
      cin >> byr;
        kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T : ";
      cin >> mad;
      break;
  case 3:
    cout << "\nBakso"<<endl;
    pri=11000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
    cout << "\ntotal Harga Yaitu : Rp. "<<tot<<endl;
    cout << "\nDIBAYAR : Rp. ";
    cin >> byr;
      kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T : ";
      cin >> mad;
      break;
  case 4:
    cout << "\nIkan Bakar"<<endl;
    pri=10000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
    cout << "\ntotal Harga Yaitu : Rp. "<<tot<<endl;
    cout << "\nDIBAYAR : Rp. ";
    cin >> byr;
      kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T : ";
      cin >> mad;
      break;
  case 5:
    cout << "\nTeh Manis"<<endl;
    pri=4000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
    cout << "\ntotal harga Yaitu : Rp. "<<tot<<endl;
    cout << "\nDiBAYAR : Rp. ";
    cin >> byr;
      kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T : ";
      cin >> mad;
      break;
  case 6:
    cout << "\nEs Jeruk"<<endl;
    pri=5000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
    cout << "\ntotal Harga Yaitu : Rp. "<<tot<<endl;
    cout << "\nDIBAYAR : Rp. ";
    cin >> byr;
      kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T : ";
      cin >> mad;
      break;
  case 7:
    cout << "\nAqua Gelas"<<endl;
    pri=2000;
    cout << "\nMasukkan Jumlah : "<<endl;
    cin >> jml;
    tot=pri*jml;
    cout << "\ntotal Hara Yaitu : Rp. "<<tot<<endl;
    cout << "\nDIBAYAR : Rp. ";
    cin >> byr;
      kbl=byr-tot;
      cout << "\nKembali : Rp. "<<kbl<<endl;
      cout << "\nMasih Ada : Y/T : ";
      cin >> mad;
      break;
      default:
        cout << "\nKode anda masukkan Salah";
    }
  }
  while (mad/='Y');
   cout << "\nTerimakasih Atas kunjungan Anda";
   return 0;
}
