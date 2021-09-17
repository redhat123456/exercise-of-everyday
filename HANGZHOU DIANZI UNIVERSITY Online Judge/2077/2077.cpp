#include <stdio.h>

long long int f[21];

int main(){
	int n, i;
	f[1] = 0;
	f[1] = 2;
	f[2] = 8;
	for(n = 3; n <= 20; n++){
		f[n] = f[n-1] * 3 + 2;
	}
	scanf("%d", &n);
	while(n--){
		scanf("%d", &i);
		printf("%lld\n", f[i] - 2 * f[i-1]);	
}
	
	return 0;
}
