#include <iostream>
#include <vector>
#include "Savings_Account.h"
#include "Account_Util.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "I_Printable.h"

using namespace std;

//void print(const I_Printable &obj) {
  //  std::cout << obj << std::endl;
//}

int main() {

    cout.precision(2);
    cout << fixed;


    Account *s1 = new Trust_Account();
    Account *s2 = new Savings_Account("Bill", 3000);
    Account *s3 = new Checking_Account("Lay", 5000);


    vector <Account *> acc {s1,s2, s3};

    display(acc);
    deposit(acc,1000);
    withdraw(acc, 100);

       delete s1;
       delete s2;
       delete s3;

    return 0;
}
