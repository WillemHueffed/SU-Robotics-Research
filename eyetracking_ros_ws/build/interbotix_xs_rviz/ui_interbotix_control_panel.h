/********************************************************************************
** Form generated from reading UI file 'interbotix_control_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERBOTIX_CONTROL_PANEL_H
#define UI_INTERBOTIX_CONTROL_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterbotixControlPanelUI
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layout_robot_namespace_;
    QLabel *label_robot_namespace_;
    QLineEdit *lineedit_robot_namespace_;
    QPushButton *pushbutton_robot_namespace_;
    QTabWidget *tabs_;
    QWidget *tab_home_sleep_;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_homesleep_;
    QComboBox *combobox_homesleep_name_;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *button_gotohome_;
    QPushButton *button_gotosleep_;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_torque_enable_;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *layout_torque_enable_;
    QHBoxLayout *layout_torque_name_;
    QLabel *label_torque_name_;
    QComboBox *combobox_torque_name_;
    QRadioButton *radiobutton_torque_group_;
    QRadioButton *radiobutton_torque_single_;
    QLabel *label_torque_warning_;
    QHBoxLayout *layout_torque_state_;
    QLabel *label_torque_state_;
    QPushButton *button_torque_enable_;
    QPushButton *button_torque_disable_;
    QWidget *tab_operating_modes_;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *layout_opmodes_v_;
    QHBoxLayout *layout_opmodes_name_;
    QLabel *label_opmodes_name_;
    QComboBox *combobox_opmodes_name_;
    QRadioButton *radiobutton_opmodes_group_;
    QRadioButton *radiobutton_opmodes_single_;
    QGridLayout *gridLayout_2;
    QLabel *label_opmodes_profile_type_;
    QComboBox *combobox_opmodes_profile_type_;
    QLabel *label_opmodes_profile_vel_;
    QLabel *label_opmodes_mode_;
    QComboBox *combobox_opmodes_mode_;
    QLabel *label_opmodes_profile_acc_;
    QLineEdit *lineedit_opmodes_profile_acc_;
    QLineEdit *lineedit_opmodes_profile_vel_;
    QPushButton *button_opmodes_set_;
    QWidget *tab_reboot_;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *layout_reboot_v_;
    QHBoxLayout *layout_reboot_name_;
    QLabel *label_reboot_name_;
    QComboBox *combobox_reboot_name_;
    QRadioButton *radiobutton_reboot_group_;
    QRadioButton *radiobutton_reboot_single_;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkbox_smart_reboot_;
    QLabel *label_2;
    QFrame *line;
    QCheckBox *checkbox_reboot_enable_;
    QLabel *label;
    QPushButton *button_reboot_reboot_;
    QWidget *tab_getregval_;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *layout_getregval_;
    QHBoxLayout *layout_getregval_name_;
    QLabel *label_getregval_name_;
    QComboBox *combobox_getregval_name_;
    QRadioButton *radiobutton_getregval_group_;
    QRadioButton *radiobutton_getregval_single_;
    QHBoxLayout *layout_getregval_reg_;
    QLabel *label_getregval_reg_;
    QComboBox *combobox_getregval_reg_;
    QPushButton *button_getregval_val_;
    QLabel *label_getregval_desc_;
    QHBoxLayout *layout_getregval_val_;
    QLineEdit *lineedit_getregval_val_;
    QWidget *tab_estop_;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *layout_estop_;
    QLabel *label_estop_warning_;
    QPushButton *button_estop_;

    void setupUi(QWidget *InterbotixControlPanelUI)
    {
        if (InterbotixControlPanelUI->objectName().isEmpty())
            InterbotixControlPanelUI->setObjectName(QString::fromUtf8("InterbotixControlPanelUI"));
        InterbotixControlPanelUI->resize(401, 290);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InterbotixControlPanelUI->sizePolicy().hasHeightForWidth());
        InterbotixControlPanelUI->setSizePolicy(sizePolicy);
        InterbotixControlPanelUI->setMinimumSize(QSize(0, 0));
        InterbotixControlPanelUI->setMaximumSize(QSize(401, 315));
        horizontalLayout_3 = new QHBoxLayout(InterbotixControlPanelUI);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layout_robot_namespace_ = new QHBoxLayout();
        layout_robot_namespace_->setObjectName(QString::fromUtf8("layout_robot_namespace_"));
        label_robot_namespace_ = new QLabel(InterbotixControlPanelUI);
        label_robot_namespace_->setObjectName(QString::fromUtf8("label_robot_namespace_"));

        layout_robot_namespace_->addWidget(label_robot_namespace_);

        lineedit_robot_namespace_ = new QLineEdit(InterbotixControlPanelUI);
        lineedit_robot_namespace_->setObjectName(QString::fromUtf8("lineedit_robot_namespace_"));

        layout_robot_namespace_->addWidget(lineedit_robot_namespace_);

        pushbutton_robot_namespace_ = new QPushButton(InterbotixControlPanelUI);
        pushbutton_robot_namespace_->setObjectName(QString::fromUtf8("pushbutton_robot_namespace_"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushbutton_robot_namespace_->sizePolicy().hasHeightForWidth());
        pushbutton_robot_namespace_->setSizePolicy(sizePolicy1);

        layout_robot_namespace_->addWidget(pushbutton_robot_namespace_);


        verticalLayout->addLayout(layout_robot_namespace_);

        tabs_ = new QTabWidget(InterbotixControlPanelUI);
        tabs_->setObjectName(QString::fromUtf8("tabs_"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabs_->sizePolicy().hasHeightForWidth());
        tabs_->setSizePolicy(sizePolicy2);
#ifndef QT_NO_TOOLTIP
        tabs_->setToolTip(0u);
#endif // QT_NO_TOOLTIP
        tabs_->setTabBarAutoHide(false);
        tab_home_sleep_ = new QWidget();
        tab_home_sleep_->setObjectName(QString::fromUtf8("tab_home_sleep_"));
        verticalLayout_3 = new QVBoxLayout(tab_home_sleep_);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        label_homesleep_ = new QLabel(tab_home_sleep_);
        label_homesleep_->setObjectName(QString::fromUtf8("label_homesleep_"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_homesleep_->sizePolicy().hasHeightForWidth());
        label_homesleep_->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_homesleep_);

        combobox_homesleep_name_ = new QComboBox(tab_home_sleep_);
        combobox_homesleep_name_->addItem(QString());
        combobox_homesleep_name_->setObjectName(QString::fromUtf8("combobox_homesleep_name_"));
        combobox_homesleep_name_->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(combobox_homesleep_name_->sizePolicy().hasHeightForWidth());
        combobox_homesleep_name_->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(combobox_homesleep_name_);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        button_gotohome_ = new QPushButton(tab_home_sleep_);
        button_gotohome_->setObjectName(QString::fromUtf8("button_gotohome_"));
        button_gotohome_->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(button_gotohome_->sizePolicy().hasHeightForWidth());
        button_gotohome_->setSizePolicy(sizePolicy5);
        button_gotohome_->setMinimumSize(QSize(0, 80));
        button_gotohome_->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(button_gotohome_);

        button_gotosleep_ = new QPushButton(tab_home_sleep_);
        button_gotosleep_->setObjectName(QString::fromUtf8("button_gotosleep_"));
        button_gotosleep_->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(button_gotosleep_->sizePolicy().hasHeightForWidth());
        button_gotosleep_->setSizePolicy(sizePolicy6);
        button_gotosleep_->setMinimumSize(QSize(0, 80));
        button_gotosleep_->setMaximumSize(QSize(16777215, 100));

        horizontalLayout->addWidget(button_gotosleep_);


        verticalLayout_8->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabs_->addTab(tab_home_sleep_, QString());
        tab_torque_enable_ = new QWidget();
        tab_torque_enable_->setObjectName(QString::fromUtf8("tab_torque_enable_"));
        verticalLayout_2 = new QVBoxLayout(tab_torque_enable_);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        layout_torque_enable_ = new QVBoxLayout();
        layout_torque_enable_->setObjectName(QString::fromUtf8("layout_torque_enable_"));
        layout_torque_enable_->setContentsMargins(0, 0, 0, 0);
        layout_torque_name_ = new QHBoxLayout();
        layout_torque_name_->setObjectName(QString::fromUtf8("layout_torque_name_"));
        label_torque_name_ = new QLabel(tab_torque_enable_);
        label_torque_name_->setObjectName(QString::fromUtf8("label_torque_name_"));
        sizePolicy3.setHeightForWidth(label_torque_name_->sizePolicy().hasHeightForWidth());
        label_torque_name_->setSizePolicy(sizePolicy3);

        layout_torque_name_->addWidget(label_torque_name_);

        combobox_torque_name_ = new QComboBox(tab_torque_enable_);
        combobox_torque_name_->addItem(QString());
        combobox_torque_name_->setObjectName(QString::fromUtf8("combobox_torque_name_"));
        combobox_torque_name_->setEnabled(false);
        sizePolicy4.setHeightForWidth(combobox_torque_name_->sizePolicy().hasHeightForWidth());
        combobox_torque_name_->setSizePolicy(sizePolicy4);

        layout_torque_name_->addWidget(combobox_torque_name_);

        radiobutton_torque_group_ = new QRadioButton(tab_torque_enable_);
        radiobutton_torque_group_->setObjectName(QString::fromUtf8("radiobutton_torque_group_"));
        radiobutton_torque_group_->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(radiobutton_torque_group_->sizePolicy().hasHeightForWidth());
        radiobutton_torque_group_->setSizePolicy(sizePolicy7);
        radiobutton_torque_group_->setChecked(true);

        layout_torque_name_->addWidget(radiobutton_torque_group_);

        radiobutton_torque_single_ = new QRadioButton(tab_torque_enable_);
        radiobutton_torque_single_->setObjectName(QString::fromUtf8("radiobutton_torque_single_"));
        radiobutton_torque_single_->setEnabled(false);
        sizePolicy7.setHeightForWidth(radiobutton_torque_single_->sizePolicy().hasHeightForWidth());
        radiobutton_torque_single_->setSizePolicy(sizePolicy7);

        layout_torque_name_->addWidget(radiobutton_torque_single_);


        layout_torque_enable_->addLayout(layout_torque_name_);

        label_torque_warning_ = new QLabel(tab_torque_enable_);
        label_torque_warning_->setObjectName(QString::fromUtf8("label_torque_warning_"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_torque_warning_->sizePolicy().hasHeightForWidth());
        label_torque_warning_->setSizePolicy(sizePolicy8);
        QFont font;
        font.setPointSize(11);
        label_torque_warning_->setFont(font);
        label_torque_warning_->setWordWrap(true);

        layout_torque_enable_->addWidget(label_torque_warning_);

        layout_torque_state_ = new QHBoxLayout();
        layout_torque_state_->setObjectName(QString::fromUtf8("layout_torque_state_"));
        layout_torque_state_->setContentsMargins(3, -1, 3, -1);
        label_torque_state_ = new QLabel(tab_torque_enable_);
        label_torque_state_->setObjectName(QString::fromUtf8("label_torque_state_"));

        layout_torque_state_->addWidget(label_torque_state_);

        button_torque_enable_ = new QPushButton(tab_torque_enable_);
        button_torque_enable_->setObjectName(QString::fromUtf8("button_torque_enable_"));
        button_torque_enable_->setEnabled(false);

        layout_torque_state_->addWidget(button_torque_enable_);

        button_torque_disable_ = new QPushButton(tab_torque_enable_);
        button_torque_disable_->setObjectName(QString::fromUtf8("button_torque_disable_"));
        button_torque_disable_->setEnabled(false);

        layout_torque_state_->addWidget(button_torque_disable_);


        layout_torque_enable_->addLayout(layout_torque_state_);


        verticalLayout_2->addLayout(layout_torque_enable_);

        tabs_->addTab(tab_torque_enable_, QString());
        tab_operating_modes_ = new QWidget();
        tab_operating_modes_->setObjectName(QString::fromUtf8("tab_operating_modes_"));
        verticalLayout_4 = new QVBoxLayout(tab_operating_modes_);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        layout_opmodes_v_ = new QVBoxLayout();
        layout_opmodes_v_->setObjectName(QString::fromUtf8("layout_opmodes_v_"));
        layout_opmodes_v_->setContentsMargins(0, -1, 0, -1);
        layout_opmodes_name_ = new QHBoxLayout();
        layout_opmodes_name_->setObjectName(QString::fromUtf8("layout_opmodes_name_"));
        label_opmodes_name_ = new QLabel(tab_operating_modes_);
        label_opmodes_name_->setObjectName(QString::fromUtf8("label_opmodes_name_"));
        sizePolicy3.setHeightForWidth(label_opmodes_name_->sizePolicy().hasHeightForWidth());
        label_opmodes_name_->setSizePolicy(sizePolicy3);

        layout_opmodes_name_->addWidget(label_opmodes_name_);

        combobox_opmodes_name_ = new QComboBox(tab_operating_modes_);
        combobox_opmodes_name_->addItem(QString());
        combobox_opmodes_name_->setObjectName(QString::fromUtf8("combobox_opmodes_name_"));
        combobox_opmodes_name_->setEnabled(false);
        sizePolicy4.setHeightForWidth(combobox_opmodes_name_->sizePolicy().hasHeightForWidth());
        combobox_opmodes_name_->setSizePolicy(sizePolicy4);

        layout_opmodes_name_->addWidget(combobox_opmodes_name_);

        radiobutton_opmodes_group_ = new QRadioButton(tab_operating_modes_);
        radiobutton_opmodes_group_->setObjectName(QString::fromUtf8("radiobutton_opmodes_group_"));
        radiobutton_opmodes_group_->setEnabled(false);
        sizePolicy7.setHeightForWidth(radiobutton_opmodes_group_->sizePolicy().hasHeightForWidth());
        radiobutton_opmodes_group_->setSizePolicy(sizePolicy7);
        radiobutton_opmodes_group_->setChecked(true);

        layout_opmodes_name_->addWidget(radiobutton_opmodes_group_);

        radiobutton_opmodes_single_ = new QRadioButton(tab_operating_modes_);
        radiobutton_opmodes_single_->setObjectName(QString::fromUtf8("radiobutton_opmodes_single_"));
        radiobutton_opmodes_single_->setEnabled(false);
        sizePolicy7.setHeightForWidth(radiobutton_opmodes_single_->sizePolicy().hasHeightForWidth());
        radiobutton_opmodes_single_->setSizePolicy(sizePolicy7);

        layout_opmodes_name_->addWidget(radiobutton_opmodes_single_);


        layout_opmodes_v_->addLayout(layout_opmodes_name_);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_opmodes_profile_type_ = new QLabel(tab_operating_modes_);
        label_opmodes_profile_type_->setObjectName(QString::fromUtf8("label_opmodes_profile_type_"));
        sizePolicy8.setHeightForWidth(label_opmodes_profile_type_->sizePolicy().hasHeightForWidth());
        label_opmodes_profile_type_->setSizePolicy(sizePolicy8);

        gridLayout_2->addWidget(label_opmodes_profile_type_, 1, 0, 1, 1);

        combobox_opmodes_profile_type_ = new QComboBox(tab_operating_modes_);
        combobox_opmodes_profile_type_->addItem(QString());
        combobox_opmodes_profile_type_->addItem(QString());
        combobox_opmodes_profile_type_->setObjectName(QString::fromUtf8("combobox_opmodes_profile_type_"));
        combobox_opmodes_profile_type_->setEnabled(false);

        gridLayout_2->addWidget(combobox_opmodes_profile_type_, 1, 1, 1, 1);

        label_opmodes_profile_vel_ = new QLabel(tab_operating_modes_);
        label_opmodes_profile_vel_->setObjectName(QString::fromUtf8("label_opmodes_profile_vel_"));
        sizePolicy8.setHeightForWidth(label_opmodes_profile_vel_->sizePolicy().hasHeightForWidth());
        label_opmodes_profile_vel_->setSizePolicy(sizePolicy8);

        gridLayout_2->addWidget(label_opmodes_profile_vel_, 2, 0, 1, 1);

        label_opmodes_mode_ = new QLabel(tab_operating_modes_);
        label_opmodes_mode_->setObjectName(QString::fromUtf8("label_opmodes_mode_"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_opmodes_mode_->sizePolicy().hasHeightForWidth());
        label_opmodes_mode_->setSizePolicy(sizePolicy9);
        label_opmodes_mode_->setMinimumSize(QSize(50, 0));
        label_opmodes_mode_->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(label_opmodes_mode_, 0, 0, 1, 1);

        combobox_opmodes_mode_ = new QComboBox(tab_operating_modes_);
        combobox_opmodes_mode_->addItem(QString());
        combobox_opmodes_mode_->addItem(QString());
        combobox_opmodes_mode_->addItem(QString());
        combobox_opmodes_mode_->addItem(QString());
        combobox_opmodes_mode_->addItem(QString());
        combobox_opmodes_mode_->addItem(QString());
        combobox_opmodes_mode_->setObjectName(QString::fromUtf8("combobox_opmodes_mode_"));
        combobox_opmodes_mode_->setEnabled(false);
        combobox_opmodes_mode_->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(combobox_opmodes_mode_, 0, 1, 1, 1);

        label_opmodes_profile_acc_ = new QLabel(tab_operating_modes_);
        label_opmodes_profile_acc_->setObjectName(QString::fromUtf8("label_opmodes_profile_acc_"));
        sizePolicy8.setHeightForWidth(label_opmodes_profile_acc_->sizePolicy().hasHeightForWidth());
        label_opmodes_profile_acc_->setSizePolicy(sizePolicy8);

        gridLayout_2->addWidget(label_opmodes_profile_acc_, 3, 0, 1, 1);

        lineedit_opmodes_profile_acc_ = new QLineEdit(tab_operating_modes_);
        lineedit_opmodes_profile_acc_->setObjectName(QString::fromUtf8("lineedit_opmodes_profile_acc_"));
        lineedit_opmodes_profile_acc_->setEnabled(false);

        gridLayout_2->addWidget(lineedit_opmodes_profile_acc_, 3, 1, 1, 1);

        lineedit_opmodes_profile_vel_ = new QLineEdit(tab_operating_modes_);
        lineedit_opmodes_profile_vel_->setObjectName(QString::fromUtf8("lineedit_opmodes_profile_vel_"));
        lineedit_opmodes_profile_vel_->setEnabled(false);

        gridLayout_2->addWidget(lineedit_opmodes_profile_vel_, 2, 1, 1, 1);


        layout_opmodes_v_->addLayout(gridLayout_2);

        button_opmodes_set_ = new QPushButton(tab_operating_modes_);
        button_opmodes_set_->setObjectName(QString::fromUtf8("button_opmodes_set_"));
        button_opmodes_set_->setEnabled(false);

        layout_opmodes_v_->addWidget(button_opmodes_set_);


        verticalLayout_4->addLayout(layout_opmodes_v_);

        tabs_->addTab(tab_operating_modes_, QString());
        tab_reboot_ = new QWidget();
        tab_reboot_->setObjectName(QString::fromUtf8("tab_reboot_"));
        verticalLayout_5 = new QVBoxLayout(tab_reboot_);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        layout_reboot_v_ = new QVBoxLayout();
        layout_reboot_v_->setObjectName(QString::fromUtf8("layout_reboot_v_"));
        layout_reboot_name_ = new QHBoxLayout();
        layout_reboot_name_->setObjectName(QString::fromUtf8("layout_reboot_name_"));
        label_reboot_name_ = new QLabel(tab_reboot_);
        label_reboot_name_->setObjectName(QString::fromUtf8("label_reboot_name_"));
        sizePolicy3.setHeightForWidth(label_reboot_name_->sizePolicy().hasHeightForWidth());
        label_reboot_name_->setSizePolicy(sizePolicy3);

        layout_reboot_name_->addWidget(label_reboot_name_);

        combobox_reboot_name_ = new QComboBox(tab_reboot_);
        combobox_reboot_name_->addItem(QString());
        combobox_reboot_name_->setObjectName(QString::fromUtf8("combobox_reboot_name_"));
        combobox_reboot_name_->setEnabled(false);
        sizePolicy4.setHeightForWidth(combobox_reboot_name_->sizePolicy().hasHeightForWidth());
        combobox_reboot_name_->setSizePolicy(sizePolicy4);

        layout_reboot_name_->addWidget(combobox_reboot_name_);

        radiobutton_reboot_group_ = new QRadioButton(tab_reboot_);
        radiobutton_reboot_group_->setObjectName(QString::fromUtf8("radiobutton_reboot_group_"));
        radiobutton_reboot_group_->setEnabled(false);
        radiobutton_reboot_group_->setChecked(true);

        layout_reboot_name_->addWidget(radiobutton_reboot_group_);

        radiobutton_reboot_single_ = new QRadioButton(tab_reboot_);
        radiobutton_reboot_single_->setObjectName(QString::fromUtf8("radiobutton_reboot_single_"));
        radiobutton_reboot_single_->setEnabled(false);

        layout_reboot_name_->addWidget(radiobutton_reboot_single_);


        layout_reboot_v_->addLayout(layout_reboot_name_);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkbox_smart_reboot_ = new QCheckBox(tab_reboot_);
        checkbox_smart_reboot_->setObjectName(QString::fromUtf8("checkbox_smart_reboot_"));
        checkbox_smart_reboot_->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkbox_smart_reboot_->sizePolicy().hasHeightForWidth());
        checkbox_smart_reboot_->setSizePolicy(sizePolicy1);
        checkbox_smart_reboot_->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(checkbox_smart_reboot_);

        label_2 = new QLabel(tab_reboot_);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy8.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy8);
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setMaximumSize(QSize(150, 16777215));
        label_2->setWordWrap(true);

        horizontalLayout_2->addWidget(label_2);

        line = new QFrame(tab_reboot_);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        checkbox_reboot_enable_ = new QCheckBox(tab_reboot_);
        checkbox_reboot_enable_->setObjectName(QString::fromUtf8("checkbox_reboot_enable_"));
        checkbox_reboot_enable_->setEnabled(false);
        sizePolicy1.setHeightForWidth(checkbox_reboot_enable_->sizePolicy().hasHeightForWidth());
        checkbox_reboot_enable_->setSizePolicy(sizePolicy1);
        checkbox_reboot_enable_->setMaximumSize(QSize(16777215, 16777215));
        checkbox_reboot_enable_->setChecked(true);

        horizontalLayout_2->addWidget(checkbox_reboot_enable_);

        label = new QLabel(tab_reboot_);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy8.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy8);
        label->setMinimumSize(QSize(150, 0));
        label->setMaximumSize(QSize(150, 16777215));
        label->setWordWrap(true);

        horizontalLayout_2->addWidget(label);


        layout_reboot_v_->addLayout(horizontalLayout_2);

        button_reboot_reboot_ = new QPushButton(tab_reboot_);
        button_reboot_reboot_->setObjectName(QString::fromUtf8("button_reboot_reboot_"));
        button_reboot_reboot_->setEnabled(false);

        layout_reboot_v_->addWidget(button_reboot_reboot_);


        verticalLayout_5->addLayout(layout_reboot_v_);

        tabs_->addTab(tab_reboot_, QString());
        tab_getregval_ = new QWidget();
        tab_getregval_->setObjectName(QString::fromUtf8("tab_getregval_"));
        verticalLayout_6 = new QVBoxLayout(tab_getregval_);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        layout_getregval_ = new QVBoxLayout();
        layout_getregval_->setObjectName(QString::fromUtf8("layout_getregval_"));
        layout_getregval_name_ = new QHBoxLayout();
        layout_getregval_name_->setObjectName(QString::fromUtf8("layout_getregval_name_"));
        label_getregval_name_ = new QLabel(tab_getregval_);
        label_getregval_name_->setObjectName(QString::fromUtf8("label_getregval_name_"));
        sizePolicy3.setHeightForWidth(label_getregval_name_->sizePolicy().hasHeightForWidth());
        label_getregval_name_->setSizePolicy(sizePolicy3);

        layout_getregval_name_->addWidget(label_getregval_name_);

        combobox_getregval_name_ = new QComboBox(tab_getregval_);
        combobox_getregval_name_->addItem(QString());
        combobox_getregval_name_->setObjectName(QString::fromUtf8("combobox_getregval_name_"));
        combobox_getregval_name_->setEnabled(false);
        sizePolicy4.setHeightForWidth(combobox_getregval_name_->sizePolicy().hasHeightForWidth());
        combobox_getregval_name_->setSizePolicy(sizePolicy4);

        layout_getregval_name_->addWidget(combobox_getregval_name_);

        radiobutton_getregval_group_ = new QRadioButton(tab_getregval_);
        radiobutton_getregval_group_->setObjectName(QString::fromUtf8("radiobutton_getregval_group_"));
        radiobutton_getregval_group_->setEnabled(false);
        radiobutton_getregval_group_->setChecked(true);

        layout_getregval_name_->addWidget(radiobutton_getregval_group_);

        radiobutton_getregval_single_ = new QRadioButton(tab_getregval_);
        radiobutton_getregval_single_->setObjectName(QString::fromUtf8("radiobutton_getregval_single_"));
        radiobutton_getregval_single_->setEnabled(false);

        layout_getregval_name_->addWidget(radiobutton_getregval_single_);


        layout_getregval_->addLayout(layout_getregval_name_);

        layout_getregval_reg_ = new QHBoxLayout();
        layout_getregval_reg_->setObjectName(QString::fromUtf8("layout_getregval_reg_"));
        label_getregval_reg_ = new QLabel(tab_getregval_);
        label_getregval_reg_->setObjectName(QString::fromUtf8("label_getregval_reg_"));
        sizePolicy3.setHeightForWidth(label_getregval_reg_->sizePolicy().hasHeightForWidth());
        label_getregval_reg_->setSizePolicy(sizePolicy3);
        label_getregval_reg_->setMaximumSize(QSize(100, 16777215));

        layout_getregval_reg_->addWidget(label_getregval_reg_);

        combobox_getregval_reg_ = new QComboBox(tab_getregval_);
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->addItem(QString());
        combobox_getregval_reg_->setObjectName(QString::fromUtf8("combobox_getregval_reg_"));
        combobox_getregval_reg_->setEnabled(false);

        layout_getregval_reg_->addWidget(combobox_getregval_reg_);

        button_getregval_val_ = new QPushButton(tab_getregval_);
        button_getregval_val_->setObjectName(QString::fromUtf8("button_getregval_val_"));
        button_getregval_val_->setEnabled(false);

        layout_getregval_reg_->addWidget(button_getregval_val_);


        layout_getregval_->addLayout(layout_getregval_reg_);

        label_getregval_desc_ = new QLabel(tab_getregval_);
        label_getregval_desc_->setObjectName(QString::fromUtf8("label_getregval_desc_"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(label_getregval_desc_->sizePolicy().hasHeightForWidth());
        label_getregval_desc_->setSizePolicy(sizePolicy10);
        label_getregval_desc_->setMinimumSize(QSize(0, 85));
        QFont font1;
        font1.setPointSize(9);
        label_getregval_desc_->setFont(font1);
        label_getregval_desc_->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_getregval_desc_->setWordWrap(true);

        layout_getregval_->addWidget(label_getregval_desc_);

        layout_getregval_val_ = new QHBoxLayout();
        layout_getregval_val_->setObjectName(QString::fromUtf8("layout_getregval_val_"));
        lineedit_getregval_val_ = new QLineEdit(tab_getregval_);
        lineedit_getregval_val_->setObjectName(QString::fromUtf8("lineedit_getregval_val_"));
        lineedit_getregval_val_->setEnabled(false);
        lineedit_getregval_val_->setReadOnly(true);

        layout_getregval_val_->addWidget(lineedit_getregval_val_);


        layout_getregval_->addLayout(layout_getregval_val_);


        verticalLayout_6->addLayout(layout_getregval_);

        tabs_->addTab(tab_getregval_, QString());
        tab_estop_ = new QWidget();
        tab_estop_->setObjectName(QString::fromUtf8("tab_estop_"));
        verticalLayout_7 = new QVBoxLayout(tab_estop_);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        layout_estop_ = new QVBoxLayout();
        layout_estop_->setObjectName(QString::fromUtf8("layout_estop_"));
        layout_estop_->setSizeConstraint(QLayout::SetDefaultConstraint);
        layout_estop_->setContentsMargins(3, 10, 3, 10);
        label_estop_warning_ = new QLabel(tab_estop_);
        label_estop_warning_->setObjectName(QString::fromUtf8("label_estop_warning_"));
        sizePolicy2.setHeightForWidth(label_estop_warning_->sizePolicy().hasHeightForWidth());
        label_estop_warning_->setSizePolicy(sizePolicy2);
        label_estop_warning_->setWordWrap(true);

        layout_estop_->addWidget(label_estop_warning_);

        button_estop_ = new QPushButton(tab_estop_);
        button_estop_->setObjectName(QString::fromUtf8("button_estop_"));
        button_estop_->setEnabled(false);
        QSizePolicy sizePolicy11(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(button_estop_->sizePolicy().hasHeightForWidth());
        button_estop_->setSizePolicy(sizePolicy11);
        button_estop_->setMinimumSize(QSize(0, 100));
        button_estop_->setStyleSheet(QString::fromUtf8("QPushButton:disabled {\n"
"background-color:#D3D3D3;\n"
"}\n"
"QPushButton:enabled {\n"
"background-color:#ff0000;\n"
"font-weight:bold;\n"
"}\n"
""));
        button_estop_->setCheckable(false);
        button_estop_->setFlat(false);

        layout_estop_->addWidget(button_estop_);


        verticalLayout_7->addLayout(layout_estop_);

        tabs_->addTab(tab_estop_, QString());

        verticalLayout->addWidget(tabs_);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(InterbotixControlPanelUI);

        tabs_->setCurrentIndex(0);
        button_estop_->setDefault(false);


        QMetaObject::connectSlotsByName(InterbotixControlPanelUI);
    } // setupUi

    void retranslateUi(QWidget *InterbotixControlPanelUI)
    {
        InterbotixControlPanelUI->setWindowTitle(QApplication::translate("InterbotixControlPanelUI", "Form", nullptr));
        label_robot_namespace_->setText(QApplication::translate("InterbotixControlPanelUI", "Robot Namespace:", nullptr));
        pushbutton_robot_namespace_->setText(QApplication::translate("InterbotixControlPanelUI", "Update", nullptr));
#ifndef QT_NO_TOOLTIP
        tab_home_sleep_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_homesleep_->setText(QApplication::translate("InterbotixControlPanelUI", "Group Name:", nullptr));
        combobox_homesleep_name_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "Select:", nullptr));

        button_gotohome_->setText(QApplication::translate("InterbotixControlPanelUI", "Go to Home Pose", nullptr));
        button_gotosleep_->setText(QApplication::translate("InterbotixControlPanelUI", "Go to Sleep Pose", nullptr));
        tabs_->setTabText(tabs_->indexOf(tab_home_sleep_), QApplication::translate("InterbotixControlPanelUI", "Home/Sleep", nullptr));
#ifndef QT_NO_TOOLTIP
        tab_torque_enable_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_torque_name_->setText(QApplication::translate("InterbotixControlPanelUI", "Name:", nullptr));
        combobox_torque_name_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "Select:", nullptr));

        radiobutton_torque_group_->setText(QApplication::translate("InterbotixControlPanelUI", "Group", nullptr));
        radiobutton_torque_single_->setText(QApplication::translate("InterbotixControlPanelUI", "Single", nullptr));
        label_torque_warning_->setText(QApplication::translate("InterbotixControlPanelUI", "<strong>WARNING:</strong> Disabling torque will cause the robot to collapse! Hold on to it or command it to its sleep configuration before disabling!", nullptr));
        label_torque_state_->setText(QApplication::translate("InterbotixControlPanelUI", "Torque State:", nullptr));
        button_torque_enable_->setText(QApplication::translate("InterbotixControlPanelUI", "Enable", nullptr));
        button_torque_disable_->setText(QApplication::translate("InterbotixControlPanelUI", "Disable", nullptr));
        tabs_->setTabText(tabs_->indexOf(tab_torque_enable_), QApplication::translate("InterbotixControlPanelUI", "Torque", nullptr));
        tabs_->setTabToolTip(tabs_->indexOf(tab_torque_enable_), QApplication::translate("InterbotixControlPanelUI", "Enable and disable the torque of a given robot", nullptr));
#ifndef QT_NO_TOOLTIP
        tab_operating_modes_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_opmodes_name_->setText(QApplication::translate("InterbotixControlPanelUI", "Name:", nullptr));
        combobox_opmodes_name_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "Select:", nullptr));

        radiobutton_opmodes_group_->setText(QApplication::translate("InterbotixControlPanelUI", "Group", nullptr));
        radiobutton_opmodes_single_->setText(QApplication::translate("InterbotixControlPanelUI", "Single", nullptr));
        label_opmodes_profile_type_->setText(QApplication::translate("InterbotixControlPanelUI", "Type:", nullptr));
        combobox_opmodes_profile_type_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "time", nullptr));
        combobox_opmodes_profile_type_->setItemText(1, QApplication::translate("InterbotixControlPanelUI", "velocity", nullptr));

        label_opmodes_profile_vel_->setText(QApplication::translate("InterbotixControlPanelUI", "Profile Velocity: ", nullptr));
        label_opmodes_mode_->setText(QApplication::translate("InterbotixControlPanelUI", "Mode:", nullptr));
        combobox_opmodes_mode_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "position", nullptr));
        combobox_opmodes_mode_->setItemText(1, QApplication::translate("InterbotixControlPanelUI", "ext_position", nullptr));
        combobox_opmodes_mode_->setItemText(2, QApplication::translate("InterbotixControlPanelUI", "velocity", nullptr));
        combobox_opmodes_mode_->setItemText(3, QApplication::translate("InterbotixControlPanelUI", "current", nullptr));
        combobox_opmodes_mode_->setItemText(4, QApplication::translate("InterbotixControlPanelUI", "current_based_position", nullptr));
        combobox_opmodes_mode_->setItemText(5, QApplication::translate("InterbotixControlPanelUI", "pwm", nullptr));

        label_opmodes_profile_acc_->setText(QApplication::translate("InterbotixControlPanelUI", "Profile Acceleration:", nullptr));
        lineedit_opmodes_profile_acc_->setText(QApplication::translate("InterbotixControlPanelUI", "300", nullptr));
        lineedit_opmodes_profile_vel_->setText(QApplication::translate("InterbotixControlPanelUI", "2000", nullptr));
        button_opmodes_set_->setText(QApplication::translate("InterbotixControlPanelUI", "Set Operating Modes", nullptr));
        tabs_->setTabText(tabs_->indexOf(tab_operating_modes_), QApplication::translate("InterbotixControlPanelUI", "Operating Modes", nullptr));
#ifndef QT_NO_TOOLTIP
        tab_reboot_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_reboot_name_->setText(QApplication::translate("InterbotixControlPanelUI", "Name:", nullptr));
        combobox_reboot_name_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "Select:", nullptr));

        radiobutton_reboot_group_->setText(QApplication::translate("InterbotixControlPanelUI", "Group", nullptr));
        radiobutton_reboot_single_->setText(QApplication::translate("InterbotixControlPanelUI", "Single", nullptr));
        checkbox_smart_reboot_->setText(QString());
        label_2->setText(QApplication::translate("InterbotixControlPanelUI", "Only reboot motors in group that are in an error state", nullptr));
        checkbox_reboot_enable_->setText(QString());
        label->setText(QApplication::translate("InterbotixControlPanelUI", "Enable torque on selected servos after reboot", nullptr));
        button_reboot_reboot_->setText(QApplication::translate("InterbotixControlPanelUI", "Reboot", nullptr));
        tabs_->setTabText(tabs_->indexOf(tab_reboot_), QApplication::translate("InterbotixControlPanelUI", "Reboot", nullptr));
#ifndef QT_NO_TOOLTIP
        tab_getregval_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_getregval_name_->setText(QApplication::translate("InterbotixControlPanelUI", "Name:", nullptr));
        combobox_getregval_name_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "Select:", nullptr));

        radiobutton_getregval_group_->setText(QApplication::translate("InterbotixControlPanelUI", "Group", nullptr));
        radiobutton_getregval_single_->setText(QApplication::translate("InterbotixControlPanelUI", "Single", nullptr));
        label_getregval_reg_->setText(QApplication::translate("InterbotixControlPanelUI", "Register:", nullptr));
        combobox_getregval_reg_->setItemText(0, QApplication::translate("InterbotixControlPanelUI", "Goal_Position", nullptr));
        combobox_getregval_reg_->setItemText(1, QApplication::translate("InterbotixControlPanelUI", "Goal_Velocity", nullptr));
        combobox_getregval_reg_->setItemText(2, QApplication::translate("InterbotixControlPanelUI", "Goal_Current", nullptr));
        combobox_getregval_reg_->setItemText(3, QApplication::translate("InterbotixControlPanelUI", "Goal_PWM", nullptr));
        combobox_getregval_reg_->setItemText(4, QApplication::translate("InterbotixControlPanelUI", "Present_Position", nullptr));
        combobox_getregval_reg_->setItemText(5, QApplication::translate("InterbotixControlPanelUI", "Present_Velocity", nullptr));
        combobox_getregval_reg_->setItemText(6, QApplication::translate("InterbotixControlPanelUI", "Present_Current", nullptr));
        combobox_getregval_reg_->setItemText(7, QApplication::translate("InterbotixControlPanelUI", "Present_Temperature", nullptr));

        button_getregval_val_->setText(QApplication::translate("InterbotixControlPanelUI", "Get", nullptr));
        label_getregval_desc_->setText(QString());
        tabs_->setTabText(tabs_->indexOf(tab_getregval_), QApplication::translate("InterbotixControlPanelUI", "Get Register Values", nullptr));
#ifndef QT_NO_TOOLTIP
        tab_estop_->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_estop_warning_->setText(QApplication::translate("InterbotixControlPanelUI", "<strong>WARNING:</strong> This action will kill the xs_sdk node, causing the robot to cease all movement and collapse. This may damage the robot.", nullptr));
        button_estop_->setText(QApplication::translate("InterbotixControlPanelUI", "E-STOP", nullptr));
        tabs_->setTabText(tabs_->indexOf(tab_estop_), QApplication::translate("InterbotixControlPanelUI", "E-Stop", nullptr));
        tabs_->setTabToolTip(tabs_->indexOf(tab_estop_), QApplication::translate("InterbotixControlPanelUI", "Kill the control node of a given robot in an emergency", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterbotixControlPanelUI: public Ui_InterbotixControlPanelUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERBOTIX_CONTROL_PANEL_H
