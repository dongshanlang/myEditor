#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


//添加前置类声明
class MdiChild;
class QMdiSubWindow;
class QSignalMapper;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void updateMenus();//更新菜单
    MdiChild *createMdiChild();//创建子窗口
    void setActiveSubWindow(QWidget *window);//设置活动子窗口
    void updateWindowMenu();//更新窗口菜单
    void showTextRowAndCol();//显示文本的行号和列号

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionClose_triggered();

    void on_actionCloseAll_triggered();

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;


    QAction *actionSeparator;
    MdiChild *activeMdiChild();
    QMdiSubWindow *findMdichild(const QString &fileName);//查找子窗口
    QSignalMapper *windowMapper;//信号映射器
    void readSettings();//读取窗口设置

    void writeSettings();//写入窗口设置

    void initWindow();//初始化窗口


protected:
    void closeEvent(QCloseEvent *event);//关闭事件

};

#endif // MAINWINDOW_H
