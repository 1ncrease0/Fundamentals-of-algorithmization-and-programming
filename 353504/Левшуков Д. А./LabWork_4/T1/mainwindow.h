#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph.h"
#include <QMessageBox>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool check(std::string s);
    void delar();
    void add(int ch);
    void paintEvent(QPaintEvent *event);
    clock_t heapSort(int arr[], int n);
    clock_t quickSort(int arr[], int n);
    void heapify(int arr[], int n, int i);
    void printArray(int arr[],int n);

    int binfind(int arr[], int n, int el);
    bool check_el(std::string s);
private slots:
    void on_sortButton_clicked();

    void on_findButton_clicked();

private:
    Ui::MainWindow *ui;
    int *a=nullptr;
    long long siz=0;
    Graph g;
    std::string last_sort_array;
};
#endif // MAINWINDOW_H
