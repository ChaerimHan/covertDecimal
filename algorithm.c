#include <stdio.h>

void main() {
	int D;
	int d;
	int e;
	int f;
	printf("�Է¹��� ��:");
	scanf_s("%d", &D);
	int i = 0;//�迭�� ������ ����ƴ���
	int l = 0;
	int n = 0;
	int M, N;
	int E[20];//������ �ִ� �迭
	char S[20];//16���� �ִ� �迭
	int B[32];//���� �ִ� �迭
	int B2[32];//1�� ���� �ִ� �迭
	int B3[32]; //2�� ���� �ִ� �迭
	char H[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	

	if (D > 0) {
		d = D;

		do {
			M = d / 2; //��
			N = d % 2; //������
			B[i] = N;
			i++;
			d = M;
		} while (M >= 2);
		B[i] = M;

		int K = i;
		printf("2����:");//2���� �ڿ��� �о ���.
		do {
			printf("%d", B[K]);
			K--;
		} while (K >= 0);
		printf("\n");

		e = D;
		do {
			M = e / 8; //��
			N = e % 8; //������
			E[l] = N;
			l++;
			e = M;
		} while (M >= 8);
		E[l] = M;

		K = l; //���� �����߸� K�� �ٸ��ɷ� �ٲٱ�.
		printf("8����:");//8���� �ڿ��� �о ���.
		do {
			printf("%d", E[K]);
			K--;
		} while (K >= 0);
		printf("\n");

		f = D;
		do {
			M = f / 16; //��
			N = f % 16; //������
			S[n] = H[N];
			n++;
			f = M;
		} while (M >= 8);
		S[n] = H[M];

		K = n; //���� �����߸� K�� �ٸ��ɷ� �ٲٱ�.
		printf("16����:");//8���� �ڿ��� �о ���.
		do {
			printf("%c", S[K]);
			K--;
		} while (K >= 0);
		printf("\n");




	}
	else {
		d = -D;
		do {
			M = d / 2; //��
			N = d % 2; //������
			B[i] = N;
			i++;
			d = M;
		} while (M >= 2);
		B[i] = M; //2����

		for (int t = 0; t <= i; t++) {
			B2[t] = 1 - B[t];//1�� ����
		}

		int C = 1; //ĳ��
		for (int t = 0; t <= i; t++) {
			B3[t] = 1;
			if (B2[t] == C) {
				B3[t] = 0;
			}
			C = B2[t] * C;
		} //2�� ���� ���ϱ�

		int K = i; ///********************
		printf("����(2�� ����):");

		do {
			printf("%d", B3[K]);
			K--;
		} while (K >= 0);
		printf("\n");

	} //���� ���� !


}