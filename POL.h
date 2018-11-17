#ifndef POL_H_INCLUDED
#define POL_H_INCLUDED

string GetStr(){
string s;
cout<<"\r\nEnter message please\r\n>";
cin>>s;
return s;
}

int GetLen(string s){
int l;
for(int i = 0;s[i]!='\0';i++){
    l++;
}
return l;
}

#endif // POL_H_INCLUDED
