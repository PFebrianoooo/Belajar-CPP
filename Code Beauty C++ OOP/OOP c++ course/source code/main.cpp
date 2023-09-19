/*
    Rules OOP in c++
    ! Rules For Class !
    class
    1. setiap attribut dan method yang ada di kelas akan private by default apabila tidak di deklarasikan access modifier.

    Constructor
    3 aturan constructor
    1. constructor adalah method tetapi tidak bisa menggunakan fungsi return type
    2. constructor memiliki nama yang sama seperti kelas
    3. constructor harus public


    ! PENTING !
    Empat prinsip atau konsep terpenting dalam OOP
    1. encapsulasi
    2. abstraksi
    3. inheritance
    4. polimorphism

    1. Encapsulasi
        a. Getter and setter method
        digunakan untuk berkomunikasi kepada attribut. attribut bersifat private atau tidak bisa diubah ubah.
        mengubahnya dengan cara setter and getter method

    2. abstraksi
    abstraksi adalah
    // code beauty penjelasan yt

    3. inheritance atau pewarisan
        attributes.
        parent - child - mother - grandmother
        pewarisan atribut dan method ke child class dari parent class . bahwa child class bisa mengakses attribut dan method dari parent class

        a. single inheritance
        rules - rules
        ! ONE PARENT ONE CHILD !
        1. child class ounya seluruh attirbut dan fungsi dari parent class.
        2. fokus constructor ialah pada fungsi child class yang mau di tambahkan saja. karena apabila ada parameter yang di turunkan ke child class sudah di assign
        3. terdiri atas 1 child class

        b. Multi level inheritance
        ! ONE GRAND PARENT ONE PARENT ONE CHILD !
        pewarisan sifat GRAND PARENT kepada Parent lalu ke CHILD
        memiliki aturan yang sama
        NOTE :
        dnegan cattatan apabila punya constructor makakelas yang menginherit kelas parent dan gparent harus assign constructor mulai dari gparent hingga parent di objek child
            passing argument constructor harus mengikuti parent apabiia sekarang kita di child
            jadi linier dari atas ke bawah. dari grand parent ke parent lalu ke child

        c. multiple inheritance
        ! FATHER & MOTHER TO CHILD !
        pewarisan sifat parent dan  mother kepada kelas
        memiliki aturan yang sama
        NOTE :
        dnegan cattatan apabila punya constructor makakelas yang menginherit kelas parent dan gparent harus assign constructor mulai dari gparent hingga parent di objek child
            passing argument constructor harus mengikuti parent apabiia sekarang kita di child
            passing argumen constructor

    4. polymorphism











*/
#include <iostream>
#include <string>

using namespace std;

// abstract class
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee // signing abstract class
{
protected:
    string Name;

private:
    string Company;
    int Age;

public:
    // getter and setter method starts //
    void SetName(string name)
    {
        Name = name;
    }

    string GetName()
    {
        return Name;
    }

    void SetCompanu(string company)
    {
        Company = company;
    }

    string GetCompany()
    {
        return Company;
    }

    void SetAge(int age)
    {
        if (age >= 18)
            Age = age;
    }

    int GetAge()
    {
        return Age;
    }

    // Getter and setter method ends //

    void IntroduceYourself()
    {
        cout << "haii - " << Name << endl;
        cout << "hello my name is " << Name << " iam " << Age << " years old. And i work for " << Company << endl
             << endl;
    }
    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // function name from abstract class
    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << " got Promoted" << endl;
        }
        else
        {
            cout << Name << " sorry no promotion for you" << endl;
        }
    }

    void Work()
    {
        cout << Name << " check email , call log dan absensi" << endl;
    }
};

class Developer : public Employee // keyword public membuat semua di class employee menjadi public untuk class developer
{
public:
    string FavProgrammingLanguage;

    // passing parameter
    Developer(string name, string company, int age, string favProgrammingLanguage) : Employee(name, company, age) // passing 3 parameter parent
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void LanguageFav()
    {
        cout << GetName() /* Name */ << " menyukai bahasa pemrograman " << FavProgrammingLanguage << endl;
    }

    void FixBugs()
    {
        cout << Name << " fix bug menggunakan " << FavProgrammingLanguage << endl;
    }

    void Work()
    {
        cout << Name << " bekerja dengan menggunakan email" << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }

    void Lesson()
    {
        cout << Name << " preparing for a lesson " << Subject << endl;
    }

    void Work()
    {
        cout << Name << " bekerja dengann menggunakan odul buku" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee employee1 = Employee("putra", "Tokopedia", 19);
    // employee1.IntroduceYourself();

    Employee employee2 = Employee("john", "Amazon", 35);
    // employee2.IntroduceYourself();

    // implementation setter and getter method
    // employee1.SetAge(15);
    // cout << employee1.GetName() << " is " << employee1.GetAge() << " years old " << endl;

    // implemenetation abstract class in employee class
    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    // Developer d = Developer("saldina", "tokpedia", 20, "javascript");
    // d.LanguageFav();
    // d.LanguageFav();
    // d.LanguageFav();
    // d.AskForPromotion();

    Developer backend = Developer("hariss", " tokopedia", 20, "c sharp");
    // backend.Work();
    // backend.LanguageFav();
    // backend.FixBugs();

    Teacher english = Teacher("Dzikra", "SDN_Jakarta", 20, "english_teacher");
    // english.Lesson();

    employee1.Work();
    backend.Work();
    english.Work();

    return 0;
}
