#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QLineEdit>
#include "math.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void send();
    void judge(int light_status,float lefttime,float current_speed,float limit_speed,float distance_toIS,float greenlight_time);//引导函数
    int Intersection(float L,float R,int ID,int LastID);//判断是否需要引导
    float Cal_distance(float latitude1,float longitude1,float latitude2,float longitude2);//计算距离
    void display_IS(void);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
