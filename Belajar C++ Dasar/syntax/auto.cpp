#include <iostream>
#include <string>
#include<typeinfo>


using namespace std;

template<typename T, typename U>
auto max(T a , U b){
    return  (a>b)? a:b;
}



main (){
    int a = 10;
    string b = "tester";
    double c = 3.141223;
    float d = 6.132123f;
    char f = 'd';
    char g = 'a';

    auto e = max(a,c);
    auto h = max(f,g);

    cout << a << " nama typedatanya adaalah : " << typeid(a).name() << endl;
    cout << b << " nama typedatanya adaalah : " << typeid(b).name() << endl;
    cout << c << " nama typedatanya adaalah : " << typeid(c).name() << endl;
    cout << d << " nama typedatanya adaalah : " << typeid(d).name() << endl;
    cout << e << " nama typedatanya adaalah : " << typeid(e).name() << endl;
    cout << h << " nama typedatanya adaalah : " << typeid(h).name() << endl;

    cin.get();


}
