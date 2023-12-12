#include "webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEnginePage(parent) {
}

WebPage::WebPage(QWebEngineProfile *profile, QWidget *parent) : QWebEnginePage(profile, parent) {
}

void WebPage::certificateError(const QWebEngineCertificateError &certificateError) {
    // TODO: conditional treatment
    // return error.isOverridable();
}
