#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

void textcolor(int color_number)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color_number);
}

typedef struct treeNode{
	char *data;
	struct treeNode *left;
	struct treeNode *right;
} treeNode;

treeNode* makeNode(char *data, treeNode* leftNode, treeNode* rightNode){
	treeNode* root = (treeNode*) malloc (sizeof(treeNode*));
	root -> data = data;
	root -> left = leftNode;
	root -> right = rightNode;	
	return root;
}

void connect(treeNode * n1, treeNode * n2){
	n1 = n2;
}
void home(){
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
   Sleep(1000);
   printf("   └ > ");
   textcolor(15);
}


int search(int n){
    int i;
    int arr[2]={1,2};
    for(i=0; i<=5; i++){
        if(n == arr[i])
            return i;
    }
    return -1;
}

int meal(){
	char one;
    textcolor(14);
    printf("       당신은 식사 메뉴 추천을 선택하셨습니다.\n");
    Sleep(1000);
	printf("\n├─────  고기 O / X 를 선택해주세용! ─────┤");
    Sleep(1000);
    printf(" \n\n   └ > ");
    while(1){
    textcolor(15);
    getchar(); 
    scanf("%c", &one);
    treeNode* n1 = makeNode("고기", NULL, NULL);
    if(one == 'O'){
    	treeNode* n2 = makeNode("\n\n├─────  익음 O / X 를 선택해주세용! ─────┤",NULL,NULL);
    	connect(n1 -> left, n2);
    	textcolor(14);
    	Sleep(1000);
    	printf("%s", n2->data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
		break; 
	}
	else if(one == 'X'){
		treeNode* n3 = makeNode("\n\n├─────  얼큰 O / X 를 선택해주세용! ─────┤",NULL,NULL);
		connect(n1 -> right, n3);
		textcolor(14);
		printf("%s", n3 -> data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	//새 함수 호출
		break; 
	} 
	else{ 
	Sleep(1000);
    textcolor(14);
    printf("       다시 입력하세요!");
    textcolor(12);
    printf(" ※ O 혹은 X를 입력해주세요.\n");
   	Sleep(1000);
   	textcolor(14);  
  	printf("   └ > ");
    textcolor(15);
	} 
}
}

int cake(){
    textcolor(14);
    printf("       당신은 디저트 메뉴 추천을 선택하셨습니다.");
    Sleep(1000);
}

int main(){
   home();
   int a;
   int n;
   while(1){
    scanf("%d",&n);
   a = search(n);
   if(a>=0 && a<=1){
   	Sleep(1000);
    textcolor(14);
    printf("       넹 알겠습니다♡\n");
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
   	Sleep(1000);
    textcolor(14);
    printf("       다시 입력하세요!");
    textcolor(12);
    printf(" ※ 1 혹은 2를 입력해주세요.\n");
   	Sleep(1000);
   	textcolor(14); 
  	printf("   └ > ");
    textcolor(15);
   }
   }
}