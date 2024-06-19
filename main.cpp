#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int tab[7],tab2[7],j=-1;
    srand(time(NULL));
    for(int i=0;i<7;i++)
        tab[i]=rand()%100+1;
    for(int i=7;i>=0;i--)
    {
        tab2[j]=tab[i];
        j++;
    }
    for(int i=0;i<7;i++)
    {
        cout<<tab[i]<<endl;
    }
    for(int i=0;i<7;i++)
    {
        cout<<tab2[i]<<endl;
    }
}
