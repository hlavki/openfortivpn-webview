#include "webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEnginePage(parent) {
}

bool WebPage::certificateError(const QWebEngineCertificateError &error) {
    // TODO: conditional treatment
    return error.isOverridable();
}
