/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QLabel *confMsg;
    QFrame *line;
    QLabel *label;
    QLineEdit *hostname;
    QLabel *label_2;
    QLineEdit *port;
    QLabel *label_3;
    QLineEdit *rpcuser;
    QLabel *label_4;
    QLineEdit *rpcpassword;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QPushButton *btnClearSaved;
    QCheckBox *chkSaveTxs;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(455, 391);
        Settings->setModal(true);
        verticalLayout = new QVBoxLayout(Settings);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(Settings);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        confMsg = new QLabel(tab);
        confMsg->setObjectName(QStringLiteral("confMsg"));
        confMsg->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_3->addWidget(confMsg);

        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label);

        hostname = new QLineEdit(tab);
        hostname->setObjectName(QStringLiteral("hostname"));

        verticalLayout_3->addWidget(hostname);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label_2);

        port = new QLineEdit(tab);
        port->setObjectName(QStringLiteral("port"));

        verticalLayout_3->addWidget(port);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label_3);

        rpcuser = new QLineEdit(tab);
        rpcuser->setObjectName(QStringLiteral("rpcuser"));

        verticalLayout_3->addWidget(rpcuser);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(60, 0));

        verticalLayout_3->addWidget(label_4);

        rpcpassword = new QLineEdit(tab);
        rpcpassword->setObjectName(QStringLiteral("rpcpassword"));

        verticalLayout_3->addWidget(rpcpassword);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setWordWrap(true);

        gridLayout->addWidget(label_5, 1, 0, 1, 2);

        btnClearSaved = new QPushButton(tab_2);
        btnClearSaved->setObjectName(QStringLiteral("btnClearSaved"));

        gridLayout->addWidget(btnClearSaved, 2, 1, 1, 1);

        chkSaveTxs = new QCheckBox(tab_2);
        chkSaveTxs->setObjectName(QStringLiteral("chkSaveTxs"));

        gridLayout->addWidget(chkSaveTxs, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 0, 1, 2);

        line_2 = new QFrame(tab_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(Settings);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Settings);
        QObject::connect(buttonBox, SIGNAL(accepted()), Settings, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Settings, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QDialog *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Settings", nullptr));
        confMsg->setText(QApplication::translate("Settings", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label->setText(QApplication::translate("Settings", "Host", nullptr));
        hostname->setPlaceholderText(QApplication::translate("Settings", "127.0.0.1", nullptr));
        label_2->setText(QApplication::translate("Settings", "Port", nullptr));
        port->setPlaceholderText(QApplication::translate("Settings", "8232", nullptr));
        label_3->setText(QApplication::translate("Settings", "RPC Username", nullptr));
        label_4->setText(QApplication::translate("Settings", "RPC Password", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Settings", "zcashd connection", nullptr));
        label_5->setText(QApplication::translate("Settings", "Shielded transactions are saved locally and shown in the Transactions tab.  If you uncheck this, shielded transactions will not appear in the transactions tab.", nullptr));
        btnClearSaved->setText(QApplication::translate("Settings", "Clear History", nullptr));
        chkSaveTxs->setText(QApplication::translate("Settings", "Remember Shielded Transactions", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Settings", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
