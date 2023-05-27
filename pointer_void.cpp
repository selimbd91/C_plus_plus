#include<iostream>
using namespace std;

void check(void *value, char type){

    switch (type)
    {
    case 'i':
        cout << *((int*)value) << endl;
        cout << "hello, i am 10" <<endl;
        break;
    case 'c':
        cout << *((char*)value) <<endl;
        break;
    case 'd':
        cout << *((double*)value ) << endl;
        break;
    default:
        break;
    }

}

int main(){

    int num = 10;
    char ch = 's';
    double num2 = 23.33;

    check(&num2, 'd');
    return 0;
}