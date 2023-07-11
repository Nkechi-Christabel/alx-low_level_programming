<h1>Malloc</h1>
<p>The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.</p>
<p>When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.</p>

<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to explain to anyone, without the help of Google:</p>

<h2>General</h2>
<ul>
<li>What is the difference between automatic and dynamic allocation</li>
<li>What is malloc and free and how to use them</li>
<li>Why and when use malloc</li>
<li>How to use valgrind to check for memory leak</li>
</ul>
