#include<stdio.h>
#pragma warning(disable:4996)

//코드업 1001 문제 풀이
//int main() {
//	printf("Hello");
//	return 0;
//}

//코드업 1002 문제 풀이 (띄어쓰기 출력)
//int main() {
//	printf("Hello World");
//	return 0;
//}

//코드업 1003 문제 풀이 (엔터 출력)
//int main() {
//	printf("Hello\nWorld");
//	return 0;
//}

//코드업 1004 문제 풀이 (작음따옴표 출력) (작음따옴표 앞에는 \를 붙이지 않아도 출력된다)
//int main() {
//	printf("'Hello'");
//	return 0;
//}

//코드업 1005 문제 풀이 (큰따옴표 출력) (큰따옴표 앞에는 \를 붙이지 않으면 제대로 출력이 안된다)
//int main() {
//	printf("\"Hello World\"");
//	return 0;
//}

//코드업 1006 문제 풀이 ("!@#$%^&*()" 출력하기) (printf로 %를 출력하려면 %%라고 쳐야한다)
//int main() {
//	printf("\"!@#$%%^&*()\"");
//	return 0;
//}

//코드업 1007 문제 풀이 ("C:\Download\hello.cpp" 출력하기) (%와 마찬가지로 \도 출력하기 위해선 \\라고 쳐야 한다)
//int main() {
//	printf("\"C:\\Download\\hello.cpp\"");
//	return 0;
//}

//코드업 1008 문제 풀이 (유니코드 사용해서 문자 출력하기) (와우 구글링 없이 불가능)
//int main() {
//	printf("\u250c\u252c\u2510\n\u251c\u253c\u2524\n\u2514\u2534\u2518");
//	return 0;
//}

//코드업 1010 문제 풀이 (정수를 입력하면 그대로 똑같은 정수 출력)
//int main() {
//	int n;
//	scanf("%d",&n);
//	printf("%d",n);
//	return 0;
// }

//코드업 1011 문제 풀이 (문자 입력하면 문자 출력)
//int main() {
//	char x;
//	scanf("%c", &x);
//	printf("%c",x);
//	return 0;
// }

//코드업 1012 문제 풀이 (실수를 입력하면 그대로 출력)
//int main() {
//	float x;
//	scanf("%f", &x);
//	printf("%f", x);
//	return 0;
//}

//코드업 1013 문제 풀이 (정수형 2개를 입력받아 출력)
//int main() {
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("%d %d", a, b);
//    return 0;
//}

//코드업 1014 문제 풀이 (입력한 문자 두개의 위치를 바꿔서 출력)
//int main() {
//    char x, y;
//    scanf("%c %c", &x, &y);
//    printf("%c %c", y, x);
//    return 0;
//}

//코드업 문제 1015 풀이 (입력한 실수를 소수점 2번째 자리까지 출력) (%.2f는 소수점 2번째 자리까지 출력하는 코드)
//int main() {
//    float x;
//    scanf("%f", &x);
//    printf("%.2f", x);
//}

//코드업 문제 1017 풀이 (정수 1개를 받아 3번 출력하기) (a랑 %d랑 세개씩 적어줘야 된다!)
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d %d %d",a,a,a);
//	return 0;
//}

//코드업 문제 1018 풀이 (시간 입력받아서 그대로 출력하기)
//int main() {
//	int h, m;
//	scanf("%d:%d", &h, &m);
//	printf("%d:%d", h, m);
//	return 0;
//}

//코드업 문제 1019 풀이 (년, 월, 일을 입력받아 지정된 형식으로 출력하는 연습을 해보자. 한자리를 입력하면 앞에 0이 붙도록) (%02d를 사용하면 한자리만 입력해도 앞에 자동으로 0이 붙음)
//int main() {
//	int y, m, d;
//	scanf("%d.%d.%d", &y, &m, &d);
//	printf("04%d.%02d.%02d", y, m, d);
//	return 0;
//}

//코드업 문제 1020 풀이 (주민번호 입력받아 형태 바꿔 출력하기)
//int main() {
//	int x,y;
//	scanf("%d-%d", &x, &y);
//	printf("%06d%07d", x, y);
//	return 0;
//}

//코드업 문제 1021 풀이 (단어 1개 입력받아 그대로 출력하기)
//int main() {
//	char data[51]="";
//	scanf("%s", &data);
//	printf("%s",data);
//	return 0;
//}

//코드업 문제 2022 풀이 (문장 1개 입력받아 그대로 출력하기) (fgets는 문장의 공백도 포함된다. stdin은 키보드에서 입력한걸 받아간다)
//int main() {
//	char data[2021];
//	fgets(data, 2000, stdin);
//	printf("%s", data);
//	return 0;
//}

//코드업 문제 1023 풀이 (실수를 입력받아 정수부분과 소수점부분 위아래로 나누기)(구글링함, int가 아니라 float로 시도하다 실패)
//int main() {
//	int a,b;
//	scanf("%d.%d",&a,&b);
//	printf("%d\n%d",a,b);
//	return 0;
//}

