#include <stdio.h>
int toplama(int a,int b);
int main(){
int sayi1,sayi2;

printf("HESAP MAKINESI\n");
//printf("Yapacaðýnýz iþlemi secin\n");
//printf("Toplama iþlemi için 1 giriniz ");
printf("Toplama islemi icin 2 sayi giriniz \n");

scanf("%d",&sayi1);
scanf("%d",&sayi2);
printf("Sonuc=%d",toplama(sayi1,sayi2));
}

int toplama(int a,int b){
	return a+b;
}
