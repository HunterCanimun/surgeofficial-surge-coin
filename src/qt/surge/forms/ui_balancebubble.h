/********************************************************************************
** Form generated from reading UI file 'balancebubble.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BALANCEBUBBLE_H
#define UI_BALANCEBUBBLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BalanceBubble
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lblFirst;
    QLabel *textTransparent;
    QLabel *lblSecond;
    QLabel *textShielded;

    void setupUi(QWidget *BalanceBubble)
    {
        if (BalanceBubble->objectName().isEmpty())
            BalanceBubble->setObjectName(QStringLiteral("BalanceBubble"));
        BalanceBubble->resize(218, 178);
        BalanceBubble->setMinimumSize(QSize(218, 178));
        BalanceBubble->setMaximumSize(QSize(250, 178));
        BalanceBubble->setStyleSheet(QLatin1String("#BalanceBubble{\n"
"background-color:transparent\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(BalanceBubble);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(BalanceBubble);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(200, 160));
        frame->setMaximumSize(QSize(250, 160));
        frame->setStyleSheet(QStringLiteral(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(10);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lblFirst = new QLabel(frame);
        lblFirst->setObjectName(QStringLiteral("lblFirst"));
        lblFirst->setStyleSheet(QStringLiteral(""));
        lblFirst->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(lblFirst);


        verticalLayout->addLayout(horizontalLayout);

        textTransparent = new QLabel(frame);
        textTransparent->setObjectName(QStringLiteral("textTransparent"));
        textTransparent->setStyleSheet(QStringLiteral(""));
        textTransparent->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(textTransparent);

        lblSecond = new QLabel(frame);
        lblSecond->setObjectName(QStringLiteral("lblSecond"));
        lblSecond->setStyleSheet(QStringLiteral(""));
        lblSecond->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lblSecond);

        textShielded = new QLabel(frame);
        textShielded->setObjectName(QStringLiteral("textShielded"));
        textShielded->setStyleSheet(QStringLiteral(""));
        textShielded->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(textShielded);


        verticalLayout_2->addWidget(frame);


        retranslateUi(BalanceBubble);

        QMetaObject::connectSlotsByName(BalanceBubble);
    } // setupUi

    void retranslateUi(QWidget *BalanceBubble)
    {
        BalanceBubble->setWindowTitle(QApplication::translate("BalanceBubble", "Form", Q_NULLPTR));
        lblFirst->setText(QApplication::translate("BalanceBubble", "Transparent", Q_NULLPTR));
        textTransparent->setText(QApplication::translate("BalanceBubble", "0.00 surge", Q_NULLPTR));
        lblSecond->setText(QApplication::translate("BalanceBubble", "Shielded", Q_NULLPTR));
        textShielded->setText(QApplication::translate("BalanceBubble", "0.00 surge", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BalanceBubble: public Ui_BalanceBubble {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BALANCEBUBBLE_H
