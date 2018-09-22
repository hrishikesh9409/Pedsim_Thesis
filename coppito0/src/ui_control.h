/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QPushButton *zoominButton;
    QPushButton *zoomoutButton;
    QCheckBox *waypointsCheckBox;
    QCheckBox *treeCheckBox;
    QCheckBox *showDirectionCheckBox;
    QCheckBox *showForcesCheckBox;
    QCheckBox *followAgentCheckBox;
    QLabel *fpsLabel;
    QSlider *simspeedSlider;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *mlLookAheadCheckBox;
    QCheckBox *mlTendencyCheckBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *simhLabel;
    QSlider *simhSlider;
    QLabel *wallforceLabel;
    QSlider *wallforceSlider;
    QLabel *pedforceLabel;
    QSlider *pedforceSlider;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QStringLiteral("Control"));
        Control->resize(200, 673);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Control->sizePolicy().hasHeightForWidth());
        Control->setSizePolicy(sizePolicy);
        Control->setMinimumSize(QSize(200, 175));
        Control->setAutoFillBackground(false);
        Control->setStyleSheet(QStringLiteral(""));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dockWidgetContents->sizePolicy().hasHeightForWidth());
        dockWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(dockWidgetContents);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMaximumSize(QSize(16777215, 40));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);


        verticalLayout->addWidget(frame);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(0, 40));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        zoominButton = new QPushButton(frame_2);
        zoominButton->setObjectName(QStringLiteral("zoominButton"));
        zoominButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(zoominButton);

        zoomoutButton = new QPushButton(frame_2);
        zoomoutButton->setObjectName(QStringLiteral("zoomoutButton"));
        zoomoutButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout->addWidget(zoomoutButton);


        verticalLayout_5->addWidget(frame_2);

        waypointsCheckBox = new QCheckBox(groupBox);
        waypointsCheckBox->setObjectName(QStringLiteral("waypointsCheckBox"));

        verticalLayout_5->addWidget(waypointsCheckBox);

        treeCheckBox = new QCheckBox(groupBox);
        treeCheckBox->setObjectName(QStringLiteral("treeCheckBox"));

        verticalLayout_5->addWidget(treeCheckBox);

        showDirectionCheckBox = new QCheckBox(groupBox);
        showDirectionCheckBox->setObjectName(QStringLiteral("showDirectionCheckBox"));
        showDirectionCheckBox->setEnabled(true);
        showDirectionCheckBox->setChecked(true);

        verticalLayout_5->addWidget(showDirectionCheckBox);

        showForcesCheckBox = new QCheckBox(groupBox);
        showForcesCheckBox->setObjectName(QStringLiteral("showForcesCheckBox"));
        showForcesCheckBox->setChecked(true);

        verticalLayout_5->addWidget(showForcesCheckBox);

        followAgentCheckBox = new QCheckBox(groupBox);
        followAgentCheckBox->setObjectName(QStringLiteral("followAgentCheckBox"));
        followAgentCheckBox->setChecked(true);

        verticalLayout_5->addWidget(followAgentCheckBox);

        fpsLabel = new QLabel(groupBox);
        fpsLabel->setObjectName(QStringLiteral("fpsLabel"));

        verticalLayout_5->addWidget(fpsLabel);

        simspeedSlider = new QSlider(groupBox);
        simspeedSlider->setObjectName(QStringLiteral("simspeedSlider"));
        simspeedSlider->setMinimum(1);
        simspeedSlider->setMaximum(50);
        simspeedSlider->setValue(30);
        simspeedSlider->setOrientation(Qt::Horizontal);

        verticalLayout_5->addWidget(simspeedSlider);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        verticalLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(dockWidgetContents);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 0));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        mlLookAheadCheckBox = new QCheckBox(groupBox_4);
        mlLookAheadCheckBox->setObjectName(QStringLiteral("mlLookAheadCheckBox"));
        mlLookAheadCheckBox->setEnabled(true);
        mlLookAheadCheckBox->setChecked(true);

        verticalLayout_6->addWidget(mlLookAheadCheckBox);

        mlTendencyCheckBox = new QCheckBox(groupBox_4);
        mlTendencyCheckBox->setObjectName(QStringLiteral("mlTendencyCheckBox"));

        verticalLayout_6->addWidget(mlTendencyCheckBox);

        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setEnabled(false);

        verticalLayout_6->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(false);

        verticalLayout_6->addWidget(checkBox_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        verticalLayout->addWidget(groupBox_4);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        simhLabel = new QLabel(groupBox_2);
        simhLabel->setObjectName(QStringLiteral("simhLabel"));

        verticalLayout_4->addWidget(simhLabel);

        simhSlider = new QSlider(groupBox_2);
        simhSlider->setObjectName(QStringLiteral("simhSlider"));
        simhSlider->setMaximum(100);
        simhSlider->setValue(40);
        simhSlider->setOrientation(Qt::Horizontal);
        simhSlider->setInvertedAppearance(true);
        simhSlider->setInvertedControls(false);

        verticalLayout_4->addWidget(simhSlider);

        wallforceLabel = new QLabel(groupBox_2);
        wallforceLabel->setObjectName(QStringLiteral("wallforceLabel"));

        verticalLayout_4->addWidget(wallforceLabel);

        wallforceSlider = new QSlider(groupBox_2);
        wallforceSlider->setObjectName(QStringLiteral("wallforceSlider"));
        wallforceSlider->setMinimum(0);
        wallforceSlider->setMaximum(1000);
        wallforceSlider->setValue(500);
        wallforceSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(wallforceSlider);

        pedforceLabel = new QLabel(groupBox_2);
        pedforceLabel->setObjectName(QStringLiteral("pedforceLabel"));

        verticalLayout_4->addWidget(pedforceLabel);

        pedforceSlider = new QSlider(groupBox_2);
        pedforceSlider->setObjectName(QStringLiteral("pedforceSlider"));
        pedforceSlider->setMinimum(0);
        pedforceSlider->setMaximum(1000);
        pedforceSlider->setValue(300);
        pedforceSlider->setSliderPosition(300);
        pedforceSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(pedforceSlider);

        verticalSpacer = new QSpacerItem(20, 252, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout->addWidget(groupBox_2);

        Control->setWidget(dockWidgetContents);

        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QDockWidget *Control)
    {
        Control->setWindowTitle(QApplication::translate("Control", "PedSim Control", nullptr));
        label->setText(QApplication::translate("Control", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Droid Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">Coppito 0</span></p></body></html>", nullptr));
        groupBox->setTitle(QApplication::translate("Control", "Display Options", nullptr));
        label_6->setText(QApplication::translate("Control", "Zoom Level", nullptr));
        zoominButton->setText(QApplication::translate("Control", "+", nullptr));
        zoomoutButton->setText(QApplication::translate("Control", "-", nullptr));
        waypointsCheckBox->setText(QApplication::translate("Control", "Show Waypoints", nullptr));
        treeCheckBox->setText(QApplication::translate("Control", "Show Quadtree", nullptr));
        showDirectionCheckBox->setText(QApplication::translate("Control", "Show Direction", nullptr));
        showForcesCheckBox->setText(QApplication::translate("Control", "Show Forces", nullptr));
        followAgentCheckBox->setText(QApplication::translate("Control", "Follow Agent", nullptr));
        fpsLabel->setText(QApplication::translate("Control", "Framerate", nullptr));
        groupBox_4->setTitle(QApplication::translate("Control", "Mental Layer Options", nullptr));
        mlLookAheadCheckBox->setText(QApplication::translate("Control", "Look Ahead", nullptr));
        mlTendencyCheckBox->setText(QApplication::translate("Control", "Tendency", nullptr));
        checkBox_4->setText(QApplication::translate("Control", "Dijkstra Routing", nullptr));
        checkBox_3->setText(QApplication::translate("Control", "Visual Avoidance", nullptr));
        groupBox_2->setTitle(QApplication::translate("Control", "Physical Layer Options", nullptr));
        simhLabel->setText(QApplication::translate("Control", "Precision (h)", nullptr));
        wallforceLabel->setText(QApplication::translate("Control", "Wall Force", nullptr));
        pedforceLabel->setText(QApplication::translate("Control", "Pedestrian Force", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
