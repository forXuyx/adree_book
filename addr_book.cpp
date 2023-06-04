//
// Created by xyx on 23-6-4.
//
#include <iostream>
#include <unistd.h>

using namespace std;

#define MAXNUM 1000

struct Person {
    int age;
    string name;
    string sex;
    string phone;
    string addr;
};

struct Addrbook {
    struct Person personArray[MAXNUM];
    int size;
};

void showMenu() {
    cout << "--------------------" << endl;
    cout << "-----1.添加联系人-----" << endl;
    cout << "-----2.显示联系人-----" << endl;
    cout << "-----3.删除联系人-----" << endl;
    cout << "-----4.查找联系人-----" << endl;
    cout << "-----5.修改联系人-----" << endl;
    cout << "-----6.清空联系人-----" << endl;
    cout << "-----0.退出通讯录-----" << endl;
    cout << "--------------------" << endl;
}

void addPerson(Addrbook *adbook) {
    if (adbook->size == MAXNUM) {
        cout << "通讯录满了" << endl;
        return;
    } else {
        cout << "请输入年龄，姓名，性别，电话号码，家庭住址：" << endl;
        cin >> adbook->personArray[adbook->size].age
        >> adbook->personArray[adbook->size].name
        >> adbook->personArray[adbook->size].sex
        >> adbook->personArray[adbook->size].phone
        >> adbook->personArray[adbook->size].addr;
        adbook->size ++ ;
    }
}

void showPerson(Addrbook *addrbook) {
    if (addrbook->size == 0) {
        cout << "通讯录为空" << endl;
        return;
    } else {
        for (int i = 0; i < addrbook->size; i ++ ) {
            cout << "年龄:" << addrbook->personArray[i].age << ' '
                    << "姓名:" << addrbook->personArray[i].name << ' '
                    << "性别:" << addrbook->personArray[i].sex << ' '
                    << "电话:" << addrbook->personArray[i].phone << ' '
                    << "地址:" << addrbook->personArray[i].addr << endl;
        }
    }
}

int main() {

    Addrbook adbook;
    adbook.size = 0;

    int chose = 0;

    while (1) {
        showMenu();

        cin >> chose;

        switch (chose) {
            case 1:
                addPerson(&adbook);
                system("clear");
                break;
            case 2:
                showPerson(&adbook);
                break;
            case 3:
                system("clear");
                break;
            case 4:
                system("clear");
                break;
            case 5:
                system("clear");
                break;
            case 6:
                system("clear");
                break;
            case 0:
                cout << "欢迎下次使用！"<< endl;
                return 0;
                break;
        }
    }

    return 0;
}