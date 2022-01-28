#include <stdio.h>
void display_scores(int *values, const int SIZE) {   //* -> []の意味 const -> 定数(途中で値が変わらない)
    for (int i=0; i<SIZE; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    return;
}

int main(){
    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90,80};
    int i, j, tmp;

    printf("scores = ");
    display_scores(scores, SIZE);

    for (i = 0;i < SIZE; i++) {
        for(j = i+1; j < SIZE; j++){
            if(scores[j] > scores[i]) {
                tmp = scores[i];
                scores[i] = scores[j];
                scores[j] = tmp;
            }
        }
    }
    printf("results = ");
    display_scores(scores, SIZE);
    return 0;
}