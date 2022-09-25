#include <iostream>
#include <cmath>
using namespace std;
double Bfirst, Bsecond, Bthird, Bfourth, Bfifth, A, n, P, r;

int main() 
{
    cout << endl << "Amount borrowed: ";
    cin >> A;
    cout << endl;
    cout << endl << "Number of payments per year: ";
    cin >> n;
    cout << endl;
    cout << endl << "Amount paid per payment: ";
    cin >> P;
    cout << endl;
    cout << endl << "Annuel % Rate: ";
    cin >> r;
    cout << endl;
    Bfirst = (A * pow((1+ r/n), (n * 1))) - P * ((pow((1+ r/n), (n * 1)) - 1) / ((1+ r/n) - 1));
    Bsecond = (A * pow((1+ r/n), (n * 5))) - P * ((pow((1+ r/n), (n * 5)) - 1) / ((1+ r/n) - 1));
    Bthird = (A * pow((1+ r/n), (n * 10))) - P * ((pow((1+ r/n), (n * 10)) - 1) / ((1+ r/n) - 1));
    Bfourth = (A * pow((1+ r/n), (n * 20))) - P * ((pow((1+ r/n), (n * 20)) - 1) / ((1+ r/n) - 1));
    Bfifth = (A * pow((1+ r/n), (n * 30))) - P * ((pow((1+ r/n), (n * 30)) - 1) / ((1+ r/n) - 1));

    cout << fixed;
    cout.precision(2);
    
    cout << endl;
    cout << "Balance after 1 year: " << Bfirst << endl;
    cout << endl;
    cout << "Balance after 5 years: " << Bsecond << endl;
    cout << endl;
    cout << "Balance after 10 years: " << Bthird << endl;
    cout << endl;
    cout << "Balance after 20 years: " << Bfourth << endl;
    cout << endl;
    cout << "Balance after 30 years: " << Bfifth << endl;
    return 0;
}