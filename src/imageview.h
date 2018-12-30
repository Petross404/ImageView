#ifndef IMAGEVIEW_H
#define IMAGEVIEW_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>

#include <KXmlGui/KXmlGuiWindow>

class ImageView : public KXmlGuiWindow
{

public:
	explicit ImageView( QWidget *parent = 0 );

private:
	void setupActions();
};

#endif // IMAGEVIEW_H
