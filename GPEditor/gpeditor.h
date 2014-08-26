#ifndef GPEDITOR_H
#define GPEDITOR_H

#include <QMainWindow>

namespace Ui {
class GPEditor;
}

class GPEditor : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit GPEditor(QWidget *parent = 0);
    ~GPEditor();

public slots:
    void DoNewProject();

    void DoOpenProject();

    void DoCloseProject();

    void DoSaveProject();


protected:
    bool InitOnLaunch();
    
private:
    Ui::GPEditor *ui;
};

#endif // GPEDITOR_H
