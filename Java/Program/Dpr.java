public class Dpr {
    private String id; // ID anggota DPR
    private String nama; // Nama lengkap anggota DPR
    private String namaBidang; // Nama bidang kerja anggota DPR
    private String namaPartai; // Nama partai politik anggota DPR

    // Konstruktor default untuk kelas Dpr
    public Dpr() {
        this.id = "";
        this.nama = "";
        this.namaBidang = "";
        this.namaPartai = "";
    }

    // Konstruktor parameter untuk kelas Dpr
    public Dpr(String id, String nama, String namaBidang, String namaPartai) {
        this.id = id;
        this.nama = nama;
        this.namaBidang = namaBidang;
        this.namaPartai = namaPartai;
    }

    // Fungsi untuk mendapatkan ID anggota DPR
    public String getId() {
        return this.id;
    }

    // Fungsi untuk mengatur ID anggota DPR
    public void setId(String id) {
        this.id = id;
    }

    // Fungsi untuk mendapatkan nama lengkap anggota DPR
    public String getNama() {
        return this.nama;
    }

    // Fungsi untuk mengatur nama lengkap anggota DPR
    public void setNama(String nama) {
        this.nama = nama;
    }

    // Fungsi untuk mendapatkan nama bidang kerja anggota DPR
    public String getNamaBidang() {
        return this.namaBidang;
    }

    // Fungsi untuk mengatur nama bidang kerja anggota DPR
    public void setNamaBidang(String namaBidang) {
        this.namaBidang = namaBidang;
    }

    // Fungsi untuk mendapatkan nama partai politik anggota DPR
    public String getNamaPartai() {
        return this.namaPartai;
    }

    // Fungsi untuk mengatur nama partai politik anggota DPR
    public void setNamaPartai(String namaPartai) {
        this.namaPartai = namaPartai;
    }
}