EOF needs to be held by an int. So when doing ``while (c != EOF)``, c has to be an int.

In code as follows:
```C
while ((c = getchar()) != EOF)
```
c is a left value so it can be used in comparison. getchar assigns a value to c, and c is compared against EOF.