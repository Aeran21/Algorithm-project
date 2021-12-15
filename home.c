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

int pung(treeNode *n5){ //고기 ㅇ 익음 X 풍성 고르는 곳 
	char four;
	while(1){
	textcolor(15);
    getchar(); 
    scanf("%c", &four);
    if(four == 'O'){//고기 O -> 익음 X  > pung O
    	treeNode* n8 = makeNode("고기 O -> 익음 X -> 풍성 O",NULL,NULL);
    	connect(n5 -> left, n8);
    	textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 초밥 간장게장 삼합 회 참치회");
    	Sleep(1000);
    	textcolor(15);
		break; 
	}
	else if(four == 'X'){//고기 O -> 익음 X > pung 
		treeNode* n9 = makeNode("고기 O -> 익음 X -> 풍성 X",NULL,NULL);
		connect(n5 -> right, n9);
		textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 멍게 해삼 개불 오징어회 간장새우 문어숙회 꽃새우 연어 육회");
    	Sleep(1000);
    	textcolor(15);
		break; 
		break; 
	} 
	else{ 
		printOX();
	} 
}
}

int hot1111(treeNode *n4){
	char five;
	while(1){
	textcolor(15);
    getchar(); 
    scanf("%c", &five);
    if(five == 'O'){//고기 O -> 익음 d  > 매움 ㅇ 
    	treeNode* n10 = makeNode("고기 O -> 익음 O -> 매움 O",NULL,NULL);
    	connect(n4 -> left, n10);
    	textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 닭발 매운치킨 찜닭 양념곱창 쭈구미 등갈비 해물탕 불족발 아구찜 조개탕");
    	Sleep(1000);
    	textcolor(15);
		break; 
	}
	else if(five == 'X'){//고기 O -> 익음 d > hot s
		treeNode* n11 = makeNode("고기 O -> 익음 O -> 매움 X",NULL,NULL);
		connect(n4 -> right, n11);
		textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 치킨 막창 양꼬치 탕수육 족발 양념갈비 오리고기 삼겹살 대하 보쌈 백숙 스테이크 대게");
    	Sleep(1000);
    	textcolor(15);
		break; 
		break; 
	} 
	else{ 
		printOX();
	} 
}
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
    	hot1111(n4); 
		break; 
	}
	else if(two == 'X'){//고기 O -> 익음 X 
		treeNode* n5 = makeNode("\n\n├─────  풍성 O / X 를 선택해주세용! ─────┤",NULL,NULL);
		connect(n2 -> right, n5);
		textcolor(14);
		printf("%s", n5 -> data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	pung(n5);
		break; 
	} 
	else{ 
		printOX();
	} 
}	
}

int hot2222(treeNode *n6){ //고기 ㄴ  얼큰 ㅇ 매움고르는 곳 
	char six;
	while(1){
	textcolor(15);
    getchar(); 
    scanf("%c", &six);
    if(six == 'O'){//고기 O -> 얼큰 ㅇ 매움  ㅇ  
    	treeNode* n12 = makeNode("고기 X -> 얼큰 O -> 매움 O",NULL,NULL);
    	connect(n6 -> left, n12);
    	textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 라면 짬뽕 부대찌개 매운탕");
    	Sleep(1000);
    	textcolor(15);
		break; 
	}
	else if(six == 'X'){//고기 O -> 익음 X > pung 
		treeNode* n13 = makeNode("고기 X -> 얼큰 O -> 매움 X",NULL,NULL);
		connect(n6 -> right, n13);
		textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 우동 해장국 순대국 설렁탕 라멘 만두국 쌀국수");
    	Sleep(1000);
    	textcolor(15);
		break; 
		break; 
	} 
	else{ 
		printOX();
	} 
}
}

int hot3333(treeNode *n7){ //고기 ㄴ  얼큰 ㅇ 매움고르는 곳 
	char seven;
	while(1){
	textcolor(15);
    getchar(); 
    scanf("%c", &seven);
    if(seven == 'O'){ 
    	treeNode* n14 = makeNode("고기 X -> 얼큰 X -> 매움 O",NULL,NULL);
    	connect(n7 -> left, n14);
    	textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 불닭볶음 떡볶이 비빔면 비빔밥 순대볶음 커리 양장피");
    	Sleep(1000);
    	textcolor(15);
		break; 
	}
	else if(seven == 'X'){
		treeNode* n15 = makeNode("고기 X -> 얼큰 X -> 매움 X",NULL,NULL);
		connect(n7 -> right, n15);
		textcolor(14);
    	Sleep(1000);
    	printf("\n 잠시만 기다려 주세용!");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	printf("\n .");
    	Sleep(1000); 
    	textcolor(13);
    	printf("\n 김밥 짜장면 햄버거 주먹밥 만두 냉면 전 팟타이 피자 파스타");
    	Sleep(1000);
    	textcolor(15);
		break; 
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
    	hot2222(n6);
		break; 
	}
	else if(three == 'X'){//고기 X -> 얼큰 X 
		treeNode* n7 = makeNode("\n\n├─────  매움 O / X 를 선택해주세용! ─────┤",NULL,NULL);
		connect(n3 -> right, n7);
		Sleep(1000);
		textcolor(14);
		printf("%s", n7 -> data);
    	Sleep(1000);
    	printf(" \n\n   └ > ");
    	hot3333(n7);
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
		Sleep(1000);
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
    printf("\n 잠시만 기다려 주세용!");
    Sleep(1000); 
    printf("\n .");
    Sleep(1000); 
    printf("\n .");
    Sleep(1000); 
    printf("\n .");
    Sleep(1000); 
    printf("\n 데이터가 아직 준비되지 않았어용 ㅠㅠ");
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