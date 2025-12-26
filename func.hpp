#pragma once
#include <cmath>
#include <iostream>
int sum(int a , int b){
    return a+b;
}
int sus(int a , int b){
    return a-b;
}
int mult(int a , int b){
    return a*b;
}
int div (int a, int b){
    return a/b;
}
int pit(int a ,int  b){
    return pow(pow(a,2)+pow(b,2),0.5);
}
double ceros1 (double a, double b, double c){
    return (-b+pow(pow(b,2)-4*a*c,0.5))/(2*a);
}
double ceros2 (double a,doubl b,double  c){
    return (-b-pow(pow(b,2)-4*a*c,0.5))/(2*a);
}
int kilo(int a){
    return a*1000;
}
double celcfah(double a){
    return (a*9/5)+32;
}
double celkel(double a){
    return a+273.15;
}
double prom(double a, double b){
    return a/b;
}


void deltex(){
    for(int i =0; i<10000; i++){

        std::cout<<"\n";
    }
}
