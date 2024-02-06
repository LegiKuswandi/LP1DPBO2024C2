#include <iostream>
#include <string>

using namespace std;

class Dpr{
    private:
        string id; // ID anggota DPR
        string nama; // Nama lengkap anggota DPR
        string nama_bidang; // Nama bidang kerja anggota DPR
        string nama_partai; // Nama partai politik anggota DPR
    public:

        // Konstruktor default untuk kelas Dpr
        Dpr(){
            this->id = "";
            this->nama = "";
            this->nama_bidang = "";
            this->nama_partai = "";
        }

        // Konstruktor parameter untuk kelas Dpr
        Dpr(string id, string nama, string nama_bidang, string nama_partai){
            this->id = id;
            this->nama = nama;
            this->nama_bidang = nama_bidang;
            this->nama_partai = nama_partai;
        }

        // Fungsi untuk mendapatkan ID anggota DPR
        string get_id(){
            return this->id;
        }

        // Fungsi untuk mengatur ID anggota DPR
        void set_id(string id){
            this->id = id;
        }

        // Fungsi untuk mendapatkan nama lengkap anggota DPR
        string get_nama(){
            return this->nama;
        }

        // Fungsi untuk mengatur nama lengkap anggota DPR
        void set_nama(string nama){
            this->nama = nama;
        }

        // Fungsi untuk mendapatkan nama bidang kerja anggota DPR
        string get_nama_bidang(){
            return this->nama_bidang;
        }

        // Fungsi untuk mengatur nama bidang kerja anggota DPR
        void set_nama_bidang(string nama_bidang){
            this->nama_bidang = nama_bidang;
        }

        // Fungsi untuk mendapatkan nama partai politik anggota DPR
        string get_nama_partai(){
            return this->nama_partai;
        }

        // Fungsi untuk mengatur nama partai politik anggota DPR
        void set_nama_partai(string nama_partai){
            this->nama_partai = nama_partai;
        }

        // Destruktor untuk kelas Dpr
        ~Dpr(){
        }
};

