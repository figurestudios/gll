#include <iostream>
#include <gmpxx.h>
#include <string>
#include <stdlib.h>
#include <cstdlib>

time_t tstart = clock();
 
static bool lucaslehmer(mpz_class _p)
{
        tstart = clock();
        if(2 == _p) {
                return true;
        }
        else {
                mpz_class s(4);
                mpz_class div((mpz_class(1) << _p.get_ui()) - 1);
                for(mpz_class i(3); i <= _p; ++i) {
                        s =  (s * s - mpz_class(2)) % div;
                }
                return (s == mpz_class(0));
        }
}
 
int main(int argc, char *argv[], char *envp[]) {
        mpz_class p(std::atoi(argv[1]));

        if(lucaslehmer(p)) {
                std::cout << "p " << p.get_ui() << " returns a mersenne prime" << std::endl;
        } 
        else {
                std::cout << "p " << p.get_ui() << " does not return a prime" << std::endl;
        }

        clock_t tlast = clock() - tstart;
        std::cout << "time " << ((double)tlast) / CLOCKS_PER_SEC << "s" << std::endl;

        return 0;
}