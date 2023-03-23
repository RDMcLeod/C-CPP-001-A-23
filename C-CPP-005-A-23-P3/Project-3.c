main() /* count lines, words, chars in input */
{


int c, nl, nw,nc, inword;

inword = NO;
n1 = nw = nc = 0;
while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
        ++nc;
    if (C == '' || c == "\n" || c == "\t")
        inword = NO;
    else if (inword == NO) (
        inword = YES; 
        ++nw;
    }
}
printf( "%d %d %d\n", nl, nw, nc);

}