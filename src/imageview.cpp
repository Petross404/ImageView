#include "imageview.h"

// ImageView::ImageView( QWidget *parent ) :
// 	QMainWindow( parent )
// {
// // 	QScopedPointer<QLabel> mainLabel( new QLabel );
// // 	QScopedPointer<QPushButton> pushBtn( new QPushButton( tr( "&Exit" ) ) );
// // 	QScopedPointer<QWidget> myCentralWidget( new QWidget );
// // 	QScopedPointer<QGridLayout> gridLayout( new QGridLayout );
// // 	QScopedPointer<QGridLayout> labelLayout( new QGridLayout );
// // 	QScopedPointer<QGridLayout> btnLayout( new QGridLayout );
// // 
// // 	setCentralWidget( myCentralWidget.data() );
// // 	centralWidget()->setLayout( gridLayout.data() );
// // 
// // 	gridLayout->addLayout( labelLayout.data(), 0, 0 );;
// // 	gridLayout->addLayout( btnLayout.data(), 1, 0 );
// // 
// // 	labelLayout->addWidget( mainLabel.data(), 0, 0 );
// // 	btnLayout->addWidget( pushBtn.data(), 0, 0 );
// }

ImageView::ImageView(QWidget* parent)
  : KXmlGuiWindow(parent)
{
	
}

