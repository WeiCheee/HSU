#include<stdio.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int i, n, counter[10]={0};

    for(i=1; i<=10; i++){
        do{
            n = rand() % 10 + 1;
        }while(counter[n-1] != 0);
        printf("%d\n", n);
        counter[n-1]++;
    }
    return 0;
}
