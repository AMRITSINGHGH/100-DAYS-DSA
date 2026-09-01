#include<iostream>
class MyClass {
    public:
    void displayMessage(){
        std::cout<<"Dynamic Object!!!"<<"\n";
    }
};
int main(){
MyClass *dyanmicobject = new MyClass;
dyanmicobject -> displayMessage();
delete dyanmicobject;
    return 0;
}