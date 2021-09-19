#include "ls.h"

void ls_files(const char *path)
{
  DIR *dir;
  struct dirent *entry;
  struct stat file_info;

  dir = opendir(path);

  if (dir)
  {
    printf("Path %s\n\n", path);
    while (entry = readdir(dir))
    {
      if (entry->d_name[0] == '.')
        continue;
      printf("%s ", entry->d_name);
      if (stat(entry->d_name, &file_info) == 0)
        printf("(%ld bytes)", file_info.st_size);
      printf("\n");
    }
  }
  else
    printf("Could not find the \"%s\" directory\n", path);

  closedir(dir);
}