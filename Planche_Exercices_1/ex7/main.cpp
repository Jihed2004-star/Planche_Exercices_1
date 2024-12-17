#include <iostream>

using namespace std;

int main()
{
    int x=5;
    int resultat=1;
    for(int i=1;i<=x;++i){
        resultat=i*resultat;
    }
    cout << resultat << endl;
    return 0;
}
