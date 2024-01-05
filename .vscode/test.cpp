#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
//히히 여기 추가했지롱

class Base_Calculator {
    long N, B;
    char* B_Base;
public:
    Base_Calculator(){
        B_Base = new char[100];
    }
    void setdata();
    void print_B_Base();
    ~Base_Calculator(){
        delete[] B_Base;
    }
};

void Base_Calculator::setdata(){
    cin >> N >> B;
    long remainder;
    long Qutient = N;
    long count=0;
    while(1){
        
        remainder = Qutient % B;
        switch(remainder){
            case 0:
                B_Base[count] = '0';
                break;
            case 1:
                B_Base[count] = '1';
                break;
            case 2:
                B_Base[count] = '2';
                break;
            case 3:
                B_Base[count] = '3';
                break;
            case 4:
                B_Base[count] = '4';
                break;
            case 5:
                B_Base[count] = '5';
                break;
            case 6:
                B_Base[count] = '6';
                break;
            case 7:
                B_Base[count] = '7';
                break;
            case 8:
                B_Base[count] = '8';
                break;
            case 9:
                B_Base[count] = '9';
                break;
            case 10:
                B_Base[count] = 'A';
                break;
            case 11:
                B_Base[count] = 'B';
                break;
            case 12:
                B_Base[count] = 'C';
                break;
            case 13:
                B_Base[count] = 'D';
                break;
            case 14:
                B_Base[count] = 'E';
                break;
            case 15:
                B_Base[count] = 'F';
                break;
            case 16:
                B_Base[count] = 'G';
                break;
            case 17:
                B_Base[count] = 'H';
                break;
            case 18:
                B_Base[count] = 'I';
                break;
            case 19:
                B_Base[count] = 'J';
                break;
            case 20:
                B_Base[count] = 'K';
                break;
            case 21:
                B_Base[count] = 'L';
                break;
            case 22:
                B_Base[count] = 'M';
                break;
            case 23:
                B_Base[count] = 'N';
                break;
            case 24:
                B_Base[count] = 'O';
                break;
            case 25:
                B_Base[count] = 'P';
                break;
            case 26:
                B_Base[count] = 'Q';
                break;
            case 27:
                B_Base[count] = 'R';
                break;
            case 28:
                B_Base[count] = 'S';
                break;
            case 29:
                B_Base[count] = 'T';
                break;
            case 30:
                B_Base[count] = 'U';
                break;
            case 31:
                B_Base[count] = 'V';
                break;
            case 32:
                B_Base[count] = 'W';
                break;
            case 33:
                B_Base[count] = 'X';
                break;
            case 34:
                B_Base[count] = 'Y';
                break;
            case 35:
                B_Base[count] = 'Z';
                break;
        }
        Qutient = Qutient / B;
        count++;
        if(Qutient==0)
            break;
    }
    B_Base[count] = '\0';
}

void Base_Calculator::print_B_Base(){
    long digit_num = strlen(B_Base);
    for(long i = digit_num-1; i >=0  ; i--){
        cout << B_Base[i];
    }
}

int main(){
    Base_Calculator base_calculator;
    base_calculator.setdata();
    base_calculator.print_B_Base();
    
    
     
    return 0;
}