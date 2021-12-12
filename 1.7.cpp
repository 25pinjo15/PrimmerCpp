/* This program have a incorect nested comment and do not compile

/*
 * comment pairs /*  */ cannot nest.
 * "cannot nest" is considered source code,
 *  as is the rest of the program
 */

int main()
{
    return 0;
}