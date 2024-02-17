#include<iostream>
using namespace std;
// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;// f=c*(9/5)+32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15; //  k=c+273
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9; //c=(f-32)*5/9
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15; 
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}





int main(){
    double temperature;
    char originalunit;
    cout<<"Enter the temperature value:";
    cin>>temperature;
    cout<<"enter the original unit(C, F,  K):";
    cin>>originalunit;
    switch(originalunit){
        case 'C':
           cout<<"equivalnet in fehrenite:"<<celsiusToFahrenheit(temperature)<< "F"<<endl;
           cout<<"eequivalent in kelvin:"<<celsiusToKelvin(temperature)<<"K"<<endl;
           break;

        case 'F':
           cout<<"equivalnet in celcius:"<<fahrenheitToCelsius(temperature)<< "C"<<endl;
           cout<<"eequivalent in kelvin:"<<fahrenheitToKelvin(temperature)<<"K"<<endl;
           break;

        case 'K':
           cout<<"equivalnet in celcius:"<<kelvinToCelsius(temperature)<< "C"<<endl;
          cout<<"equivalent in FEHRENITE:"<<kelvinToFahrenheit(temperature)<<"F"<<endl;

           break;  
        default:
             cout<<"invalid unit entered.Please use C, F or K for the conversion."<<endl;
             break;
    }
    return 0;
}

         




