#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "5th.h"


int main(){
gaussian("gau1.dat", 1000000);
gaussian("gau2.dat", 1000000);
gaussianadd("gau1.dat","gau2.dat","gau3.dat",1000000);

return 0;}

