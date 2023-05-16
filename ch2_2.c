#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    if(rmdir("han") == -1) {
        perror("잘못되었어요");
        exit(-1);
    }
    printf("제거 완벽 성공\n");
}