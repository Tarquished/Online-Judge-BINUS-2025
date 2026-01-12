#include <stdio.h>
#include <string.h>

long long int score[500005];
char nama[500005][15];

int main(){
	int N;
	scanf("%d", &N);
	    
	for(int i = 0; i < N; i++){
        scanf("%lld", &score[i]);
	}
	    
	for(int i = 0; i < N; i++){
	    scanf("%s", nama[i]);
	}
	    
	long long int target;
	scanf("%lld", &target);
	
	int kiri = 0, kanan = N-1, found = -1;
	
	while (kiri<=kanan){
		int mid = kiri + (kanan-kiri)/2;
		
		if (score[mid] == target) {
			found = mid;
			break;
		}
		else if (score[mid] > target){
			kiri = mid+1;
		}
		else kanan = mid-1;
		
	}
	
	if (found != -1){
		int totalpart = N/4;
		
		int part = (found/totalpart)+1;
		printf("%d %s %d\n", found+1, nama[found], part);
	}
	else printf("-1 null -1\n");
	
}
