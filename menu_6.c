#include <stdio.h>
#include <stdlib.h>
#include "data.h"

void saveAndExit() {
    FILE *fp = fopen("databuku.txt", "w");
    for(int i = 0; i < jumlahBuku; i++)
        fprintf(fp, "%s|%s|%s|%.2lf\n", daftarBuku[i].kode, daftarBuku[i].nama,
                daftarBuku[i].jenis, daftarBuku[i].harga);
    fclose(fp);

    fp = fopen("history.txt", "w");
    for(int i = 0; i < jumlahHistory; i++)
        fprintf(fp, "%s|%d|%.2lf\n", daftarHistory[i].kode, daftarHistory[i].jumlah,
                daftarHistory[i].total);
    fclose(fp);

    printf("Data tersimpan. Keluar program.\n");
    exit(0);
}
