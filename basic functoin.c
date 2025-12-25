#include<stdio.h>
void greet(){
    printf("hello world\n");
    printf("  hii\n");
    return;
}
int main(){
    for(int i=1;i<=10;i++){
        printf("%d:",i);
        greet();
    }
return 0;
}