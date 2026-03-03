#include <stdio.h>

int main() {
    float totalScore, overs, runRate, percentage;

    printf("Enter total score: ");
    scanf("%f", &totalScore);

    printf("Enter total overs: ");
    scanf("%f", &overs);

    runRate = totalScore / overs;
    percentage = (runRate / 10) * 100;   // assuming 10 is ideal run rate

    printf("Run Rate = %.2f\n", runRate);
    printf("Winning Percentage = %.2f%%\n", percentage);

    if (percentage < 50)
        printf("Prediction: Opponent team can win.");
    else if (percentage == 50)
        printf("Prediction: Equal chance for both teams.");
    else
        printf("Prediction: Batting team can win.");

    return 0;
}
