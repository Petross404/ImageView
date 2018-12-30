cmake_minimum_required(VERSION 2.8.11)
project(ImageView)

set(QT_MIN_VERSION "5.3.0")
set(KF5_MIN_VERSION "5.2.0")

find_package(ECM 1.0.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)


include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)
include(FeatureSummary)

find_package(Qt5 ${QT_MIN_VERSION} CONFIG REQUIRED COMPONENTS 
	Core    # QCommandLineParser, QStringLiteral
	Widgets # QApplication 
)

find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS
	CoreAddons      # KAboutData
	I18n            # KLocalizedString
	XmlGui          # KXmlGuiWindow
)

set(ImageView_SRC
	src/main.cpp
	src/imageview.cpp
)

feature_summary(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)

add_executable(ImageView ${ImageView_SRCS})

target_link_libraries(ImageView
	Qt5::Widgets
	KF5::CoreAddons
	KF5::I18n
	KF5::XmlGui
)

install(TARGETS ImageView  ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})
