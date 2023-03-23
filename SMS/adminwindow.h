#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H
#include "windowselector.h"
#define ADMIN_PAGE_INDEX 1
class AdminWindow : public WindowSelector
{
public:
    AdminWindow();
    int showWindow();
};

#endif // ADMINWINDOW_H
