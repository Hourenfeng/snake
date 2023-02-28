#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTimer>
#include<form.h>
#include<dialog.h>
#include<QSound>
#include<dialog_pause.h>
namespace Ui {
class Widget;
}//用命名空间调用Ui的类

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);//显式声明
    ~Widget();
    void paintEvent(QPaintEvent *);//声明绘制事件
    void keyPressEvent(QKeyEvent *e);//键盘按压事件
    void keyReleaseEvent(QKeyEvent *event);//键盘释放事件
    void timeslot();//记录蛇头的位置
    void deal(QString str);
    void play_again_deal();//再玩一次
    void init_all();//最开始的蛇的位置和食物的位置
    void w_back_music();//背景音乐
    void time_open(int level_speed);//难度选择
    void food_deal(QString str);//食物

private slots:
    void on_pushButton_clicked();//ui文件的3个按键

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Widget *ui;//声明变量
    int arr[100][2];//蛇头的位置
    QTimer *m_timer;
    int direction;//蛇头方向
    int food_x,food_y;//食物的x，y
    int grades;
    Form form;
    int speed;//蛇移动的速度
    Dialog dialog;
    QSound *sound;
    int music_deal;//背景音乐的处理
    Dialog_pause dialog_pause;
    QString str1;
    QString str2;
    int changeable_record;//changeable颜色
    int m_speed;//变后的速度
    int non_human_record;//非人类模式


};

#endif
