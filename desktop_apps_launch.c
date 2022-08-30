#include <stdio.h>
#include <gdk/gdk.h>

int main(int argc, char const *argv[])
{
  if (argc < 2)
  {
    fputs("At least one arg required\n", stderr);
    return 1;
  }

  GList *apps = g_app_info_get_all();

  GList *app = apps->next;
  while (app->next)
  {
    GAppInfo *app_info = app->data;
    if (!strcmp(g_app_info_get_display_name(app_info), argv[1]))
    {
      GError *error = NULL;

      if (!g_app_info_launch(app_info, NULL, NULL, &error))
        g_warning("Launching failed: %s\n", error->message);

      return 0;
    }
    app = app->next;
  }
  return 0;
}

// ./desktop_apps_launch "$(./desktop_apps_list | dmenu -r)"