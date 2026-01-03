#include <stdio.h>

int main(){
    int O, P, N;
    scanf("%d %d %d", &O, &P, &N);
    
    int muatan;
    int found = -1;
    
    for (int i = 0; i < N; i++){
        scanf("%d", &muatan);
        
        if (found == -1) {
            int sisa_kursi = 11 - muatan;
            
            if (P <= sisa_kursi){
                found = i + 1;
            } else {
                P = P - sisa_kursi;
            }
        }
    }
    
    printf("%d\n", found);
    return 0;
}
