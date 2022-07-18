#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--) {
	    int A,B,C,d;
	    scanf("%d %d %d",&A,&B,&C);
	    d=A+B+C;
	    if(d==180) {
	        printf("YES\n");
	    }
	    else {
	        printf("NO\n");
	    }
	}
	return 0;
}
