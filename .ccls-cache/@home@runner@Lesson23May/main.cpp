#include <iostream>
#include "Date.h"
using std::cout;
using std::endl;

int main()
{
    Date d = Date(19, 03, 2020);
    cout << d.date_to_days() << endl;
}
