#include<iostream>
using namespace std;
void TOH(int,char,char,char);
int main()
{

    TOH(3,'A','B','C');
}
void TOH(int n,char BEG,char AUX,char END)
    {
        if(n>=1)
        {
            TOH(n-1,BEG,END,AUX);
            cout<<BEG<<" to "<<END<<endl;
            TOH(n-1,AUX,BEG,END);
        }
    }
