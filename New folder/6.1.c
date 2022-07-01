#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "6.h"

int main(){
uniform_Bernolli("ber6.dat", 1000000);
gaussian("gau6.dat",1000000);
int A=5;//A=5dB
var_Y("ber6.dat","gau6.dat","Var_Y.dat",1000000,A);


    return 0;
}