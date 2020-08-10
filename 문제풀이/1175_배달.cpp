#include <stdio.h>

int N, M, ncur, mcur, cnum=2, min=0;
char line, arr[50][50] = {0, };

void left();
void right();
void up();
void down();

int main() {
	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++) {
		scanf("%c", &line);
		for(int j = 0; j < M; j++) {
			scanf("%c", &arr[i][j]);
//			printf("%c", arr[i][j]);
			if(arr[i][j] == 'S') ncur=i, mcur=j;
		}
	}
//	printf("ncur : %d, mcur : %d", ncur, mcur);
	
}

int left(ncur, mcur, min, cnum) {
	--mcur;
	if(mcur<0||cnum==0) return min;
	if(arr[ncur][mcur] == 'C') --cnum;
	else if(arr[ncur][mcur] == '#') return;
	else if(arr[ncur][mcur] == )
	right();
	up();
	down();
}
void right() {
	++mcur;
	if(mcur=M) return;
	if(arr[ncur][mcur] == 'C') --cnum;
	else if(arr[ncur][mcur] == '#') return;
	up();
	down();
	left();
}
void up() {
	--ncur;
	if(ncur<0) return;
	if(arr[ncur][mcur] == 'C') --cnum;
	else if(arr[ncur][mcur] == '#') return;
	down();
	left();
	right();
}
void down() {
	++ncur;
	if(ncur=N) return;
	if(arr[ncur][mcur] == 'C') --cnum;
	else if(arr[ncur][mcur] == '#') return;
	left();
	right();
	up();
}
