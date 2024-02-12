#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    float TPR; // Assigning a float to TPR
    float FPR;// Assigning a float to FPR
    float Score;// Assigning a float to the Score
    float BestScore=0; // Assigning a float to the Best Score
    int testCount=1; // Declaring a variable to the test count
    int BesttestCount; // Assigning an integer to the Best Test Count
    while (true){ // Loop valid until the TPR and FPR aren't both negative
    testCount=testCount; // Assigning the test count's value
        while(true)// Loop until valid TPR is entered
        {cout<< "Please enter the Diagnostic Test's True Positive Rate" << endl; // Asking user for a TPR value
        cin >> TPR;
        if (!cin.good()) //Statement will implement incase a string value is entered in place of a numeric value
            {cout << "Warning: invalid input to True Positive Rate. Please enter a numeric input." << endl; // Display the warning incase a string value in entered
            cin.clear(); // Clear the terminal
            cin.ignore(100, '\n'); // Ignore the next characters in the terminal
        }
        else if (TPR>1) // Statement will implement incase a value greater than 1 is entered for the TPR
        {
            cout<< "Warning: invalid input to True Positive Rate. Please enter an input <=1." << endl;
            cin.clear(); 
            cin.ignore(100, '\n');
        }
         else if (TPR<0) //Statement will implement incase a value less than 0 is entered for the TPR
        {
            break;
        }
        else{ //Statement will implement for all other cases
            break;
        }
    }
    while(true)// Loop until valid FPR is entered
        {cout<< "Please enter the Diagnostic Test's False Positive Rate" << endl; // Asking user for an FPR value
        cin >> FPR;
        if (!cin.good()) //Statement will implement incase a string value is entered in place of a numeric value
        {
            cout << "Warning: invalid input to False Positive Rate. Please enter a numeric input." << endl; // Display the warning incase a string value in entered
            cin.clear();
            cin.ignore(100, '\n');
        }
        else if (FPR>1)// Statement will implement incase a value greater than 1 is entered for the FPR
        {
            cout<< "Warning: invalid input to False Positive Rate. Please enter an input <=1." << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
         else if (FPR<0)//Statement will implement incase a value less than 0 is entered for the TPR
        {
            break;
        }
        else{//Statement will implement for all other cases
            break;
        }
    }
    if (TPR<0 && FPR<0){// Implementing the statement incase both TPR and FPR are less than 0
    break;
    }
    Score= 1 - sqrt(pow(FPR, 2) + pow(1 - TPR, 2)); // Calculating the value of Accuracy Score
    cout << "Diagnostic Accuracy Score for test "<< testCount<< " is " << Score << endl; // Displaying the value of the Accuracy Score
    if(Score>BestScore) // Comparing the value of the currrent score with best score which is set to -1
    { 
        BestScore=Score; // Substituting the value of the Score in the Best Score
        BesttestCount=testCount; // Substituing the value of Test Count in the best Test Count
    }
    testCount ++;   //increase the test count number by 1
    }
    if (TPR<0 && FPR<0) // Loop will work if both TPR and FPR arr negative
    {
        cout<< "Diagnostic Test " << BesttestCount << " has the best accuracy score of "<< BestScore <<endl; // Displaying the final statement
        cout<< "Exiting the program"<< endl; // Displaying error statement
    return 0;
    }
return 0;
}
