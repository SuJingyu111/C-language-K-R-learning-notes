# Chapter 1

EOF needs to be held by an int. So when doing ``while (c != EOF)``, c has to be an int.

In code as follows:
```C
while ((c = getchar()) != EOF)
```
c is a left value so it can be used in comparison. getchar assigns a value to c, and c is compared against EOF.


c is pass by value

### extern variables:
```C
extern char line[];
```
Common practive is to place definitions of all external variables at the beginning of the source file, and therefore all extern declarations can be omitted.

If variable used across files, then ``extern`` keyword is needed when declaring the variable in other files. Common practice is to put such variables in header file.
