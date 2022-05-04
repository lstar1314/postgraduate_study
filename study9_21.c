#include <stdio.h>
void f1(int numbers[10]);
int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i;

    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    f1(numbers);


    return 0;
}

void f1(int numbers[10]){
    int x ;
    int y ;
    int temp ;
    for (x = 0;x < 10;x++){
        for(y = x;y < 10 ;y++){
            if(numbers[x] < numbers[y]){
                temp = numbers[x];
                numbers[x] = numbers[y];
                numbers[y] = temp;
            }
        }
    }
    for (x = 0;x < 10;x++){
        printf("%d ",numbers[x]);

    }

}
void f2(int numbers[10]){
	int x;
	int y;
	int temp;
	for (x = 0;x < n;x++){
		temp = 0;
		for (y = 0;y < 10;y++){
			if(){

			}
		}
	}
}
