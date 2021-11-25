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

void printOX(){ //O X 쳐라 
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

void connect(treeNode * n1, treeNode * n2){ //연결 
	n1 = n2;
}


void home(){ //첫 화면 
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


int search(int n){ //순차탐색 
    int i;
    int arr[2]={1,2};
    for(i=0; i<=5; i++){
        if(n == arr[i])
            return i;
    }
    return -1;
}


int meat(treeNode *n2){ //고기 O 
	char two;
	while(1){
	textcolor(15);
    getchar(); 
    scanf("%c", &two);
    
	if(two == 'O'){//고기 O -> 익음 O  
    	treeNode* n4 = makeNode("\n\n├─────  매움  O / X 를 선택해주세용! ─────┤",NULL,NULL);
    	connect(n2 -> left, n4);
    	textcolor(14);
    	Sleep(1000);
    	printf("%s", n4->data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	textcolor(15);
    	
	 //매운지 체크 
		break; 
	}
	else if(two == 'X'){//고기 O -> 익음 X 
		treeNode* n5 = makeNode("\n\n├─────  풍성 O / X 를 선택해주세용! ─────┤",NULL,NULL);
		connect(n2 -> right, n5);
		textcolor(14);
		printf("%s", n5 -> data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	//새 함수 호출 풍성한지 체크 풍성하면~ 안 하면~ 
		break; 
	} 
	else{ 
		printOX();
	} 
}	
}


int notmeat(treeNode *n3){ //고기 X 
	char three;
	while(1){
	textcolor(15);
    getchar(); 
    scanf("%c", &three);
    
	if(three == 'O'){ //고기 X -> 얼큰 O  
    	treeNode* n6 = makeNode("\n\n├─────  매움  O / X 를 선택해주세용! ─────┤",NULL,NULL);
    	connect(n3 -> left, n6);
    	textcolor(14);
    	Sleep(1000);
    	printf("%s", n6->data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	textcolor(15);
    	//매운지 체크 매우면~ 안 매우면~ 
		break; 
	}
	else if(three == 'X'){//고기 X -> 얼큰 X 
		treeNode* n7 = makeNode("\n\n├─────  매움 O / X 를 선택해주세용! ─────┤",NULL,NULL);
		connect(n3 -> right, n7);
		textcolor(14);
		printf("%s", n7 -> data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	//새 함수 호출 매운지 체크 
		break; 
	} 
	else{ 
		printOX();
	} 
}	
}


int meal(){ // 고기 O X 선택 
	char one;
	char two;
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
    if(one == 'O'){//고기 O 
    	treeNode* n2 = makeNode("\n\n├─────  익음 O / X 를 선택해주세용! ─────┤",NULL,NULL);
    	connect(n1 -> left, n2);
    	textcolor(14);
    	Sleep(1000);
    	printf("%s", n2->data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	textcolor(15);
    	meat(n2);
		break; 
	}
	else if(one == 'X'){ //고기 X 
		treeNode* n3 = makeNode("\n\n├─────  얼큰 O / X 를 선택해주세용! ─────┤",NULL,NULL);
		connect(n1 -> right, n3);
		textcolor(14);
		printf("%s", n3 -> data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	notmeat(n3);
		break; 
	} 
	else{ 
		printOX();
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
    printf("       넹 알겠습니다!\n");
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