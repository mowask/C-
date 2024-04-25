#include<iostream>
#include "Space.h"
#include "Account.h"

using namespace std;

Account operator- (Account a, Account b) {				// Account a + Account b
    Account c;
    c.rub = a.rub - b.rub;
    c.kop = a.kop - b.kop;
    return c;
}

Space operator -(Space& s) {
    Space temp;
    temp.x =  - s.x;
    temp.y =  - s.y;
    temp.z =  - s.z;
    return temp;
}

Account& operator+ (const Account& a) {
    Account c;
    c.rub = 0;
    c.kop = a.kop + a.rub * 100;
    return c;
}

Account& operator++ (Account& a) {
    ++a.rub;
    ++a.kop;
    return a;
}
Account operator++ (Account& a, int ) {
    Account temp = a;
    a.rub++;
    a.kop++;
    return temp;
}


std::ostream& operator << (std::ostream& cout, Account a) {
    cout << a.rub << "," << a.kop << endl;
    return cout;
}

int main()
{

    Account a(1000, 50);
    Account b(2500, 75);
    Account c = a + b;
    c.print();

    c = -a; 
    c.print();
    
    c = +a; 
    c.print();

    --a;
    a.print();
    ++b;
    b.print();

    a--;
    a.print();
    b++;
    b.print();

    Account d(2, 50);
    Account f(4, 75);

    (--d).print();
    (++f).print();

    Account e(2, 50);
    Account g(4, 75);

    (e--).print();
    e.print();
    (g++).print();
    g.print();

    cout << "a using cout: "; 
    cout << a;
    return 0;

    //Space sp1(2, 4, 6.5);
    //Space sp2(1, 2, 3);

    //cout << "sp1 = ";
    //sp1.print();
    //cout << endl;

    //cout << "sp2 = ";
    //sp2.print();
    //cout << endl;

    //cout << "sp3 = -sp1 = ";
    //Space sp3 = -sp1;
    //sp3.print();
    //cout << endl;

    //cout << "sp3 = sp1 + sp2 = ";
    //sp3 = sp1 + sp2;
    //sp3.print();
    //cout << endl;

    //cout << "sp3 = sp1 - sp2 = ";    
    //sp3 = sp1 - sp2;
    //sp3.print();
    //cout << endl;

    //cout << "sp3 = ++sp2 = ";       
    //sp3 = ++sp2;
    //sp3.print();
    //cout << "sp2 = ";               
    //sp2.print();
    //cout << endl;

    //cout << "sp3 = sp2++ = ";
    //sp3 = sp2++;
    //sp3.print();
    //cout << "sp2 = ";
    //sp2.print();
    //cout << endl;


    //(++sp1).print();
    //sp1++.print();
    //sp1.print();

    //return 0;
}
