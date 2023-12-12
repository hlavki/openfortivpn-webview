#include "webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEnginePage(parent) {
}

void WebPage::certificateError(const QWebEngineCertificateError &error) {
    // TODO: conditional treatment
    // return error.isOverridable();
}
