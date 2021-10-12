#include <iostream>
#include <Windows.h>

typedef void (*printFunc) ();

int main()
{
    HMODULE hdll = LoadLibrary(L"dll.dll");
    if (hdll != NULL) {
        std::cout << "加载dll成功!" << std::endl;

        printFunc print = (printFunc)GetProcAddress(hdll,"print");
        if (print) {
            print();
        }
        
		//AddFunc add = (AddFunc)GetProcAddress(hdll, "mydll::person::getName");

       //std::cout<<add()<<std::endl;
        system("pause");
    }
}
