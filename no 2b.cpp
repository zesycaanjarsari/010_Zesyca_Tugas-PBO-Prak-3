<?php
include 'Nomor_2a.php';
?>

<!DOCTYPE html>
<html lang="id">
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-iYQeCzEYFbKjA/T2uDLTpkwGzCiq6soy8tYaI1GyVh/UjpbCx/TYkiZhlZB6+fzT" crossorigin="anonymous">

<head>
    <title>Praktikum 3 No.2</title>
</head>

<body>
    <div class="container mt-5">
        <div>
            <b>Nama : Zesyca Dwi Anjarsari </b><br>
            <b>21091397010</b>
        </div>
        <table class="table table-bordered table-hover">
            <tr>
                <td>No</td>
                <td>Object</td>
                <td>Jumlah Roda</td>
                <td>Warna</td>
                <td>Bahan Bakar</td>
                <td>Kapasitas Mesin</td>
                <td>Muatan Maksimal</td>
                <td>Tarif Awal</td>
                <td>Tarif Per KM</td>
                <td>Jumlah Sadel</td>
                <td>Jumlah Gir</td>
            </tr>
            <tr>
                <td>1</td>
                <td>Truk 1</td>
                <td><?= $truk1->getjmlRoda(); ?></td>
                <td><?= $truk1->getWarna(); ?></td>
                <td><?= $truk1->getBahanBakar(); ?></td>
                <td><?= $truk1->getKapasitasMesin(); ?></td>
                <td><?= $truk1->getMuatanMaks(); ?></td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
            </tr>
            <tr>
                <td>2</td>
                <td>Truk 2</td>
                <td><?= $truk2->getjmlRoda(); ?></td>
                <td><?= $truk2->getWarna(); ?></td>
                <td><?= $truk2->getBahanBakar(); ?></td>
                <td><?= $truk2->getKapasitasMesin(); ?></td>
                <td><?= $truk2->getMuatanMaks(); ?></td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
            </tr>
            <tr>
                <td>3</td>
                <td>Taksi 1</td>
                <td><?= $taksi1->getjmlRoda(); ?></td>
                <td><?= $taksi1->getWarna(); ?></td>
                <td><?= $taksi1->getBahanBakar(); ?></td>
                <td><?= $taksi1->getKapasitasMesin(); ?></td>
                <td>-</td>
                <td><?= $taksi1->getTarifAwal(); ?></td>
                <td><?= $taksi1->getTarifPerKm(); ?></td>
                <td>-</td>
                <td>-</td>
            </tr>
            <tr>
                <td>4</td>
                <td>Taksi 2</td>
                <td><?= $taksi2->getjmlRoda(); ?></td>
                <td><?= $taksi2->getWarna(); ?></td>
                <td><?= $taksi2->getBahanBakar(); ?></td>
                <td><?= $taksi2->getKapasitasMesin(); ?></td>
                <td>-</td>
                <td><?= $taksi2->getTarifAwal(); ?></td>
                <td><?= $taksi2->getTarifPerKm(); ?></td>
                <td>-</td>
                <td>-</td>
            </tr>
            <tr>
                <td>5</td>
                <td>Sepeda 1</td>
                <td><?= $sepeda1->getjmlRoda(); ?></td>
                <td><?= $sepeda1->getWarna(); ?></td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td><?= $sepeda1->getJmlSadel(); ?></td>
                <td><?= $sepeda1->getJmlGir(); ?></td>
            </tr>
            <tr>
                <td>6</td>
                <td>Sepeda 2</td>
                <td><?= $sepeda2->getjmlRoda(); ?></td>
                <td><?= $sepeda2->getWarna(); ?></td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td>-</td>
                <td><?= $sepeda2->getJmlSadel(); ?></td>
                <td><?= $sepeda2->getJmlGir(); ?></td>
            </tr>
        </table>
    </div>

    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.1/dist/js/bootstrap.bundle.min.js" integrity="sha384-u1OknCvxWvY5kfmNBILK2hRnQC3Pr17a+RTT6rIHI7NnikvbZlHgTPOOmMi466C8" crossorigin="anonymous"></script>
</body>

</html>

