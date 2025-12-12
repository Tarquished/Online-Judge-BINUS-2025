#include <stdio.h>
#include <string.h>


void fibonacci (int n, char fib[][2001]){
	
	if (n == 0 || fib[n][0] != '\0'){
	return;
	}
	
	fibonacci(n - 1, fib);
	fibonacci(n - 2, fib);
	
	strcpy(fib[n], fib[n - 1]);
    strcat(fib[n], fib[n - 2]);
	
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        char S0[1001], S1[1001];
        int n;
        scanf("%d %s %s",  &n, S0, S1);

        char fib[1001][2001] = {0}; 

        strcpy(fib[0], S0); 
        strcpy(fib[1], S1);
        
		fibonacci(n, fib);

        printf("Case #%d: %s\n", i + 1, fib[n]);
    }

    return 0;
}
