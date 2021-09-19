#include <ls.h>
#include <string.h>

int main(int argc, char const **argv)
{
  char path[255] = { 0 };
  
  if (argc < 2) {
    getcwd(path, 255);
  }
  else {
    strncpy(path, argv[1], strlen(argv[1]));
  }

  ls_files(path);

  return 0;
}
