#pragma once
#include <iostream>

class Counter
{
private:
    int ctr;
public:
    Counter() : ctr(1)
    {};
    Counter(int ctr)
    {};
    void set_ctr(int c);
    int get_ctr();
    void inc();
    void dec();

};


