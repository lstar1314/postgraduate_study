#include <stdio.h>
int f(int);
int main() {
    int n ;
    scanf("%d",&n);
    printf("%d\n",f(n));

    return 0;
}
int f(int n){
    switch (n){
        case 2 :return 1;
        case 3 :return 1;
        case 4 :return 1;
    }
    return  f(n-2) + f(n-3);
}
