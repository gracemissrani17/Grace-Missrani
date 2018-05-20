#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	float angka[4];
	float besarPajak;
	float beaMasuk;
	float PPN;
	float PPh;
	printf("   ==================================================================");
	printf("\n\t\t\tKALKULATOR BEA MASUK\n");
	printf("   ==================================================================\n\n\n");
	char input;
	printf("   Silahkan Pilih:\n");
	printf("   [1] Informasi Aplikasi\n");
	printf("   [2] Mulai Penghitungan\n");
	printf("   [3] Bantuan\n");
	printf("   [4] Keluar\n");
	printf("\n   Pilihan Anda: ");
	scanf("\n%c",&input);
	
	if (input == '1'){
		system("cls");
		printf("\n\n\t\t\tKALKULATOR BEA MASUK");
		printf("\n\t\t\t     Versi 1.0\n\n");
		printf("\tAplikasi ini membantu Anda menghitung prediksi besaran \n     pajak yang akan Anda bayarkan di Indonesia, dilengkapi dengan \n\t\t     penganalisaan besaran pajak\n\n");
		printf("\n\t\t\t     PERHATIAN\n\n");
		printf("   Semua barang selain barang pembatasan (Alkohol, Tembakau, Rokok), \n\t\t   terdampak akumulasi pajak bea masuk.\n");
		printf("   Bila membawa minuman beralkohol (minuman keras), maksimal 1 liter\n   per orang, untuk rokok maksimal membawa 200 batang rokok/25 cerutu\n\t /100 gram hasil tembakau lain seperti tembakau iris. \n\tSelebihnya akan dimusnahkan oleh petugas Bea dan Cukai.\n\n\n");
		main();
		}
		
	else if (input=='2'){
		char respons;
		{
		int n, c, i, sum=0, h[100], j[100], th[100];
		char NPWP;
		char lanjut;
 		system("cls");
 		printf("   ==================================================================");
		printf("\n\t\t\tKALKULATOR BEA MASUK\n");
		printf("   ==================================================================\n\n\n");
 		printf("   Apakah Anda punya NPWP? (y/n): ");
        scanf("\n%c", &NPWP);
        printf("\n   Jumlah Macam Jenis Barang\t:");
  		scanf("%i", &n);
  		
  		for(i=1; i<=n; i++){
  		printf("\n   ------------------------------------------------------------------");
  		printf("\n\n   Harga Jenis Barang %i (USD)\t:", i);
		scanf("%i",&h[i]);
		printf("   Jumlah Beli Barang %i\t\t:",i);
		scanf("%i", &j[i]);
		}
 		for(i=1; i<=n; i++){
        th[i]=j[i]*h[i];
        sum=sum+th[i];
        }
 		if (sum>500){	
   			system("cls");
   			printf("\n   ==================================================================");
			printf("\n\t\t\tANDA WAJIB BAYAR PAJAK BARANG\n");
			printf("   ==================================================================\n\n\n");
			printf("   \t\t\t    Rincian Pajak Anda\n\n\n");
			beaMasuk=1400*(sum-500);
			printf("   Total harga keseluruhan barang\t: \tUSD%i\n", sum);
			printf("   Besar Bea Masuk\t\t\t: \tRp%.2f\n",beaMasuk);
			PPN=(0.1*((sum-500)+(1400*(sum-500))));
			printf("   Besar PPN\t\t\t\t: \tRp%.2f\n",PPN);
			if (NPWP =='y'){
				PPh=(PPN*0.075);
				printf("   Besar PPh\t\t\t\t: \tRp%.2f\n",PPh);
				besarPajak=(beaMasuk+PPN+PPh);
				printf("   =================================================================\n");
				printf("   |   Besaran Pajak Barang Anda\t|       Rp%.2f\t   |\n",besarPajak);
				printf("   =================================================================\n");
				}
			else if (NPWP =='n'){
				PPh=(PPN*0.15);
			   	printf("   Besar PPh\t\t\t\t: \tRp%.2f\n",PPh);
			   	besarPajak=(beaMasuk+PPN+PPh);
			   	printf("   =================================================================\n");
				printf("   |   Besaran Pajak Barang Anda\t|       Rp%.2f\t   |\n",besarPajak);
				printf("   =================================================================\n");
			}
			else
			{
			system("cls");
			printf("\n\t\t     TULIS NPWP SESUAI KETENTUAN!\n\n");
			main();
			}
		}
		else if (sum<=500){
			if (NPWP =='y'){
				system("cls");
   			printf("\n   ==================================================================");
			printf("\n\t\t  ANDA TIDAK PERLU BAYAR PAJAK BARANG\n");
			printf("   ==================================================================\n\n\n");
			}
			else if (NPWP =='n'){
			system("cls");
   			printf("\n   ==================================================================");
			printf("\n\t\t  ANDA TIDAK PERLU BAYAR PAJAK BARANG\n");
			printf("   ==================================================================\n\n\n");
			}
			else
			{
			system("cls");
			printf("\n\t\t     TULIS NPWP SESUAI KETENTUAN!\n\n");
			main();
			}
		}	
	printf("\n   Apakah anda ingin melanjutkan lagi? (y/n):");
	scanf("\n%c", &lanjut);
	if (lanjut =='y'){
		system("cls");
		printf("\n\n\n");
		main();
		}
	else if (lanjut =='n'){
	   	system("cls");
	   	printf("\n\n");
		printf("   ================================================================\n");
		printf("   |                                                              |\n");
		printf("   |                          Terima Kasih                        |\n");
		printf("   |                telah menggunakan aplikasi ini                |\n");
		printf("   |                                                              |\n");
		printf("   |                     Silahkan Tekan ENTER!                    |\n");
		printf("   |                                                              |\n");
		printf("   ================================================================\n\n\n\n\n");
		}
	else{
		system("cls");
		printf("\n\t\t\tMASUKKAN YANG BENAR!\n\n");
		main();
	}	
	return 0;
	}
}
	else if (input == '3'){
		system("cls");
		printf("\n\t\t\t   B A N T U A N\n\n");
		printf("Penjelasan Opsi:\n");
		printf("[1] Informasi Aplikasi \t= Informasi singkat mengenai aplikasi beserta \n\t\t\t  jenis barang yang terkena pajak\n");
		printf("[2] Mulai Penghitungan \t= Memulai penghitungan pajak barang\n");
		printf("[3] Bantuan \t\t= Memberikan bantuan kepada User\n");
		printf("[4] Keluar \t\t= Keluar program\n");
		printf("\n\n-  Tekan ENTER untuk eksekusi selanjutnya\n");
		printf("-  Untuk 'Jumlah Macam Jenis Barang', masukkan macam barang yang Anda beli");
		printf("\n-  Tekan (y) pada perintah 'Apakah anda ingin melanjutkan lagi?' untuk \n   kembali ke laman utama, ");
		printf("\n\n\n");
		main();
		}
	else if (input =='4'){
		system("cls");
		printf("\n\n");
		printf("   ================================================================\n");
		printf("   |                                                              |\n");
		printf("   |                          Terima Kasih                        |\n");
		printf("   |                telah menggunakan aplikasi ini                |\n");
		printf("   |                                                              |\n");
		printf("   |                     Silahkan Tekan ENTER!                    |\n");
		printf("   |                                                              |\n");
		printf("   ================================================================\n\n\n\n\n");
		}
	else{
		system("cls");
		printf("\n\t\t\tMASUKKAN YANG BENAR!\n\n");
		main();
	}	
	return 0;
}
