#include <stdio.h>
#include <windows.h>

void textcolor(int color_number)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_number);
}

int home(){
	textcolor(14);
	printf("┌───  결정장애 커플들을 위한 ♡♡추천 ───┐ \n│                                        │  \n│ ");
	textcolor(15);
	printf("  1. 식사 메뉴 추천");
	textcolor(14);
	for(int i=0; i<=19; i++){
		printf(" ");
	}
	printf("│ \n│ ");
	textcolor(15);
	printf("  2. 디저트 메뉴 추천");
	for(int i=0; i<=17; i++){
		printf(" ");
	}
	textcolor(14);
	printf("│ \n│                                        │  \n└");
	for(int i=0; i<=39; i++){
		printf("─");
	}
	printf("┘ ");
}

int main(){
	home();
}