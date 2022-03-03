#include <stdio.h>

void main() {
	int D;
	int d;
	int e;
	int f;
	printf("입력받은 값:");
	scanf_s("%d", &D);
	int i = 0;//배열이 어디까지 저장됐는지
	int l = 0;
	int n = 0;
	int M, N;
	int E[20];//팔진수 넣는 배열
	char S[20];//16진수 넣는 배열
	int B[32];//진수 넣는 배열
	int B2[32];//1의 보수 넣는 배열
	int B3[32]; //2의 보수 넣는 배열
	char H[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	

	if (D > 0) {
		d = D;

		do {
			M = d / 2; //몫
			N = d % 2; //나머지
			B[i] = N;
			i++;
			d = M;
		} while (M >= 2);
		B[i] = M;

		int K = i;
		printf("2진수:");//2진수 뒤에서 읽어서 출력.
		do {
			printf("%d", B[K]);
			K--;
		} while (K >= 0);
		printf("\n");

		e = D;
		do {
			M = e / 8; //몫
			N = e % 8; //나머지
			E[l] = N;
			l++;
			e = M;
		} while (M >= 8);
		E[l] = M;

		K = l; //만약 오류뜨면 K를 다른걸로 바꾸기.
		printf("8진수:");//8진수 뒤에서 읽어서 출력.
		do {
			printf("%d", E[K]);
			K--;
		} while (K >= 0);
		printf("\n");

		f = D;
		do {
			M = f / 16; //몫
			N = f % 16; //나머지
			S[n] = H[N];
			n++;
			f = M;
		} while (M >= 8);
		S[n] = H[M];

		K = n; //만약 오류뜨면 K를 다른걸로 바꾸기.
		printf("16진수:");//8진수 뒤에서 읽어서 출력.
		do {
			printf("%c", S[K]);
			K--;
		} while (K >= 0);
		printf("\n");




	}
	else {
		d = -D;
		do {
			M = d / 2; //몫
			N = d % 2; //나머지
			B[i] = N;
			i++;
			d = M;
		} while (M >= 2);
		B[i] = M; //2진수

		for (int t = 0; t <= i; t++) {
			B2[t] = 1 - B[t];//1의 보수
		}

		int C = 1; //캐리
		for (int t = 0; t <= i; t++) {
			B3[t] = 1;
			if (B2[t] == C) {
				B3[t] = 0;
			}
			C = B2[t] * C;
		} //2의 보수 구하기

		int K = i; ///********************
		printf("음수(2의 보수):");

		do {
			printf("%d", B3[K]);
			K--;
		} while (K >= 0);
		printf("\n");

	} //오류 없음 !


}