#include <iostream>
#include <string>

using namespace std;

class DenganConstructor
{
public:
    string data;

    DenganConstructor(const char *data)
    {
        this->data = data;
    }

    void Show()
    {
        cout << "Ini dengan constructor : " << data << endl;
    }
};

class TanpaConstructor
{
public:
    string data;

    void Show()
    {
        cout << "Ini tanpa constructor : " << data << endl;
    }
};

int main(int argc, char const *argv[])
{
    // berbagai cara membuat objek

    // tanpa constructor starts
    // cara ke-1
    TanpaConstructor object1;
    object1.data = "object 1";
    object1.Show();

    // tanpa constructor ends

    // dengan constructor starts
    // cara ke-2
    DenganConstructor object2 = DenganConstructor("object 2");
    object2.Show();

    // cara ke=3
    DenganConstructor object3("object 3");
    object3.Show();

    // cara 2 dan 3 menggunakan alokasi memory stack

    // cara ke-3
    // dengan alokasi memori heap memory
    DenganConstructor *object4 = new DenganConstructor("object 4");
    (*object4).Show(); // dengan carad dereference objek

    // arrow operator starts
    // cara ke-1 untuk output console

    object4->Show(); // dengan menggunakan arrow operator. function atau attribute
    // cara ke-2 untuk output console

    cout << object4->data << endl;
    // cara ke-3 untuk output console

    string data = object4->data;
    cout << data << endl;

    // arrow operator ends

    // cara ke- 5
    DenganConstructor *object5;
    object5 = new DenganConstructor("object 5");
    object5->Show();

    // dengan constructor ends

    return 0;
}
