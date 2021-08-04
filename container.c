
#include <gtk/gtk.h>

int main(int argc, char **argv) {

gtk_init(&argc, &argv);

GtkWidget *window;
GtkWidget *button1;
GtkWidget *button2;


window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

button1 = gtk_button_new_with_label("button1");
button2 = gtk_button_new_with_label("button2");

gtk_container_add(GTK_CONTAINER(window), button1);

gtk_container_remove(GTK_CONTAINER(window), button1);

gtk_container_add(GTK_CONTAINER(window), button2);

gtk_widget_show_all(window);

gtk_main();

return 0;
}

