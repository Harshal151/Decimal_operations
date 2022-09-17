
#include <iostream>
#include <vector>
using namespace std;

void cun_to_deci(string num){
    int deci=0;
    for(int i=0;i<num.size();i++){
        int k;
        if(num[i]=='1'){
            k = 1;
        }
        else if(num[i]=='0'){
            k = 0;
        }
        deci = (deci*2)+k;
    }
    cout << deci;
}

void cun_to_deci1(string num){
    int deci=0;
    for(int i=0;i<num.size();i++){
        int k = num[i] - '0';
        deci = (deci*8)+k;
    }
    cout << deci;
}

void cun_to_deci2(string num){
    int deci=0;
    int k;
    for(int i=0;i<num.size();i++){
        if(num[i]=='A'){
            k = 10;
        }
        else if(num[i]=='B'){
            k = 11;
        }
        else if(num[i]=='C'){
            k = 12;
        }
        else if(num[i]=='D'){
            k = 13;
        }
        else if(num[i]=='E'){
            k = 14;
        }
        else if(num[i]=='F'){
            k = 15;
        }
        else{
            k = num[i] + '0' - 96;
        }
        deci = (deci*16)+k;
    }
    cout << deci;
}

void cun_to_bina(int num){
    vector<int> bina;
    while(num!=0){
        int bi = num%2;
        bina.push_back(bi);
        num = num/2;
    }
    for(auto itr=bina.rbegin();itr!=bina.rend();itr++){
        cout << *itr;
    }
}

void cun_to_bina1(int num){
    vector<int> oct;
    while(num!=0){
        int oc = num%8;
        oct.push_back(oc);
        num = num/8;
    }
    for(auto itr=oct.rbegin();itr!=oct.rend();itr++){
        cout << *itr;
    }
}

void cun_to_bina2(int num){
    vector<char> hexa;
    while(num!=0){
        int hd = num%16;
        if(hd<10){
            hexa.push_back(hd+48);
        }
        else{
            hexa.push_back(hd+55);
        }
        num = num/16;
    }
    for(auto itr=hexa.rbegin();itr!=hexa.rend();itr++){
        cout << *itr;
    }
}

void play_op(int a,int b){
    if(a==1 && b==2){
        string bina;
        cout << "Enter binary number: ";
        cin >> bina;
        cout << "The decimal form of binary number is: ";
        cun_to_deci(bina);
    }
    else if(a==3 && b==2){
        string oct;
        cout << "Enter octal number: ";
        cin >> oct;
        cout << "The decimal form of " << oct << " is: ";
        cun_to_deci1(oct);
    }
    else if(a==4 && b==2){
        string hex;
        cout << "Enter Hexadecimal number: ";
        cin >> hex;
        cout << "The decimal form of " << hex << " is: ";
        cun_to_deci2(hex);
    }
    else if(a==2 && b==1){
        int deci;
        cout << "Enter decimal number: ";
        cin >> deci;
        cout << "The binary form of " << deci << " is: ";
        cun_to_bina(deci);
    }
    else if(a==2 && b==3){
        int deci;
        cout << "Enter decimal number: ";
        cin >> deci;
        cout << "The octal form of " << deci << " is: ";
        cun_to_bina1(deci);
    }
    else if(a==2 && b==4){
        int deci;
        cout << "Enter decimal number: ";
        cin >> deci;
        cout << "The hexadecimal form of " << deci << " is: ";
        cun_to_bina2(deci);
    }
    else{
        cout << "Enter valid inputs.......";
    }
}

int main()
{
    int num1, num2;
    int count = 0;
    while(count!=5)
    {
        cout << "Conversion from Decimal and to Decimal so please select accordingly :)";
        cout << "\nXXX----------XXX----------XXX";
        cout << "\n1. Binary \n2. Decimal \n3. Octal \n4. Hexadecimal \n5. Exit";
        cout << "\nXXX----------XXX----------XXX";
        cout << "\nSelect 1st number from above: ";
        cin >> num1;
        cout << "Select 2nd number from above: ";
        cin >> num2;
        play_op(num1,num2);
        cout << "\n\nIf you want's to continue press '0' else '5': ";
        cin >> count;
    }
    return 0;
}
