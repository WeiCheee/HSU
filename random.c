#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));
    int i, j, isused, n[10];
    for(i=1; i<=10; i++){
        do{
            n[i-1] = rand() % 10 + 1;
            //isused = 0;
            for(j=1; j<i; j++){
               if(n[i-1] == n[j-1]){
                    //isused = 1;
                    break;
               }
            }
        }while(i!=j);
        printf("%d\n", n[i-1]);
    }

    return 0;
}
