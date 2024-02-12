#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float TPR;
    float FPR;
    float Score;
    cout << "Enter the True positive Rate: ";
    cin >> TPR;
    cout << "Enter the False Positive Rate: ";
    cin >> FPR;
    Score = 1 - sqrt(pow(1-TPR,2)+ pow(FPR,2));
    cout << "The Score is: "<< Score;
    return 0;

}
