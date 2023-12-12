#include "webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEnginePage(parent) {
}

void WebPage::certificateError(const QWebEngineCertificateError &certificateError) {
    // TODO: conditional treatment
    // return error.isOverridable();
}
