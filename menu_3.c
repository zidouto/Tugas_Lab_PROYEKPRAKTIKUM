#include <stdio.h>
#include "data.h"

void viewBuku() {
    loadBuku();
    if(jumlahBuku == 0) {
        printf("Belum ada data buku.\n");
        return;
    }
    printf("\nDaftar Buku:\n");
    printf("%-5s %-8s %-25s %-15s %-10s\n", "No", "Kode", "Nama", "Jenis", "Harga");
    for(int i = 0; i < jumlahBuku; i++) {
        printf("%-5d %-8s %-25s %-15s %.2lf\n", i+1, daftarBuku[i].kode,
               daftarBuku[i].nama, daftarBuku[i].jenis, daftarBuku[i].harga);
    }
}
