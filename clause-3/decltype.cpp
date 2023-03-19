#include <iostream>
#include <deque>

template<typename Container,typename Index>
decltype(auto)
authAndAccess(Container&& c, Index i)
{
    // -===
    return std::forward<Container>(c)[i];
}

int main()
{
    std::cout<<"--class 3\n";

    std::deque<int> d = {1,2,3,3,5};

    authAndAccess(d,4) = 6;

    std::cout<<"deque 4:"<<d[4]<<"\n";


    return 1;
}