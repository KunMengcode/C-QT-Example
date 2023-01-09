#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    eject= true;
    connect(ui->pushButton,&QPushButton::clicked,this,&Widget::hide);
}

Widget::~Widget()
{
    delete ui;
}
void Widget::hide(){
    if (eject){
        ui->widget->setVisible(false);
    }else{
        ui->widget->setVisible(true);
    }
    eject = !eject;

}

