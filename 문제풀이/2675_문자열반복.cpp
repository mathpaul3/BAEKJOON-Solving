#include <stdio.h>

int main(){
	int T, R, j;
	char S[21];
	scanf("%d", &T);
	while (T) {
		for (int i = 0; i <21; i++) S[i] = NULL;	//S�迭 -1�� �ʱ�ȭ 
		
		scanf("%d", &R);
		scanf("%s", S);
		for (int i = 0; S[i] != NULL; i++) {		//S�迭 -1 ���� ������ ���鼭 R���� ��� 
			j = R;
			while (j) {
				printf("%c", S[i]);
				--j;
			}
			//printf(S[i] == -1 ? "Same" : "Different");
		}
		T--;
	}
}
