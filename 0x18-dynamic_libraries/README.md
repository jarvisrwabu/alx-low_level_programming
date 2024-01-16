A dynamic library, often referred to as a shared library, is a type of library that contains code and data that can be used by multiple programs simultaneously. Unlike static libraries, which are incorporated into the executable during the compilation process, dynamic libraries remain separate from the executable file and are loaded into memory only when needed during the program's execution.

Why use dynamic libraries ?

Dynamic libraries provide a code that can be loaded anywhere in the memory. Once loaded, the library code can be used by any number of programs. This way the size of programs using dynamic library and the memory footprint can be kept low as possible. The memory is conserved while using dynamic libraries since each application or program can access the dynamic library without needing an individual copy, as would be the case, if we were using static libraries.
Although dynamic libraries afford the ability to alter source code without recompiling the entire program, static libraries’ execution speed at run-time is faster because the object code for the functions within the library are already in the executable file. As a result, multiple calls to functions are handled more efficiently than when using dynamic libraries.
How to Create a Dynamic Library (Linux) ?

**Step 1: Compiling with Position Independent Code :**

To create a Dynamic Library in Linux we are using the gcc command with the -c option to generate the object files (.o) from the source files (.c) in the current directory. Then the -fPICflag is to make the code position independent. Position Independent Code means that the generated machine code is not dependent on being located at a specific address in order to work.

`gcc -c -fPIC *.c`

Next, we are going to put together those objects files into one library. To do this as a Dynamic Library we also use gcc but with the -shared option.
This option will produce a shared object which can then be linked with other objects to form an executable. Not all systems support this option. For predictable results, you must also specify the same set of options used for compilation (-fpic, -fPIC, or model suboptions) when you specify this linker option

**Step 2: Creating a shared library from an object file**

The -o is to specify the name of the file you want it to have.

`gcc -shared -o libdynamic.so *.o`

This way you must have your library created. To verify that you did it and have the right functions as dynamic symbols you can use:

`nm -D libdynamic.so`

That’s it ! You have your Dynamic Library created!
Telling GCC where to find the shared library

first we can find out the dynamic libraries executables loads when run.
For that we use the ldd command.

```
$ ldd len 
    linux-vdso.so.1 =>  (0x00007fff5d1d2000)
    libdynamic.so => not found
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f74c6bb9000)
    /lib64/ld-linux-x86-64.so.2 (0x0000556be5b82000)

```
Here we notice that the library is not found. For this to work, you have to add the location of your library files into the environmental variable to know where to find the functions.

`export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

After that the library is found in the PATH.

```
$ ldd len
    linux-vdso.so.1 =>  (0x00007fff41ae9000)
    libdynamic.so => ./libdynamic.so (0x00007fd4bf2d9000)
    libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fd4beef6000)
    /lib64/ld-linux-x86-64.so.2 (0x0000557566402000)

```
We can also use ldconfig to creates the necessary links and cache to the most recent shared libraries found in the directories specified on the command line, with the file /etc/ld.so.conf, and in the trusted directories (/lib and /usr/lib). The cache is used by the run-time linker, ld.so or ld-linux.so. ldconfig checks the header and filenames of the libraries it encounters when determining which versions should have their links updated.
Linking with a shared library

To use a shared library you have to compile it with GCC.
First we use the standards arguments like compiling any file :

```
    gcc : name of the compiler
    -std=gnu89 : the version of the program
    main.c : the file we want to execute
    o : Change the name, here it’s called “quote”

```

`$ gcc -std=gnu89 main.c -L. -lmy -o quote`

You can notice the -L. argument that specifies the path to the library .We can use -L. in order to point to the current directory. Here the . refer to the current directory. We could also specify one like -L/user/home/tmp

Then we just have to call our program with :

`$ ./quote`

**SUMMARY:**

Static Libraries

    Get copied directly into your executable.
    The executable is not updated automatically when there is a change in the library.
    Larger executable files.
    Uses the ar and runlib commands.
    Have a prefix lib and an extension .a.

Dynamic Libraries

    Only the address of the library is referenced in the executable.
    Executable gets updated when a new version of the library is encountered.
    If versioning is not used, It will overwrite the previous library versions, possibly breaking your executable.
    Smaller executable files.
    Uses the gcc with the flags -fPIC and -shared.
    Have a prefix lib and extension .so.


```python

```
