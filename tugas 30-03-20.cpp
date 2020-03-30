#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<iostream>
#include<windowsx.h>

    char balik(char x[50]);
    char cek(char y[50],char z[50]);
int main()
{
    char m[50],o[50];
    printf("Masukkan kalimat : "); gets(m);
    strcpy(o,m);
balik(o);
cek(m,o);
getch();
    system("cls");
    Sleep(1000);
    printf("Masukkan kalimat : "); gets(m);
    strcpy(o,m);
balik(o);
cek(m,o);
getch();
}
    char balik(char x[50])
{
strrev(x);
}
    char cek(char y[50],char z[50])
{
if(strcmp(y,z)==0)
{
    printf("\nKalimat tersebut adalah palindrom\n\n");

}
else
{
    printf("\nKalimat tersebut adalah bukan palindrom\n\n");
}
 }
