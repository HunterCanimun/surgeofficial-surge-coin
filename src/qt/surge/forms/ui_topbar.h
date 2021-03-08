/********************************************************************************
** Form generated from reading UI file 'topbar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPBAR_H
#define UI_TOPBAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qt/surge/expandablebutton.h"
#include "qt/surge/pfborderimage.h"

QT_BEGIN_NAMESPACE

class Ui_TopBar
{
public:
    QVBoxLayout *verticalLayout_10;
    PFBorderImage *containerTop;
    QVBoxLayout *verticalLayout_11;
    QWidget *top_container_2;
    QHBoxLayout *top_container;
    QWidget *widgetTopAmount;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelAmountTopSrg;
    QLabel *labelTrans;
    QSpacerItem *horizontalSpacer_11;
    QLabel *typeSpacerTop;
    QSpacerItem *horizontalSpacer_12;
    QLabel *labelAmountTopShieldedSrg;
    QLabel *labelShield;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QWidget *layoutSync;
    QVBoxLayout *verticalLayout_9;
    ExpandableButton *pushButtonSync;
    ExpandableButton *pushButtonHDUpgrade;
    ExpandableButton *pushButtonStack;
    ExpandableButton *pushButtonColdStaking;
    ExpandableButton *pushButtonConnection;
    ExpandableButton *pushButtonTor;
    ExpandableButton *pushButtonLock;
    ExpandableButton *pushButtonTheme;
    ExpandableButton *pushButtonFAQ;
    QWidget *bottom_container;
    QHBoxLayout *botton_container;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayoutContainerAvailable;
    QLabel *labelTitle1;
    QPushButton *pushButtonBalanceInfo;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelAmountSrg;
    QWidget *container_imm_pend;
    QHBoxLayout *horizontalLayout_2;
    QWidget *container_pending;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle3;
    QLabel *labelPendingSrg;
    QSpacerItem *horizontalSpacer_3;
    QWidget *container_immature;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelTitle4;
    QLabel *labelImmatureSrg;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QWidget *qrContainer;
    QVBoxLayout *containerQR;
    QPushButton *btnQr;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonQR;

    void setupUi(QWidget *TopBar)
    {
        if (TopBar->objectName().isEmpty())
            TopBar->setObjectName(QStringLiteral("TopBar"));
        TopBar->resize(734, 200);
        TopBar->setMinimumSize(QSize(0, 200));
        TopBar->setMaximumSize(QSize(16777215, 200));
        verticalLayout_10 = new QVBoxLayout(TopBar);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        containerTop = new PFBorderImage(TopBar);
        containerTop->setObjectName(QStringLiteral("containerTop"));
        verticalLayout_11 = new QVBoxLayout(containerTop);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        top_container_2 = new QWidget(containerTop);
        top_container_2->setObjectName(QStringLiteral("top_container_2"));
        top_container_2->setMinimumSize(QSize(0, 65));
        top_container = new QHBoxLayout(top_container_2);
        top_container->setSpacing(0);
        top_container->setObjectName(QStringLiteral("top_container"));
        top_container->setContentsMargins(14, 0, 14, 0);
        widgetTopAmount = new QWidget(top_container_2);
        widgetTopAmount->setObjectName(QStringLiteral("widgetTopAmount"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widgetTopAmount->sizePolicy().hasHeightForWidth());
        widgetTopAmount->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(widgetTopAmount);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelAmountTopSrg = new QLabel(widgetTopAmount);
        labelAmountTopSrg->setObjectName(QStringLiteral("labelAmountTopSrg"));
        labelAmountTopSrg->setMinimumSize(QSize(0, 36));
        labelAmountTopSrg->setStyleSheet(QStringLiteral("padding:0px;margin:0px;"));
        labelAmountTopSrg->setText(QStringLiteral("480.0685 SRG"));

        horizontalLayout_5->addWidget(labelAmountTopSrg, 0, Qt::AlignTop);

        labelTrans = new QLabel(widgetTopAmount);
        labelTrans->setObjectName(QStringLiteral("labelTrans"));

        horizontalLayout_5->addWidget(labelTrans);

        horizontalSpacer_11 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        typeSpacerTop = new QLabel(widgetTopAmount);
        typeSpacerTop->setObjectName(QStringLiteral("typeSpacerTop"));
        typeSpacerTop->setMinimumSize(QSize(1, 30));
        typeSpacerTop->setMaximumSize(QSize(1, 30));
        typeSpacerTop->setStyleSheet(QLatin1String("background-color:white;\n"
"padding:0px;\n"
"border:none;"));

        horizontalLayout_5->addWidget(typeSpacerTop, 0, Qt::AlignVCenter);

        horizontalSpacer_12 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);

        labelAmountTopShieldedSrg = new QLabel(widgetTopAmount);
        labelAmountTopShieldedSrg->setObjectName(QStringLiteral("labelAmountTopShieldedSrg"));
        labelAmountTopShieldedSrg->setMinimumSize(QSize(0, 36));
        labelAmountTopShieldedSrg->setText(QStringLiteral("1.000 SRG"));

        horizontalLayout_5->addWidget(labelAmountTopShieldedSrg, 0, Qt::AlignTop);

        labelShield = new QLabel(widgetTopAmount);
        labelShield->setObjectName(QStringLiteral("labelShield"));

        horizontalLayout_5->addWidget(labelShield);


        top_container->addWidget(widgetTopAmount, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        top_container->addItem(horizontalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(12);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        layoutSync = new QWidget(top_container_2);
        layoutSync->setObjectName(QStringLiteral("layoutSync"));
        layoutSync->setMinimumSize(QSize(0, 36));
        layoutSync->setMaximumSize(QSize(16777215, 36));
        verticalLayout_9 = new QVBoxLayout(layoutSync);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButtonSync = new ExpandableButton(layoutSync);
        pushButtonSync->setObjectName(QStringLiteral("pushButtonSync"));
        pushButtonSync->setMinimumSize(QSize(36, 36));
        pushButtonSync->setMaximumSize(QSize(16777215, 36));

        verticalLayout_9->addWidget(pushButtonSync);


        horizontalLayout_4->addWidget(layoutSync, 0, Qt::AlignRight);

        pushButtonHDUpgrade = new ExpandableButton(top_container_2);
        pushButtonHDUpgrade->setObjectName(QStringLiteral("pushButtonHDUpgrade"));
        pushButtonHDUpgrade->setMinimumSize(QSize(36, 36));

        horizontalLayout_4->addWidget(pushButtonHDUpgrade);

        pushButtonStack = new ExpandableButton(top_container_2);
        pushButtonStack->setObjectName(QStringLiteral("pushButtonStack"));
        pushButtonStack->setMinimumSize(QSize(36, 36));

        horizontalLayout_4->addWidget(pushButtonStack);

        pushButtonColdStaking = new ExpandableButton(top_container_2);
        pushButtonColdStaking->setObjectName(QStringLiteral("pushButtonColdStaking"));
        pushButtonColdStaking->setMinimumSize(QSize(36, 36));

        horizontalLayout_4->addWidget(pushButtonColdStaking);

        pushButtonConnection = new ExpandableButton(top_container_2);
        pushButtonConnection->setObjectName(QStringLiteral("pushButtonConnection"));
        pushButtonConnection->setMinimumSize(QSize(36, 36));

        horizontalLayout_4->addWidget(pushButtonConnection);

        pushButtonTor = new ExpandableButton(top_container_2);
        pushButtonTor->setObjectName(QStringLiteral("pushButtonTor"));
        pushButtonTor->setMinimumSize(QSize(36, 36));

        horizontalLayout_4->addWidget(pushButtonTor);

        pushButtonLock = new ExpandableButton(top_container_2);
        pushButtonLock->setObjectName(QStringLiteral("pushButtonLock"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonLock->sizePolicy().hasHeightForWidth());
        pushButtonLock->setSizePolicy(sizePolicy1);
        pushButtonLock->setMinimumSize(QSize(36, 0));

        horizontalLayout_4->addWidget(pushButtonLock);

        pushButtonTheme = new ExpandableButton(top_container_2);
        pushButtonTheme->setObjectName(QStringLiteral("pushButtonTheme"));
        pushButtonTheme->setMinimumSize(QSize(36, 36));
        pushButtonTheme->setMaximumSize(QSize(16777215, 36));

        horizontalLayout_4->addWidget(pushButtonTheme);

        pushButtonFAQ = new ExpandableButton(top_container_2);
        pushButtonFAQ->setObjectName(QStringLiteral("pushButtonFAQ"));
        pushButtonFAQ->setMinimumSize(QSize(36, 36));

        horizontalLayout_4->addWidget(pushButtonFAQ);


        top_container->addLayout(horizontalLayout_4);


        verticalLayout_11->addWidget(top_container_2);

        bottom_container = new QWidget(containerTop);
        bottom_container->setObjectName(QStringLiteral("bottom_container"));
        bottom_container->setMinimumSize(QSize(0, 135));
        botton_container = new QHBoxLayout(bottom_container);
        botton_container->setObjectName(QStringLiteral("botton_container"));
        botton_container->setContentsMargins(10, 0, 10, 10);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, -1, 30, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayoutContainerAvailable = new QHBoxLayout();
        horizontalLayoutContainerAvailable->setSpacing(5);
        horizontalLayoutContainerAvailable->setObjectName(QStringLiteral("horizontalLayoutContainerAvailable"));
        labelTitle1 = new QLabel(bottom_container);
        labelTitle1->setObjectName(QStringLiteral("labelTitle1"));

        horizontalLayoutContainerAvailable->addWidget(labelTitle1);

        pushButtonBalanceInfo = new QPushButton(bottom_container);
        pushButtonBalanceInfo->setObjectName(QStringLiteral("pushButtonBalanceInfo"));
        pushButtonBalanceInfo->setMinimumSize(QSize(26, 26));
        pushButtonBalanceInfo->setMaximumSize(QSize(26, 26));
        pushButtonBalanceInfo->setMouseTracking(true);
        pushButtonBalanceInfo->setFocusPolicy(Qt::NoFocus);
        pushButtonBalanceInfo->setText(QStringLiteral(""));
        pushButtonBalanceInfo->setIconSize(QSize(24, 24));
#ifndef QT_NO_SHORTCUT
        pushButtonBalanceInfo->setShortcut(QStringLiteral(""));
#endif // QT_NO_SHORTCUT

        horizontalLayoutContainerAvailable->addWidget(pushButtonBalanceInfo);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutContainerAvailable->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayoutContainerAvailable);

        labelAmountSrg = new QLabel(bottom_container);
        labelAmountSrg->setObjectName(QStringLiteral("labelAmountSrg"));
        labelAmountSrg->setText(QStringLiteral("480.0685 SRG"));

        verticalLayout_2->addWidget(labelAmountSrg);


        verticalLayout_7->addLayout(verticalLayout_2);

        container_imm_pend = new QWidget(bottom_container);
        container_imm_pend->setObjectName(QStringLiteral("container_imm_pend"));
        horizontalLayout_2 = new QHBoxLayout(container_imm_pend);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        container_pending = new QWidget(container_imm_pend);
        container_pending->setObjectName(QStringLiteral("container_pending"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(container_pending->sizePolicy().hasHeightForWidth());
        container_pending->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(container_pending);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelTitle3 = new QLabel(container_pending);
        labelTitle3->setObjectName(QStringLiteral("labelTitle3"));

        verticalLayout_3->addWidget(labelTitle3);

        labelPendingSrg = new QLabel(container_pending);
        labelPendingSrg->setObjectName(QStringLiteral("labelPendingSrg"));
        labelPendingSrg->setText(QStringLiteral("6.943 SRG"));

        verticalLayout_3->addWidget(labelPendingSrg);


        horizontalLayout_2->addWidget(container_pending, 0, Qt::AlignLeft);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        container_immature = new QWidget(container_imm_pend);
        container_immature->setObjectName(QStringLiteral("container_immature"));
        sizePolicy2.setHeightForWidth(container_immature->sizePolicy().hasHeightForWidth());
        container_immature->setSizePolicy(sizePolicy2);
        verticalLayout_4 = new QVBoxLayout(container_immature);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelTitle4 = new QLabel(container_immature);
        labelTitle4->setObjectName(QStringLiteral("labelTitle4"));

        verticalLayout_4->addWidget(labelTitle4);

        labelImmatureSrg = new QLabel(container_immature);
        labelImmatureSrg->setObjectName(QStringLiteral("labelImmatureSrg"));
        labelImmatureSrg->setText(QStringLiteral("10 SRG"));

        verticalLayout_4->addWidget(labelImmatureSrg);


        horizontalLayout_2->addWidget(container_immature, 0, Qt::AlignLeft);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_7->addWidget(container_imm_pend);


        botton_container->addLayout(verticalLayout_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        botton_container->addItem(horizontalSpacer_2);

        qrContainer = new QWidget(bottom_container);
        qrContainer->setObjectName(QStringLiteral("qrContainer"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(qrContainer->sizePolicy().hasHeightForWidth());
        qrContainer->setSizePolicy(sizePolicy3);
        qrContainer->setMinimumSize(QSize(90, 110));
        qrContainer->setMaximumSize(QSize(90, 110));
        containerQR = new QVBoxLayout(qrContainer);
        containerQR->setSpacing(0);
        containerQR->setObjectName(QStringLiteral("containerQR"));
        containerQR->setContentsMargins(5, 10, 5, 0);
        btnQr = new QPushButton(qrContainer);
        btnQr->setObjectName(QStringLiteral("btnQr"));
        btnQr->setMinimumSize(QSize(70, 70));
        btnQr->setMaximumSize(QSize(16777215, 70));
        btnQr->setFocusPolicy(Qt::NoFocus);
        btnQr->setIconSize(QSize(70, 70));

        containerQR->addWidget(btnQr);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        containerQR->addItem(verticalSpacer);

        pushButtonQR = new QPushButton(qrContainer);
        pushButtonQR->setObjectName(QStringLiteral("pushButtonQR"));
        pushButtonQR->setMinimumSize(QSize(36, 36));
        pushButtonQR->setMaximumSize(QSize(36, 36));
        pushButtonQR->setFocusPolicy(Qt::NoFocus);

        containerQR->addWidget(pushButtonQR, 0, Qt::AlignHCenter|Qt::AlignBottom);


        botton_container->addWidget(qrContainer, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout_11->addWidget(bottom_container);


        verticalLayout_10->addWidget(containerTop);


        retranslateUi(TopBar);

        QMetaObject::connectSlotsByName(TopBar);
    } // setupUi

    void retranslateUi(QWidget *TopBar)
    {
        TopBar->setWindowTitle(QApplication::translate("TopBar", "Form", Q_NULLPTR));
        labelTrans->setText(QApplication::translate("TopBar", "transparent", Q_NULLPTR));
        typeSpacerTop->setText(QString());
        labelShield->setText(QApplication::translate("TopBar", "shielded", Q_NULLPTR));
        labelTitle1->setText(QApplication::translate("TopBar", "Available", Q_NULLPTR));
        labelTitle3->setText(QApplication::translate("TopBar", "Pending", Q_NULLPTR));
        labelTitle4->setText(QApplication::translate("TopBar", "Immature", Q_NULLPTR));
        btnQr->setText(QString());
        pushButtonQR->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TopBar: public Ui_TopBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPBAR_H
