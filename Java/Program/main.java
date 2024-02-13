/*Saya Legi Kuswandi mengerjakan LP1 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
telah dispesifikasikan. Aamiin.*/

import java.util.Scanner;
import java.util.ArrayList;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Dpr> list = new ArrayList<>(); // ArrayList untuk menyimpan anggota DPR
        int apain = 0;

        // Looping utama program
        while (apain != 4) {
            // Menampilkan menu
            System.out.println("Pilih mau diapain");
            System.out.println("1. Tambah");
            System.out.println("2. Ubah");
            System.out.println("3. Hapus");
            System.out.println("4. Keluar");
            System.out.println("5. Tampilkan");
            System.out.print("Masukkan Pilihan Anda: ");
            apain = scanner.nextInt();

            if (apain == 1) { // Jika pilihan adalah untuk menambahkan anggota DPR
                System.out.print("Tambah Berapa: ");
                int n = scanner.nextInt();

                // Looping untuk menerima input untuk setiap anggota DPR yang akan ditambahkan
                for (int i = 0; i < n; i++) {
                    System.out.print("Masukkan ID: ");
                    String id = scanner.next();
                    System.out.print("Masukkan Nama: ");
                    String nama = scanner.next();
                    System.out.print("Masukkan Bidang: ");
                    String bidang = scanner.next();
                    System.out.print("Masukkan Partai: ");
                    String partai = scanner.next();

                    // Membuat objek anggota DPR baru dan menambahkannya ke dalam ArrayList
                    Dpr temp = new Dpr(id, nama, bidang, partai);
                    list.add(temp);

                    System.out.println("Data Berhasil ditambahkan horeee");
                }
            } else if (apain == 2) { // Jika pilihan adalah untuk mengubah data anggota DPR
                System.out.print("Masukkan Nama yang ingin diubah: ");
                String namaUbah = scanner.next();

                // Looping untuk mencari anggota DPR berdasarkan nama
                for (Dpr dpr : list) {
                    if (dpr.getNama().equals(namaUbah)) {
                        System.out.println("Data dari nama tersebut ditemukan");
                        System.out.print("Masukkan ID baru: ");
                        String id = scanner.next();
                        System.out.print("Masukkan Nama baru: ");
                        String nama = scanner.next();
                        System.out.print("Masukkan Bidang baru: ");
                        String bidang = scanner.next();
                        System.out.print("Masukkan Partai baru: ");
                        String partai = scanner.next();

                        // Mengubah data anggota DPR yang ditemukan
                        dpr.setId(id);
                        dpr.setNama(nama);
                        dpr.setNamaBidang(bidang);
                        dpr.setNamaPartai(partai);
                        
                        System.out.println("Data Berhasil diubah horeee");
                    }
                }
            } else if (apain == 3) { // Jika pilihan adalah untuk menghapus anggota DPR
                System.out.print("Masukkan Nama yang ingin dihapus: ");
                String namaHapus = scanner.next();

                // Looping untuk mencari dan menghapus anggota DPR berdasarkan nama
                for (int i = 0; i < list.size(); i++) {
                    if (list.get(i).getNama().equals(namaHapus)) {
                        list.remove(i);
                        System.out.println("Data dengan nama '" + namaHapus + "' berhasil dihapus horee");
                    }
                }
            } else if (apain == 5) { // Jika pilihan adalah untuk menampilkan semua anggota DPR
                System.out.println("+++++++++Daftar Anggota DPR++++++++++");
                System.out.println("+----------+-------------+----------------+---------------+");
                System.out.println("| ID       | Nama        | Bidang         | Partai        |");
                System.out.println("+----------+-------------+----------------+---------------+");
                // Menampilkan setiap anggota DPR yang ada dalam ArrayList
                for (Dpr dpr : list) {
                    System.out.printf("| %-9s| %-12s| %-15s| %-14s|%n", dpr.getId(), dpr.getNama(), dpr.getNamaBidang(), dpr.getNamaPartai());
                }
                System.out.println("+----------+-------------+----------------+---------------+");
            }
        }
        System.out.println("Sampai Jumpa Lagi :)");
    }
}
