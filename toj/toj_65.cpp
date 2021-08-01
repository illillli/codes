#include <iostream>
#include <chrono>
#include <random>
using namespace std;
int main()
{
    random_device rd;

    mt19937::result_type seed = rd() ^ (
            (mt19937::result_type)
            chrono::duration_cast<chrono::seconds>(
                chrono::system_clock::now().time_since_epoch()
                ).count() +
            (mt19937::result_type)
            chrono::duration_cast<chrono::microseconds>(
                chrono::high_resolution_clock::now().time_since_epoch()
                ).count() );
    mt19937 gen(seed);
        
        mt19937::result_type n;
         while( ( n = gen() ) > mt19937::max() -
                                    ( mt19937::max() - 2 )%2 ){}
        
        cout << n % 2 << '\n';
    }
