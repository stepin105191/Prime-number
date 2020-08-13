#include "Prime.h"


bool prime(int num)
{
    if (num<=1)
    {
        return false;
    }
    for (int c=2;c<num/2;c++)
    {
        if (num%c==0)
        {
            return false;
        }
    }
    return true;
}
