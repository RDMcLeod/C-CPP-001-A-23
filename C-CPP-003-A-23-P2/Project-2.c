main()            /* count lines in input */
{
int c, nl;

nl = 0;
while ((c = getChar ()) != EOF)
    if (c == "\n")
    ++nl;
printf("%d\n", nl);




}