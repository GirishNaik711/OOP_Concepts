#include<iostream>
using namespace std;

class AbsEmployee{
    public:
    virtual void AskForPromotion() = 0;
};
class Employee : AbsEmployee{
    protected:
        string Name;

    private:
        string Company;
        int Age;

    public:
    void setName(string aname)
        {
            Name = aname;
        }
        string getname()
        {
            return Name;
        }

    void setcompany(string acompany)
        {
            Company = acompany;
        }
        string getCompany()
        {
            return Company;
        }

    void setAge(int aage)
        {
            Age = aage;
        }
        int getAge()
        {
            return Age;
        }

        Employee(string aname, string acompany, int aage)
        {
            Name = aname;
            Company = acompany;
            Age = aage;
        }

    void introduceyourself()
        {
            cout << "Name "<< Name << endl;
            cout << "Company "<< Company << endl;
            cout << "Age " << Age << endl;
        }
    void AskForPromotion()
        {

        if(Age > 25)
         {
             cout << "You are Promoted" << endl;
         }else{
             cout <<  "You are not Pormoted" << endl;
         }
        }
};
class Developer: public Employee{
    public:
    string FavProgLanguage;

    Developer(string aname, string acompany, int aage, string afavproglanguage):Employee(aname,acompany,aage)
    {
        FavProgLanguage = afavproglanguage;
    }

    void fixBug()
    {
        cout << Name << " fixes bug using "<< FavProgLanguage << endl;
    }
};

int main()
{

    Developer developer1 = Developer("Saldina", "Code beauty", 25, "C++");
    developer1.fixBug();

}

