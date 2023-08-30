#include <iostream>

namespace View {
    int a = 100;

    FungsiView (){
        cout << "ini adalah fungsi si view";
    }
}

void fungsi (){
    cout << "ini adalah fungsi pada std\n";
}


main (){
std::cout << "Namespace Variable" << std::endl;
fungsi ();
std::cout << View::a << std::endl;
View::FungsiView();

}
