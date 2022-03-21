#include <iostream>
#include <string.h>
using namespace std;
struct VIDEO {
	char TEN[100] ;
	char THELOAI[100] ;
	char DAODIEN[100] ;
	char DVNAM[100] ;
	char DVNU[100] ;
	int NAM;
	char HANG[100] ;
};
void nhap(VIDEO A[], int &n);
void nhap1video(VIDEO &x);
void xuat1video(VIDEO x);
void timkiemLoai(VIDEO x[], int n);
void timkiemDV(VIDEO x[], int n);
void timkiemDD(VIDEO x[], int n);
int main()
{
	VIDEO A[1000];
	int n;
	nhap(A, n);
	timkiemLoai(A, n);
	timkiemDV(A, n);
	timkiemDD(A, n);

	

	return 0;
	
}
void nhap(VIDEO A[], int &n){
	cout << "Nhap so luong phim: "; cin >> n;
	for(int i=0; i<n; i++){
			fflush(stdin);
		cout << "\nNhap thong tin VIDEO thu " << i+1;
		nhap1video(A[i]);
}}
void timkiemDD(VIDEO x[], int n){
			char DD[100];
	cout << "Nhap ten DAO DIEN can tim: "; gets(DD);
	for(int i =0; i<n; i++){
	
		if(strcmp(x[i].DAODIEN, DD)==0){
			cout << endl;
			xuat1video(x[i]);
			}
		}
}
void timkiemDV(VIDEO x[], int n){
		char DV[100];
	cout << "Nhap ten DV NAM can tim: "; gets(DV);
	for(int i =0; i<n; i++){
	
		if(strcmp(x[i].DVNAM, DV)==0){
			cout << endl;
			xuat1video(x[i]);
			}
		}
	}
void timkiemLoai(VIDEO x[], int n){
	char TK[100];
	cout << "Nhap loai can tim: "; gets(TK);
	for(int i =0; i<n; i++){
	
		if(strcmp(x[i].THELOAI, TK)==0){
			cout << endl;
			xuat1video(x[i]);
			}
		}
	}
void nhap1video(VIDEO &x){
	fflush(stdin);
	cout << "\nNhap ten phim: ";
	gets(x.TEN);
	cout << "Nhap the loai: ";
	gets(x.THELOAI);
	cout << "Nhap dao dien: ";
	gets(x.DAODIEN );
	cout << "Nhap DV Nam chinh: ";
	gets(x.DVNAM);
	cout << "Nhap DV Nu chinh: ";
	gets(x.DVNU);
	cout << "Nhap nam san xuat: ";
	cin >> x.NAM;
	cin.ignore();
	cout << "Nhap hang: ";
	gets(x.HANG);
	}
void xuat1video(VIDEO x){
	cout << "Ten phim: " << x.TEN <<endl;
	cout << "The loai: " << x.THELOAI<<endl;
	cout << "Dao dien: " << x.DAODIEN <<endl;
	cout << "Nam chinh: " <<x.DVNAM <<endl;
	cout << "Nu chinh: " << x.DVNU <<endl;
	cout <<"Nam san xuat: " <<x.NAM <<endl;
	cout <<"Hang san xuat: " <<x.HANG <<endl;
	}
