#include <iostream>
#include <cmath>
using namespace std;

int main()   {

    double a, b, c, delta, x1, x2;

    cout<<"Podaj parametry: a, b, c: ";
    cin>>a>>b>>c;

    delta = (b*b)-(4*a*c);
    cout<<"\n\n";

    if (delta > 0) {
        cout<<"Rownanie posiada 2 rozwiazania: "<<endl;
        x1=((-b -sqrt(delta)) / (2*a));
        x2=((-b + sqrt(delta)) / (2*a));
        cout<<"x1 = "<<x1<<"\n"<<" x2 = "<<x2<<"\n";
    } else {
        if (delta == 0) {
            cout<<"Rownanie posiada 1 rozwiazanie: "<<endl;
            x1=(-b / (2*a));
            cout<<"x1/2 = "<<x1<<"\n";
        } else cout<<"Brak rozwiazania!\n";
    }
}
