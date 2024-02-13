<!-- Saya Legi Kuswandi mengerjakan LP1 dalam mata kuliah DPBO untuk keberkahanNya maka saya 
tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. -->

<?php
// import file
require("Dpr.php");

class Crud{
    // private atribut
    private $Dprdata = array();

    // CONSTRUCT
    public function __construct($data = array()){
        $this->Dprdata = $data;
    }

    // PUBLIC METHOD
    public function DprTambah($idx, $id = "", $nama = "", $bidang = "", $partai = "", $foto = ""){
        $this->Dprdata[$idx] = new DPR($id, $nama, $bidang, $partai, $foto); 
    }

    public function DprTampil(){ //Untuk tabel
        echo "<table border='1'>";
        echo "<tr>
            <th>id</th>
            <th>Nama</th>
            <th>Bidang</th>
            <th>Partai</th>
            <th>Foto Profil</th>
            </tr>";
        for($i = 0; $i < sizeof($this->Dprdata); $i++){
            echo "<tr><td>";
            echo $this->Dprdata[$i]->getid();
            echo "</td><td>";
            echo $this->Dprdata[$i]->getnama();
            echo "</td><td>";
            echo $this->Dprdata[$i]->getbidang();
            echo "</td><td>";
            echo $this->Dprdata[$i]->getpartai();
            echo "</td><td>";
            echo "<img src='" . $this->Dprdata[$i]->getFoto(). "'style='width:80px'>";
            echo "</td>";
            echo "</tr>";
        }
        echo "</table>";
    }

    function carinama($nama = ""){
        for($i = 0; $i < sizeof($this->Dprdata); $i++){
            if(strcmp($nama, $this->Dprdata[$i]->getnama()) == 0){
                return $i; 
            }
        }
        return -1;
    }

    public function DprUpdate($idx, $id = "", $nama = "", $bidang = "", $partai = "", $foto = ""){
        $this->Dprdata[$idx]->setid($id);
        $this->Dprdata[$idx]->setnama($nama);
        $this->Dprdata[$idx]->setbidang($bidang);
        $this->Dprdata[$idx]->setpartai($partai);
        $this->Dprdata[$idx]->setFoto($foto);
    }

    public function DprHapus($idx){
        array_splice($this->Dprdata, $idx, 1); 
    } 
    
    // DESTRUCTOR
    function __destruct(){}
}

$dataDPR = array(); 
$temp = new Crud($dataDPR);
echo "Data DPR";
$temp->DprTambah(0, "1234", "Asep", "Perikanan", "PDIP", "foto/dpr1.jpg");
$temp->DprTambah(1, "35645", "Kuswandi", "Pertahanan", "PKB", "foto/dpr1.jpg"); //Menambah beberapa data
$temp->DprTambah(2, "7865", "Ujang", "Investasi", "PKS", "foto/dpr1.jpg");
$temp->DprTampil();

echo "Data DPR setelah diupdate";
$idxnama = $temp->carinama("Asep");
$temp->DprUpdate($idxnama, "56678", "Mamat", "Hukum", "Golkar", "foto/dpr1.jpg"); //Melakukan update setelah mencari nama yang ingin di update
$temp->DprTampil();

echo "Data DPR setelah dihapus";
$idxnama = $temp->carinama("Ujang");
$temp->DprHapus($idxnama); //Melakukan penghapusan data dari nama yang ingin dihapus
$temp->DprTampil();

?>