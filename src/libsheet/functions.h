#pragma once

#include <string>
#include <thirdparty/gtk-3.0/gtk/gtk.h>

int checking_for_errors(std::string str);

void update_task_list();

void add_new_task(GtkWidget* widget, gpointer data);

void update_task_status(GtkWidget* button, gpointer data);

void delete_task(GtkWidget* button, gpointer data);

void update_task_list();