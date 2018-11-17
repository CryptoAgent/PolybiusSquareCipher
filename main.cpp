#include <iostream>
#include <string>
using namespace std;
#include "POL.h"

int main(){

int keys[26]={11,12,13,14,15,21,22,23,24,24,25,31,32,33,34,35,41,42,43,44,45,51,52,53,54,55};
string str = GetStr();
int len = GetLen(str);
int encr[len];
//Encryption
for(int i = 0;i<len;i++){
    char ch = str[i];
    if(isupper(ch)){
        ch = tolower(ch);
    }
    if(ch>=97&&ch<=122){
        int ind_ch = ch-97;
        encr[i]=keys[ind_ch];
    }else{cout<<"\r\nCharacters only!";break;}
}
cout<<"Your encrypted message is :\r\n";
for(int i  = 0;i<len;i++){
    cout<<encr[i];
    cout<<" ";
}
//Decryption
str = GetStr();
len = GetLen(str);
char decr[len]={0};
for(int i = 0;i<len;i+=2){
    string mixed;
    for(int j = 0;j<2;j++){
        mixed+=str[i+j];
    }
    int m = atoi(mixed.c_str());
    int ind = 0;
    for(int i = 0;i<26;i++){
        if(keys[i]==m){
            ind = i;
            break;
        }
    }
    decr[i] = ind+97;
}
cout<<"\r\nYour decrypted message is:\r\n";
for(int i = 0;i<len;i++){
    cout<<decr[i];
}
return 0;
}
