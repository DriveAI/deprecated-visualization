#include "VisualizationWindow.h"

VisualizationWindow::VisualizationWindow(QWidget *p) : QGLWidget(p) {

}

bool VisualizationWindow::initFrames() {
	return true;
}

void VisualizationWindow::initializeGL() {}

void VisualizationWindow::resizeGL(int w, int h) {}

void VisualizationWindow::paintGL() {}
