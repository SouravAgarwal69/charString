#include<iostream>
using namespace std;
void reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
     int getlength(char ch[])
   {
    int count =0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
    
   }
   
   int main()
   {
   char ch[40];
   cin>>ch;//execution stop ho jata hai tab,space,enter ke case
   cout<<"your string is :"<<ch<<endl;
   int len=getlength(ch);
   reverse( ch,len);
   cout<<"reverse string is" <<ch;

 //  cout<<endl<<"length of string:"<<getlength(ch);

    return 0;
}