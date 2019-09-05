#include "gc_pointer.h"
#include "LeakTester.h"
#include <iostream>

int main()
{
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);

    //extra tests
    Pointer<int> q = p;
    Pointer<int> r(p);
    int a = 29;
    Pointer<int> s(&a);

    return 0;
}
