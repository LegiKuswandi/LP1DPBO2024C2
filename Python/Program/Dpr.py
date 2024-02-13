class Dpr:
    def __init__(self, id="", nama="", nama_bidang="", nama_partai=""):
        # Inisialisasi objek Dpr dengan atribut yang diberikan
        self.id = id
        self.nama = nama
        self.nama_bidang = nama_bidang
        self.nama_partai = nama_partai

    def get_id(self):
        # Mengembalikan id anggota DPR
        return self.id

    def set_id(self, id):
        # Mengatur id anggota DPR
        self.id = id

    def get_nama(self):
        # Mengembalikan nama anggota DPR
        return self.nama

    def set_nama(self, nama):
        # Mengatur nama anggota DPR
        self.nama = nama

    def get_nama_bidang(self):
        # Mengembalikan nama bidang kerja anggota DPR
        return self.nama_bidang

    def set_nama_bidang(self, nama_bidang):
        # Mengatur nama bidang kerja anggota DPR
        self.nama_bidang = nama_bidang

    def get_nama_partai(self):
        # Mengembalikan nama partai anggota DPR
        return self.nama_partai

    def set_nama_partai(self, nama_partai):
        # Mengatur nama partai anggota DPR
        self.nama_partai = nama_partai
