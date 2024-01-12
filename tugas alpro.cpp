 #include <iostream>
#include <iomanip>
using namespace std;


/*anggota kelompok
  Lisan Shidqi Farizan
  Rifqi Dyas Aqil Prasetyo
  Risky Dharmawan Prihadhi
  */
struct barang {
  const int pensil = 1500;
  const int bukutulis = 30000;
  const int pulpen = 2500;
  const int penghapus = 2000;
  const int penggaris = 3500;
  const int hvs = 500;
  const int karton = 5000;

};

int main() {
   barang daftar;
   int pilihan, jumlah;
   int total = 0;
   char lanjut;
   int uang;
   int kembalian;

  cout << setw(46) << "----------Daftar Barang----------\n\n";
  cout << "1. pensil : Rp. " << daftar.pensil << endl;
  cout << endl;
  cout << "2. buku tulis : Rp. " << daftar.bukutulis << endl;
  cout << endl;
  cout << "3. pulpen : Rp. " << daftar.pulpen << endl;
  cout << endl;
  cout << "4. penghapus : Rp. " << daftar.penghapus << endl;
  cout << endl;
  cout << "5. penggaris : Rp. " << daftar.penggaris << endl;
  cout << endl;
  cout << "6. hvs : Rp. " << daftar.hvs << endl;
  cout << endl;
  cout << "7. karton : Rp. " << daftar.karton << endl;
  cout << endl; 

  do {
    cout << "Masukkan pilihan barang (1-7): ";
    cin >> pilihan;
    cout << "masukkan jumlah barang: ";
    cin >> jumlah;
    switch(pilihan) {
      case 1:
        total += daftar.pensil * jumlah;
        break;
      case 2:
        total += daftar.bukutulis * jumlah;
        break;
      case 3:
        total += daftar.pulpen * jumlah;
        break;
      case 4:
        total += daftar.penghapus * jumlah;
        break;
      case 5:
        total += daftar.penggaris * jumlah;
        break;
      case 6:
        total += daftar.hvs * jumlah;
        break;
      case 7:
        total += daftar.karton *jumlah;
        break;
      default:
        cout << "pilihan tidak valid" << endl;
        break;
    }
    cout << "apakah ingin melanjutkan belanja? (y/n): ";
    cin >> lanjut;
  } while (lanjut == 'y' || lanjut == 'Y');
    
  cout << "total belanja: Rp. " << total << endl;
  cout << "masukkan uang pembayaran: Rp. ";
  cin >> uang;
  kembalian = uang - total;
  cout << "kembalian: Rp. " << kembalian << endl;
  
  return 0;
}