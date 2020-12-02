# C_Compiler_Coursework
This project was done as coursework for a 2nd year Language Processing Module. 
The aim was to build an ANSI C to python converter the coude for which is located in the 
[translator](https://github.com/Silvertrousers/C_Compiler_Coursework/tree/master/translator) folder 
and then to build a an ANSI C to MIPS 1 compiler the code for which is located in the 
[compiler](https://github.com/Silvertrousers/C_Compiler_Coursework/tree/master/compiler) folder. 

# Contributors

Cyrus Goodarzi
Github: [Silvertrousers](https://github.com/Silvertrousers)

Garham Amos Kwon
Github: [Drakvor](https://github.com/Drakvor)

# Build and use Instructions

The program is built using the command:
<pre><code>make bin/c_compiler
</code></pre>

The translator function is invoked using the flag --translate, with the source file and output file specified on the command line:

<pre><code>bin/c_compiler --translate [source-file.c] -o [dest-file.py]
</code></pre>

The compilation function is invoked using the flag -S, with the source file and output file specified on the command line:

<pre><code>bin/c_compiler -S [source-file.c] -o [dest-file.s]
</code></pre>
Command-line arguments should always be in the above order, and there should be no spaces in source or destination paths.
# Coursework Specifications
The specifications provided by the lecturer in charge of this coursework are provided as follows:
-[General](https://github.com/Silvertrousers/C_Compiler_Coursework/blob/master/READMES/CW_spec_readme.md)
-[C to Python Translator](https://github.com/Silvertrousers/C_Compiler_Coursework/blob/master/READMES/c_translator.md)
-[Problem scope and templates for C to python translation
](https://github.com/Silvertrousers/C_Compiler_Coursework/blob/master/READMES/c_translator_templates.md)
-[C to MIPS 1 compiler](https://github.com/Silvertrousers/C_Compiler_Coursework/blob/master/READMES/c_compiler.md)

These can alose be located in the [READMES](https://github.com/Silvertrousers/C_Compiler_Coursework/tree/master/READMES) folder.
