/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int pesquisa_linear(int wanted[],int len, int key ){
    
    for(int a=0;a<=len-1;a++){
        if(wanted[a] == key){
            return a;
        }
    }
    return -1;
}


int main()
{
    int v_len,key;
    v_len = 10;
    key = 2;
    int wanted[v_len] = {1,2,2,4,5,6,7,8,9,10};
    int answer = pesquisa_linear(wanted,v_len,key);
    
    cout << "a resposta é: "<< answer;

    return 0;
}
