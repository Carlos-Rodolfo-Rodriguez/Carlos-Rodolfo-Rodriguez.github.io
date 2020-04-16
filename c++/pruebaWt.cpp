#include <Wt/WApplication>
#include <Wt/WBreak>
#include <Wt/WContainerWidget>
#include <Wt/WLineEdit>
#include <Wt/WPushButton>
#include <Wt/WText>

class AplicacionHola : public Wt::WApplication
{
public:
    AplicacionHola(const Wt::WEnvironment & env);

private:
    Wt::WLineEdit * nameEdit_;
    Wt::WText * greeting_;
    void greet();
};

AplicacionHola::AplicacionHola(const Wt::WEnvironment& env) : Wt::WApplication(env) {
    setTitle("¡Hola Mundo!");

    root()->addWidget(new Wt::WText("¿Cuál es tu nombre? "));
    nameEdit_ = new Wt::WLineEdit(root());
    Wt::WPushButton *boton = new Wt::WPushButton("¡Saludame, che!) ", root());
    root()->addWidget(new Wt::WBreak());
    greeting_ = new Wt::WText(root());
    boton->clicked().connect(this, &AplicacionHola::greet);
}

void AplicacionHola::greet()
{
    greeting_->setText("¡Hola " + nameEdit_->text());
}

Wt::WApplication * createApplication(const Wt::WEnvironment& env) {
    return new AplicacionHola(env);
}

int main(int argc, char **argv) {
    setlocale(LC_ALL, "spanish");
    return Wt::WRun(argc, argv, &createApplication);
}
