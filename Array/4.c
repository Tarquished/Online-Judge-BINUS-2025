#include <stdio.h>
typedef long long ll; 

int main() {
    int T;
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++){
        int N, M;
        
        scanf("%d %d", &N, &M);
        
        ll weights[N][M];
        ll max_total_weight = 0;
        
        for (int i = 0; i < N; i++){
            for (int j = 0; j < M; j++){
                scanf("%lld", &weights[i][j]);
            }
        }
        for (int i = 0; i < N; i++){ 
            ll max_child_weight = 0;
            
            for (int j = 0; j < M; j++){ 
                if (weights[i][j] > max_child_weight) {
                    max_child_weight = weights[i][j];
                }
            }
            
            max_total_weight += max_child_weight;
        }
        
        printf("Case #%d: %lld\n", i, max_total_weight);
    }
    
    return 0;
}
