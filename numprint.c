#include <stdio.h>

int inputnum() {
    
    int num = 0, t = 0;
    while (1) {
        printf("줄의 개수를 입력하세요. ");
        t = scanf("%d", &num);
        if (t != 1) {
            printf("\n숫자를 입력하세요.\n");
            while (getchar() != '\n');
        } else {
            break;
        }
    }
    return num;
}

void numprint(int e, int b) {
    
    int n = 1;
    for (int i = 0; i < e; i++) {
        if (b != 0) {
            for (int k = b ; k > 0; k--) {
            printf("  ");
            }
        }
        b--;
        for (int j = 0; j < i + 1; j++) {
        printf("%3d ", n);
        n++;
        }
        printf("\n");
    }
}

void main()
{   
    int a = inputnum();
    numprint(a, a);
}
