#include <stdio.h>

typedef struct{
	char nama[105];
	int angka;
}data;
data d[105];

int main(){
	int z;
	scanf("%d", &z);
	for (int i = 0; i < z; i++){
		scanf("%d", &d[i].angka);
	}
	
	for (int i = 0; i < z; i++){
		scanf(" %s", &d[i].nama);
	}
	
	int saya, sepupu;
	char sayaString[105], sepupuString[105];
	scanf("%d %s %d %s", &saya, sayaString, &sepupu, sepupuString);
	
	int a, b;
	for (int i = 0; i < z; i++){
		if (d[i].angka == saya) a = i;
		if (d[i].angka == sepupu) b = i;
	}
	printf("%d %d %s %s\n", a+1, b+1, d[a-1].nama, d[b+1].nama);
	
}
