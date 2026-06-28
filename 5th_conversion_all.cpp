#include <iostream>
#include <string> // Included to use the 'string' data type
using namespace std;

int dectobinary(int decNum) {
    int ans = 0, pow = 1;

    while (decNum > 0){
        int rem = decNum % 2;
        decNum /=2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;   //bianry form iif decimal number
} 

int bintodecimal(int binNum){
    int ans =0 , pow = 1;

    while (binNum > 0){
        int rem = binNum % 10;
        ans += rem * pow ;
        binNum /= 10;
        pow *= 2;
    }
    return ans ; //decimalformof any binary number
}

int main() {
    
    int var;
    cout<<"for dec to bin type 1, for bin to dec type 2 ok : ";
    cin >> var;
    if (var == 1){
        int decNum;
        cout << "enter the number whose binary digit is unknown : ";
        cin >>decNum;
    
        cout << "your binary no for the above no given is : ";
        cout << dectobinary(decNum);
    }
    else if (var==2){
        int binNum ;
        cout << "enter the number whose decimal noo is to be calculated : ";
        cin >> binNum;

        cout << " your decmal no fofr above no is given is : ";
        cout << bintodecimal(binNum);
    }
}
    
    