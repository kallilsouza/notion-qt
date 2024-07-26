// main.cpp

#include <QApplication>
#include <QMainWindow>
#include <QWebEngineView>
#include <QWebEngineProfile>
#include <QDir>

class MainWindow : public QMainWindow
{
public:
    MainWindow()
    {
        auto *webView = new QWebEngineView(this);

        auto *profile = new QWebEngineProfile("PersistentStorage", this);
        profile->setPersistentStoragePath(QDir::homePath() + "/.notion");
        profile->setPersistentCookiesPolicy(QWebEngineProfile::AllowPersistentCookies);

        auto *page = new QWebEnginePage(profile, this);
        webView->setPage(page);

        webView->setUrl(QUrl("https://notion.so"));
        setCentralWidget(webView);

        setWindowTitle("Notion");
        showMaximized();
    }
};

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    return app.exec();
}
