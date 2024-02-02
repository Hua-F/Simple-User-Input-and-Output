#include <iostream>
using namespace std;

int main() {
    int age;
        cout << "How old are you?" << endl; // Prints, and asks your age
            cin >> age; // User inputs age
    
    int nextDecade;
        nextDecade = 10 - (age % 10); // Divides the users age by 10 and takes the remainder of their age to calculate their next decade birthday
            cout << "There are " << nextDecade << " years until your next decade birthday" << endl; // Prints out when the users decade birthday is

    int whichDecade;
        whichDecade = (age + nextDecade) / 10; // Adds the users age to the result of nextDecade and divdes the total to find what decade of their life is
            cout << "You will then be in decade " << whichDecade << " of your life." << endl; // Prints out the decade
   
// Added if-else logics to add more flare
  
    if (age <= 17) { // if age is less than 17
        cout << "Kids birthdays should always be celebrated!" << endl;
      
    } else if (age >= 18 && nextDecade == 5) { // If age is greater or equal to 18 AND their next decade birthday is within 5 years
        cout << "You should throw a party!" << endl;
      
    } else if (nextDecade == 1 && whichDecade % 2 == 0) { // If user next decade birthday is within 1 year AND it is their decade of their life is even
        cout << "Plan a HUGE part for your decade birthday!" << endl;

    } else if (nextDecade == 1 && whichDecade % 2 != 0) { // If user next decade birthday is within 1 year AND it is their decade of their life is odd
        cout << "Plan a big party for your decade birthday!" << endl;

    } else { // If users birthday meets none of the other criterias
        cout << "Have fun with friends and family on your next birthday" << endl;
    }

    return 0;
}
