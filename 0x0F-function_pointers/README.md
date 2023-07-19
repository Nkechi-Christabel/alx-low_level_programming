<h1>Function Pointers</h1>
<p>A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say</p>
<small>int func(int a, float b);</small>
<p>and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:</p>
<small>/* function returning pointer to int */</br>int *func(int a, float b);</br></br>/* pointer to function returning int */</br>int (*func)(int a, float b);</small>
