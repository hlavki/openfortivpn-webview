#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QWebEnginePage>

class WebPage : public QWebEnginePage {
    Q_OBJECT

public:
    explicit WebPage(QObject *parent = nullptr);
    explicit WebPage(QWebEngineProfile *profile, QObject *parent = nullptr);

protected:
    bool certificateError(const QWebEngineCertificateError &error) override;
};

#endif // WEBPAGE_H
