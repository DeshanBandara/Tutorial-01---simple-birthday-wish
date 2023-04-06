#include <wchar.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include"MMSystem.h"
#include<Windows.h>
#include<iostream>
using namespace std;

void delay()
{
	for(int i =0; i<1000; i++)
	for(int j =0; j<3000; j++)
	{
		
	}
}
void delay1()
{
	for(int i=0; i<10000; i++)
	for(int j=0; j<3000; j++)
	{
		
	}
}
void ChangeColor()
{
	system("COLOR 8"); delay1();
	system("COLOR D"); delay1();
	system("COLOR 5"); delay1();
	system("COLOR B"); delay1();

}
int main(void)
{
	PlaySound(TEXT("HappyBirthday.wav"), NULL, SND_SYNC);
	char *locale=setlocale(LC_ALL," ");
	FILE *in=fopen("Happy_Bithday.txt","r");
	wint_t c;
	while((c=fgetwc(in))!=WEOF)
	{
		if(c!=' ')
		delay();
		putwchar(c);
	}
	fclose(in);
	while(1)
	{
		ChangeColor();
		
	}
}











