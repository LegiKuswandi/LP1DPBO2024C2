/*Saya Legi Kuswandi mengerjakan LP! dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

#include <bits/stdc++.h> // Memasukkan semua pustaka standar
#include "Dpr.cpp" // Memasukkan definisi kelas Dpr dari file eksternal

using namespace std;

int main(){
    int i, n=0;

    string id;
    string nama;
    string nama_bidang;
    string nama_partai;

    list<Dpr> llist; // Membuat daftar untuk menyimpan objek dari kelas Dpr
    int apain;
    int iterasi = 0;
    while(apain != 4){ // Loop utama program berjalan sampai pengguna memilih untuk keluar (pilihannya adalah 4)
        cout << "Pilih mau diapain\n";
        cout << "1. Tambah\n";
        cout << "2. Ubah\n";
        cout << "3. Hapus\n";
        cout << "4. Keluar\n";
        cout << "5. Tampilkan\n";
        cout << "Masukan Pilhan Anda : ";
        cin >> apain;

        if(apain == 1){ // Jika pilihan adalah 1, pengguna ingin menambahkan entri baru
            cout << "Tambah Berapa : ";
            cin >> n;

            for(i = 0; i<n ; i++){ // Melakukan pengulangan sebanyak n kali untuk menambahkan entri baru
                Dpr temp; // Membuat objek sementara dari kelas Dpr

                cout << "Masukan id : ";
                cin >> id;
                cout << "Masukan nama : ";
                cin >> nama;
                cout << "Masukan bidang : ";
                cin >> nama_bidang;
                cout << "Masukan partai : ";
                cin >> nama_partai;

                temp.set_id(id); // Mengatur nilai id untuk objek sementara
                temp.set_nama(nama); // Mengatur nilai nama untuk objek sementara
                temp.set_nama_bidang(nama_bidang); // Mengatur nilai bidang untuk objek sementara
                temp.set_nama_partai(nama_partai); // Mengatur nilai partai untuk objek sementara

                llist.push_back(temp); // Menambahkan objek sementara ke dalam daftar

                cout << "Data Berhasil ditambahkan horeee" << endl;
            }
        }else if(apain == 2){ // Jika pilihan adalah 2, pengguna ingin mengubah entri yang sudah ada
            cout << "Masukan Nama yang ingin diubah : ";
            string ubah;
            cin >> ubah;
            for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){ // Melakukan iterasi melalui daftar
                int comp = ubah.compare(it->get_nama()); // Membandingkan nama yang ingin diubah dengan nama pada entri saat ini
                if(comp == 0){ // Jika nama cocok ditemukan
                    Dpr temp; // Membuat objek sementara dari kelas Dpr
                    cout << "Data dari nama tersebut ditemukan\n";
                    cout << "Masukan id baru : ";
                    cin >> id;
                    cout << "Masukan nama baru : ";
                    cin >> nama;
                    cout << "Masukan bidang baru : ";
                    cin >> nama_bidang;
                    cout << "Masukan partai baru : ";
                    cin >> nama_partai;
                    
                    it->set_id(id); // Mengatur nilai id untuk entri yang ingin diubah
                    it->set_nama(nama); // Mengatur nilai nama untuk entri yang ingin diubah
                    it->set_nama_bidang(nama_bidang); // Mengatur nilai bidang untuk entri yang ingin diubah
                    it->set_nama_partai(nama_partai); // Mengatur nilai partai untuk entri yang ingin diubah
                    cout << "Data Berhasil diubah horeee" << endl;
                }
            }
        }else if(apain == 3){ // Jika pilihan adalah 3, pengguna ingin menghapus entri yang sudah ada
            cout << "Masukan Nama yang ingin dihapus : ";
            string hapus;
            cin >> hapus;

            for(list<Dpr>::iterator it = llist.begin(); it != llist.end();){ // Melakukan iterasi melalui daftar
                if(hapus == it->get_nama()){ // Jika nama entri cocok dengan nama yang ingin dihapus
                    it = llist.erase(it); // Menghapus entri dan menggeser iterator ke entri berikutnya
                    cout << "Data dengan nama '" << hapus << "' berhasil dihapus horee\n";
                } else {
                    ++it; // Menggeser iterator ke entri berikutnya
                }
            }
        }else if(apain == 5){ // Jika pilihan adalah 5, pengguna ingin menampilkan daftar entri yang sudah ada
            cout << "+++++++++Daftar Anggota DPR++++++++++" << endl;
            for(list<Dpr>::iterator it = llist.begin(); it != llist.end(); it++){ // Melakukan iterasi melalui daftar
                cout << "ID : " << it->get_id() << endl;
                cout << "Nama : " << it->get_nama() << endl;
                cout << "Bidang : " << it->get_nama_bidang() << endl;
                cout << "Partai : " << it->get_nama_partai() << endl << endl;
                i++;
            }
        }
        iterasi++; // Menginkrementasi iterasi
    }
    cout << "Sampai Jumpa Lagi :)" << endl;
    return 0;
}
