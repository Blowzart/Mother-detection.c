#include <stdio.h>
#include <stdlib.h>

long int weight;
long int height;
long int bmi;
long int mBmi;


int main() {
    printf("Enter the weight in kg of the object you want to detect: ");
    scanf("%li", &weight);
    printf("Enter the height of said object in cm here: ");
    scanf("%li", &height);

    //  For some reason here the program fails
    
    // Problem, can't have somebody put a weight over 100
    bmi = (weight / ( (height / 100) * (height / 100)));



    printf("Enter your weight in kg here: ");
    scanf("%li", &weight);
    printf("Enter your height in cm here: ");
    scanf("%li", &height);

    // Heres where we calculate mBMI but this time no instant deletion and cryptic shit like in CMED

    mBmi = (weight / ( (height / 100) * (height / 100)) * 2);

    // Here we get mBmi its just your bmi x 2 because that is how large we assume your mother is we then check if this object is your mother or atleast close because our calculations could be wrong
    

    if (bmi < (mBmi - 5) ) {
        printf("This is your mother with a bmi of %li", mBmi);

    }

    else {
        printf("This is not your mother with a bmi of %li", mBmi);

    }

    return 0;

}