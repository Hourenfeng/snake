#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//创建qt应用
    Widget w;//创建对话框
    w.show();//对话框显示

    return a.exec();//消息循环
}
