<h1>Variadic functions</h1>
<p>Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is</br><small>int check(int a, double b, ...);</small></p>
<p>Variadic functions must have at least one named parameter, so, for instance,</br><small>char * wrong(...);</small></br>is not allowed in C. (In C++ andC23,[2] such a declaration is permitted.) In C, a comma must precede the ellipsis if a named parameter is specified; in C++, it is optional.</p>
<h2>Defining variadic functions</h2>
<p>long func(char, double, int, ...);</p>
<p>long func(char a, double b, int c, ...)
{
    /* ... */
}
</p>
