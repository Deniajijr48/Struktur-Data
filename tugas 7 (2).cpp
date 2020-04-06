#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10
using namespace std;
typedef struct {
    int data[MAX];
    int head;
    int tail;
    } antri;
    antri antrian;
void Create(){

antrian.head=antrian.tail=-1;
}
int IsEmpty(){
if(antrian.tail==-1)
 return 1;
else
 return 0;
}
int IsFull(){
if(antrian.tail==MAX-1)
 return 1;
else
 return 0;
}
void Enantri(int data){
 int no=1;
 if(IsEmpty()==1){
 antrian.head=antrian.tail=0;
 antrian.data[antrian.tail]=data;
 cout<<data<<" masuk antrian ke-"<<no;
 }else{
 if(IsFull()==0){
 antrian.tail++;
 antrian.data[antrian.tail]=data;
 if(antrian.tail==0)

 no=no+1;
 else
 no+=antrian.tail;
 cout<<data<<" masuk antrian ke-"<<no;
 }else{
 cout<<"data full\n";
 }
 }
}
int Deantri(){
 int i;
 int e = antrian.data[antrian.head];

 for(i=antrian.head;i<=antrian.tail-1;i++){
 antrian.data[i] = antrian.data[i+1];

 }
 antrian.tail--;
 return e;
}
void Clear(){
 antrian.head=antrian.tail=-1;
 cout<<"data clear";
}
void Tampil(){
 if(IsEmpty()==0){
 for(int i=antrian.head;i<=antrian.tail;i++){

 cout<<antrian.data[i];
 }
 }else{
 cout<<"data kosong!\n";
 }
}
void oprasidata(int pill){

 int jum=0;
 int b=antrian.tail+1;

 float avg;

 if(IsEmpty()==0){
 for(int i=antrian.head;i<=antrian.tail;i++){
 jum=jum+antrian.data[i];
 }
 avg=jum/b;
 switch(pill){
 case 1:
 cout<<"jumlah datanya ="<<jum;
 break;
 case 2:
 cout<<"Rata-rata datanya ="<<avg;
 break;
 case 3:
 cout<<"banyak datanya ="<<antrian.tail+1;
 break;
 default:
 break;
 }
 }else{
 cout<<"data kosong!\n";
 }
}
int main(){
 int pil;
 int data;
 Create();

 do{
 system ("CLS");

 cout<<"1. Enqueue\n";
 cout<<"2. Dequeue\n";
 cout<<"3. Tampil\n";
 cout<<"4. bersihkan\n";
 cout<<"5. Banyaknya data\n";
 cout<<"6. Jumlah data\n";
 cout<<"7. Rata-rata\n";
 cout<<"8. Exit\n";
 cout<<"Pilihan = ";
 cin>>pil;
 switch(pil){
 case 1:
 if(IsFull()==0){
 cout<<"Data = ";
 cin>>data;
 }
 Enantri(data);
 break;
 case 2:
 cout<<"Elemen yang keluar :"<<Deantri();
 break;
 case 3:
 Tampil();
 break;
 case 4:
 Clear();
 break;
 case 5:
 oprasidata(3);

 break;
 case 6:
 oprasidata(1);

 break;
 case 7:
 oprasidata(2);

 break;
 case 8:
 return(0);
 break;
 default:
 cout<<"silahkan masukkan nomer yang sudah tersedia";
 break;
 }
 getch();
 } while(pil!=8);
}
