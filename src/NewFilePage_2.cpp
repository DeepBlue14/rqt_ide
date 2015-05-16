#include "NewFilePage_2.h"


NewFilePage_2::NewFilePage_2(QWidget* parent) : QWidget(parent)
{
    buttonGroupPtr = new QButtonGroup();
    buttonGroupPtr->addButton(new QRadioButton(tr("Empty")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Class")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Subscriber")));
    buttonGroupPtr->addButton(new QRadioButton(tr("Publisher")));
    
    outerLayoutPtr = new QGridLayout();
    
    for(size_t i = 0; i < buttonGroupPtr->buttons().size(); i++)
    {
        outerLayoutPtr->addWidget(buttonGroupPtr->buttons().at(i), i, 0);
    }
        
    this->setLayout(outerLayoutPtr);
}


NewFilePage_2::~NewFilePage_2()
{
    ;
}