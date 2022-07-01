#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"
double variance(char* str,int Mean)
{
int i=0,c;
FILE *fp;
double x, temp=0.0;

fp = fopen(str,"r");
//get numbers from file
while(fscanf(fp,"%lf",&x)!=EOF)
{
//Count numbers in file
i=i+1;
//Add all numbers in file
temp = temp+x*x;
}
fclose(fp);
temp = temp/(i);
return temp;
}


int main(){
    double Mean = mean("uni.dat");

    double Variance=variance("uni.dat",Mean)-Mean*Mean;

printf("%f \n %f",Mean,Variance);
    return 0;
}