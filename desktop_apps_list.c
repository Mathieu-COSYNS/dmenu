#include <stdio.h>
#include <gdk/gdk.h>

int main(int argc, char const *argv[])
{
  GList *apps = g_app_info_get_all();

  GList *app = apps->next;
  while (app->next)
  {
    GAppInfo *app_info = app->data;
    printf("%s %s\n", g_app_info_get_id(app_info), g_app_info_get_display_name(app_info));
    app = app->next;
  }
  return 0;
}
