#include <stdio.h>
int main() {
    int n, i, bestIndex = 0;
    float rate[100];
    printf("Enter number of agents: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter success rate of agent %d: ", i+1);
        scanf("%f", &rate[i]);
        if (rate[i] > rate[bestIndex]) bestIndex = i;
    }

    printf("Agent %d has the highest priority.\n", bestIndex+1);
    return 0;
}
