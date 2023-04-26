#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100

void taoMang(int *a, int &n){
	printf("\nNhap gia tri n: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++){
		printf("\nNhap gia tri thu %d: ", i + 1);
		scanf_s("%d", &a[i]);
	}
}

void xuatMang(int *a, int &n){
	printf("\nGia tri cua mang vua nhap la: \n");
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
}

//Cau 1 a
bool kiemTraToanLe(int n){
	while (n != 0){				//1
		if ((n % 10) % 2 == 0)	//2
		{
			return false;		//3
		}
		n /= 10;				//4
	}
	return true;				//5
}

int demSoPTLe(int *a, int n){
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemTraToanLe(a[i]) == true)
		{
			dem++;
		}
	}
	return dem;
}

int main(){
	int a[MAX], n;
	taoMang(a, n);
	xuatMang(a, n);
	//Cau 1a
	printf("\nSo phan le trong mang la: %d", demSoPTLe(a, n));

	_getch();
	return 0;
}