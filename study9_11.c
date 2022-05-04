#include <stdio.h>

int main() {
    int n;
    int k;
    int numbers[1000001];
    int m;
    int i;
    int j;
    int mid;
    int begin ;
    int end ;

    // 反复读入数字和查找数字的数量
    while (scanf("%d%d", &n, &k) != EOF) {
        
        // 读入给定的数字
        for (i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
        }

        for (j = 0; j < k; j++) {
            // 读入待查找的数字，
            scanf("%d", &m);
            
            // 请在下面完成查找读入数字的功能
            begin = 0;
            end = n -1;
            if(j != 0){
                printf(" ");
            }
            while (1==1){
                if(numbers[begin] ==m){
                    printf("%d",begin+1);
                    break;
                }else if(numbers[end] == m){
                    printf("%d",end+1);
                    break;
                }else if(begin >= end -1){
                    printf("0");
                    break;
                }else {
                    mid = (begin + end )/2;
                    //printf("mid:%d \n",mid);
                    if(numbers[mid] >= m){
                        end = mid;
                    }else{
                        begin = mid;
                    }
                }
            }
        }

    }
    return 0;
}
