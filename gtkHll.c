#include <gtk/gtk.h>
#include <stdio.h>

int main(int numArgumentos, char *nomArgumentos[]) {
  GtkBuilder *arquivo;
  GtkWidget *obj_tela;

  gtk_init(&numArgumentos, &nomArgumentos);

  arquivo = gtk_builder_new_from_file("Hello-Word.glade");

  obj_tela = GTK_WIDGET(gtk_builder_get_object(arquivo, "tela"));

  g_signal_connect(obj_tela, "destroy", G_CALLBACK(gtk_main_quit), NULL);

  gtk_widget_show(obj_tela);

  gtk_main();

  printf("\n\tolaaaaa\n");
}
