#Saya Legi Kuswandi mengerjakan LP! dalam mata kuliah DPBO
#untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang 
#telah dispesifikasikan. Aamiin.

from Dpr import Dpr

llist = []  # Membuat list untuk menyimpan objek dari kelas Dpr
apain = 0
iterasi = 0

while apain != 4:  # Loop utama program berjalan sampai pengguna memilih untuk keluar (pilihannya adalah 4)
    print("Pilih mau diapain")
    print("1. Tambah")
    print("2. Ubah")
    print("3. Hapus")
    print("4. Keluar")
    print("5. Tampilkan")
    apain = int(input("Masukan Pilhan Anda : "))

    if apain == 1:  # Jika pilihan adalah 1, pengguna ingin menambahkan entri baru
        n = int(input("Tambah Berapa : "))
        for i in range(n):  # Melakukan pengulangan sebanyak n kali untuk menambahkan entri baru
            temp = Dpr()  # Membuat objek sementara dari kelas Dpr
            temp.id = input("Masukan id : ")
            temp.nama = input("Masukan nama : ")
            temp.nama_bidang = input("Masukan bidang : ")
            temp.nama_partai = input("Masukan partai : ")
            llist.append(temp)  # Menambahkan objek sementara ke dalam list
            print("Data Berhasil ditambahkan horeee")

    elif apain == 2:  # Jika pilihan adalah 2, pengguna ingin mengubah entri yang sudah ada
        ubah = input("Masukan Nama yang ingin diubah : ")
        for dpr in llist:  # Melakukan iterasi melalui list
            if dpr.nama == ubah:  # Jika nama cocok ditemukan
                print("Data dari nama tersebut ditemukan")
                dpr.id = input("Masukan id baru : ")
                dpr.nama = input("Masukan nama baru : ")
                dpr.nama_bidang = input("Masukan bidang baru : ")
                dpr.nama_partai = input("Masukan partai baru : ")
                print("Data Berhasil diubah horeee")

    elif apain == 3:  # Jika pilihan adalah 3, pengguna ingin menghapus entri yang sudah ada
        hapus = input("Masukan Nama yang ingin dihapus : ")
        llist = [dpr for dpr in llist if dpr.nama != hapus]  # Menghapus entri dengan nama yang cocok

    elif apain == 5:  # Jika pilihan adalah 5, pengguna ingin menampilkan daftar entri yang sudah ada
        print("+-----------+--------------+-----------------+----------------+")
        print("| ID        | Nama         | Bidang          | Partai         |")
        print("+-----------+--------------+-----------------+----------------+")
        for dpr in llist:  # Melakukan iterasi melalui list
            print(f"| {dpr.id.ljust(9)} | {dpr.nama.ljust(12)} | {dpr.nama_bidang.ljust(15)} | {dpr.nama_partai.ljust(14)} |")
        print("+-----------+--------------+-----------------+----------------+")

    iterasi += 1  # Menginkrementasi iterasi

print("Sampai Jumpa Lagi :)")
