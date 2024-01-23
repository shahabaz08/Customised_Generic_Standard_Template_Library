#include<iostream>
#include "CGSTL.h"
using namespace std;

int main(){

    SinglyLinearList<int>s1;

    s1.InsertFirst(11);
    s1.InsertFirst(21);
    s1.InsertFirst(51);

    s1.Display();

    return 0;
}