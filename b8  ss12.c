#include <stdio.h>
int uoc(int a, int b) {
    int min = 0;
    if (a>b){
    	min=b;
	}else if(a<b){
		min=a;
	}
    int ucln = 1;
    for(int i=1; i<=min; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    return ucln;
}
int main() {
    int a, b;
    printf("Moi nhap gia tri thu nhat: ");
    scanf("%d", &a);
    printf("Moi nhap gia tri thu hai: ");
    scanf("%d", &b);
    int ucln = uoc(a, b);
    printf("ucln la %d\n", ucln);
    return 0;
}
