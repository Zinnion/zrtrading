# zrtrading
R - Zinnion SDK


`~/.R/Makevars`


```
PKG_CPPFLAGS=-I/tmp
PKG_LIBS = -L/tmp -lztrading \
    `$(R_HOME)/bin/Rscript -e "Rcpp:::LdFlags()"`
```
