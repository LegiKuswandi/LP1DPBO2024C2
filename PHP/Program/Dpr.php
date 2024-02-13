<?php
class Dpr{

    // PRIVATE ATRIBUT
    private $id = "";
    private $nama = "";
    private $bidang = "";
    private $partai = "";
    private $foto = "";

    // CONSTRUCT
    function __construct($id = "", $nama = "", $bidang = "", $partai = "", $foto = ""){
        $this->id = $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto;
    }

    // PUBLIC METHOD (SETTER & GETTER)
    function setid($id = ""){
        $this->id = $id;
    }

    function getid(){
        return $this->id;
    }

    function setnama($nama = ""){
        $this->nama = $nama;
    }

    function getnama(){
        return $this->nama;
    }

    function setbidang($bidang = ""){
        $this->bidang = $bidang;
    }

    function getbidang(){
        return $this->bidang;
    }

    function setpartai($partai = ""){
        $this->partai = $partai;
    }

    function getpartai(){
        return $this->partai;
    }

    function setFoto($foto = ""){
        $this->foto = $foto;
    }

    function getFoto(){
        return $this->foto;
    }
    
    // DESTRUCTOR
    function __destruct(){
    }
}

?>