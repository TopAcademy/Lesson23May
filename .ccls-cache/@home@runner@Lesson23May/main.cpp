#include <iostream>
#include "Date.h"
using std::cout;
using std::endl;

int main()
{
    Date d = Date(18, 05, 2023);
    d.add_days(366);
    d.print_short();
}
