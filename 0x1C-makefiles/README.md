# Makefiles
* The make utility automatically determines which pieces of a large program need to be recompiled, and issues commands to recompile them.
* You need a file called a makefile to tell make what to do. Most often, the makefile tells make how to compile and link a program.
## What a Rule Looks Like
A simple makefile consists of “rules” with the following shape:
	target … : prerequisites …
        	recipe
        	…
        	…
* A target is usually the name of a file that is generated by a program; examples of targets are executable or object files. A target can also be the name of an action to carry out, such as ‘clean’.
* A prerequisite is a file that is used as input to create the target. A target often depends on several files.
* A recipe is an action that make carries out. A recipe may have more than one command, either on the same line or each on its own line. Please note: you need to put a tab character at the beginning of every recipe line! 
