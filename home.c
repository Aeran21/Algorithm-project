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
   printf("┘ \n");
   textcolor(15);
}

int main(){
   home();
   int a;
   int n;
   while(1){
    scanf("%d",&n);
   a = search(n);
   if(a>=0 && a<=1){
    textcolor(14);
    printf("넹 알겠습니다♡\n");
    if(a == 0)
    {
        meal();
    }
    else if(a == 1)
    {
        cake();
    }
    break;
   }
   else{
    textcolor(14);
    printf("다시 입력하세요!\n");
    textcolor(15);
   }


   }

}

int search(int n)
{
    int i;
    int arr[2]={1,2};
    for(i=0; i<=5; i++){
        if(n == arr[i])
            return i;
    }
    return -1;
}

int meal()
{
    textcolor(14);
    printf("당신은 식사 메뉴 추천을 선택하셨습니다.");
}
int cake()
{
    textcolor(14);
    printf("당신은 디저트 메뉴 추천을 선택하셨습니다.");
}
