#include <iostream>
#include <array>

template <typename T,std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept{
    return N;
}


int main(int arg,char** args){

    int keyValus[] = {1,3,7,9,11,22,35};

    int mappedVals[arraySize(keyValus)];

    std::cout<<sizeof(mappedVals)/sizeof(int)<<"\n";

    std::array<int,arraySize(keyValus)> arrs2;
    std::cout<<"arr size:"<<arrs2.size();
    return 0;
}