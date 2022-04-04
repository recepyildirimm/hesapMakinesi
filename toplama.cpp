#include <stdio.h>
int toplama(int a,int b);
int bolme(int a,int b);
int main(){
int sayi1,sayi2;
char islem;

printf("HESAP MAKINESI\n");
printf("Yapacaginiz islemi seciniz\n");
printf("TOPLAMA ISLEMI '+' \nBOLME ISLEMI '/' ");
scanf("%c",&islem);
switch(islem)
{
	case '+':
		printf("Toplama islemi icin 2 sayi giriniz \n");
		scanf("%d",&sayi1);
		scanf("%d",&sayi2);
		toplama(sayi1,sayi2);
		printf("Sonuc=%d",toplama(sayi1,sayi2));
		break;
	case '/':
		printf("Bolme islemi icin 2 sayi giriniz \n");
		scanf("%d",&sayi1);
		scanf("%d",&sayi2);
		toplama(sayi1,sayi2);
		if(sayi1==0||sayi2==0){
			printf("0'a bolme hatasi");
			break;
		}
		printf("Sonuc=%d",bolme(sayi1,sayi2));
		break;
}




}

int toplama(int a,int b){
	return a+b;
}

int bolme(int a,int b){
	return a/b;	
}
