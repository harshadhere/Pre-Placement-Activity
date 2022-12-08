#include<iostream>
using namespace std;
class Fuck
{
private :
    string MotherFucker;
public:
    void accept();
        void display();


};
void Fuck::accept()
{

    cout<<"Enter the name which you wana say badwords\n";
    cin>>MotherFucker;
}
void Fuck::display()
{

    cout<<"you motherfucker "<<MotherFucker<<" teri maa ki chut\n"<<" Bhosdiwale gandu lawda kha mera";

}
int main()
{
    Fuck f1;
    f1.accept();
    f1.display();
    return 0;
}

