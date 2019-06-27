/*
author : Anmol Tomer
email : anmol3540@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
    int tot_amt;
    cout << "Enter the total amount : ";
    cin >> tot_amt;
    if (tot_amt < 0)
    {
        cout << "Don't drink and pay! Am I a joke to you ? -_-''''''";
        exit(0);
    }
    else if (tot_amt > 0 && tot_amt < 100)
    {
        cout << "Sorry No Discount! Discounts are only applicable for orders above 100.";
        exit(0);
    }

    else if (tot_amt >= 100 && tot_amt <= 500)
    {
        float discount = 0.1 * tot_amt;
        cout << "Discount that you get is 10% which is : " << discount << endl;
        float final_amt = tot_amt - discount;
        cout << "Final amount that you have to pay is " << tot_amt << " - " << discount << " = " << final_amt << endl;
        cout << "Thanks for visiting. Visit again soon :) ";
    }
    else
    {
        float discount = 0.2 * tot_amt;
        cout << "Discount that you get is 20% which is : " << discount << endl;
        float final_amt = tot_amt - discount;
        cout << "Final amount that you have to pay is " << tot_amt << " - " << discount << " = " << final_amt << endl;
        cout << "Thanks for visiting. Visit again soon :) ";
    }

    return 0;
}