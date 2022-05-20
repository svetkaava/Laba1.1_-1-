#include <GL/freeglut.h>


static void RenderSceneCB() //функция отображения на экран
{
    glClear(GL_COLOR_BUFFER_BIT); //очистка буфера кадра
    glutSwapBuffers();//функция просит GLUT поменять фоновый буфер и буфер кадра местами
}

static void InitializeGlutCallbacks() //функция обратного вызова
{
    glutDisplayFunc(RenderSceneCB);//отрисовка 1 кадра
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv); //инициализируем GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); //настраиваем 2 опции. Первая включает двойную буферизацию
    //(отрисовка будет происходить в фоновый буфер, в то время как другой буфер отображается). Вторая-буфер цвета
    glutInitWindowSize(1024, 768);//создаем окно и задаем ему параметры
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tutorial 01"); //заголовок окна

    InitializeGlutCallbacks();

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);//вызов, устанавливает цвет, использующийся во время очистки буфера кадра

    glutMainLoop();//вызов передаёт контроль GLUT'у

    return 0;
}