#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[20];
	int b, c, d, e;
	scanf("%s", a);
	b = strlen(a);
	for(int i = 0; i < b; i++){
		if(!isdigit(a[i])){
			scanf("%s", a);
		}
	}
	int num = 0;
	for(int j = 6; j <= 7; j++){
		num = num * 10 + (a[j] - 48);
	}
	if(num > 0 && num <= 31){
		printf("Tanggal lahirnya adalah: %d\n", num);
		printf("Gender: Laki-laki\n");
	}else if(num > 31 && num < 71){
		d = num - 40;
		printf("Tanggal lahirnya adalah: %d\n", d);
		printf("Gender: Perempuan\n");
	}
	return 0;
}
