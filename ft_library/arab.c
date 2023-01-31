#include <string.h>

const int   arabar[]  = {  1,   4,    5,   9,    10,  40,  50,   90,  100, 400,  500, 900,  1000};
const char *romanar[] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
 
char *arab2roman(unsigned short int arab) {
        static char roman[80];
        const int m = sizeof(arabar)/sizeof(int)-1, arabmax=arabar[m];
        const char romanmax=romanar[m][0];
        int i, n;
        if(!arab) {
                *roman=0;
                return roman;
        }
        i=0;
        while(arab>arabmax) {
                roman[i++] = romanmax;
                arab      -= arabmax;
        }
        n=m;
        while(arab > 0) {
                if(arab >= arabar[n]) {
                        roman[i++] = romanar[n][0];
                        if(n&1)
                                roman[i++] = romanar[n][1];
                        arab -= arabar[n];
                } else
                        n--;
        }
        roman[i]=0;
        return roman;
}

unsigned short int roman2arab(char *roman) {
        const int m = sizeof(arabar)/sizeof(int)-1;
        unsigned short int arab;
        int len, n, i, pir;
        len=strlen(roman);

        arab=0;
        n=m;
        i=0;
        while(n >= 0 && i < len) {
                pir=n&1;
                if(roman[i] == romanar[n][0] && (!pir || roman[i+1] == romanar[n][1])) {
                        arab += arabar[n];
                        i    += 1+pir;
                } else
                        n--;
        }
        return arab;
}
