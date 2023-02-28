#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Snake");
    this->hide();
    music_bool=0;
    connect(ui->pushButton,&QPushButton::clicked,this,&Dialog::deal_back_music);//连接音乐的信号和槽

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::deal_back_music() //背景音乐
{
    if(music_bool==0)
    {
        ui->pushButton->setStyleSheet("QPushButton{"
                                  "background-color: rgba(255, 255, 255, 0);"
                                  "background-image: url(:/new/prefix1/image/music_close.png);"
                                  "}");
        music_bool=1;
        emit back_music();
    }
    else if(music_bool==1)
    {
        ui->pushButton->setStyleSheet("QPushButton{"
                                  "background-color: rgba(255, 255, 255, 0);"
                                  "background-image: url(:/new/prefix1/image/music_open.png);"
                                  "}");
        music_bool=0;
        emit back_music();
    }

}

void Dialog::on_comboBox_currentIndexChanged(const QString &arg1) //第三个的下拉框选项：难度的选择
{
    if(arg1=="easy")
    {
      m_speed=500;
      emit level_signal(m_speed);
    }
    else if(arg1=="ordinary")
    {
        m_speed=300;
        emit level_signal(m_speed);
    }
    else if(arg1=="difficult")
    {
        m_speed=100;
        emit level_signal(m_speed);
    }
}

void Dialog::on_comboBox_2_currentIndexChanged(const QString &arg1)//第二个下拉框选项：蛇的颜色
{
    emit snake_color(arg1);
}

void Dialog::on_comboBox_3_currentIndexChanged(const QString &arg1)//第一个下拉框选项：食物的颜色
{
    emit food_color(arg1);
}

void Dialog::on_pushButton_2_clicked()//按键：非人类模式
{
    emit non_human();
}
