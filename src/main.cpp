#include "imageview.h"

#include <cstdlib>
#include <QtWidgets/QApplication>
#include <QtCore/QCommandLineParser>

#include <KCoreAddons/KAboutData>
#include <KI18n/KLocalizedString>

int main( int argc, char *argv[] )
{
	QApplication app( argc, argv );
	KLocalizedString::setApplicationDomain("ImageView");

	KAboutData aboutData(
		QStringLiteral("ImageView"), 
		i18n("Image View"), 
		QStringLiteral("0.1"), 
		i18n("It wants to be your next ImageView(er)"), 
		KAboutLicense::GPL,
		i18n("(c) 2018"), 
		i18n("Any text here.."), 
		QStringLiteral("github.com/Petross404"),
		QStringLiteral("bugs")
	  );

	aboutData.addAuthor(i18n("Petross404"), i18n("ImageView"));
	KAboutData::setApplicationData(aboutData);
	
	QCommandLineParser parser;
	aboutData.setupCommandLine(&parser);
	parser.process(app);
	aboutData.processCommandLine(&parser);

	ImageView* window = new ImageView();
	window->show();

	return app.exec();
}

