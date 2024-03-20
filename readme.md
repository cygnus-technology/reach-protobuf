# README

This repository contains the reach.proto file that defines the communication protocol used by Cygnus Reach applications. 

### What is this repository for?

* Cygnus Reach communicates using a protocod define in protobufs.  This repository contains the protobuf definition files as well as the protobuf tools used to generate code for the various client formats.

### How do I get set up?

* Clone or fork the project that contains this repository.  That might be for an embedded device (reach-silabs) or a mobile app or a web page.
  * Follow any more explicit instructions there.  For instance, the reac-silabs project includes an "update_proto.bat" to rebuild the necessary proto files.
* The ansic folder configures a cmake build to generate the reach.pb.h and reach.pb.c artifacts required for C applications.  
* Other languages typically use native tools to generate bindings.
* The reach-c-stack repository contains a prebuilt set of C/H files.  These are normally used directly.  If you need to change the .proto files or otherwise regenerate them you will need to go a little deeper into the world of protobufs.
  * Use the github pipeline provided, or
  * Build the files locally.
* To rebuild the .pb files locally:
  * Install several tools:
    * cmake
    * python
    * protoc
    * cygwin and gcc, etc.
      * You may need to remove extra junk from the cygwin path.
    * A working version (0.4.7) of nanopb is included locally
  * To build the C language files:
    * cd into ansic.
    * mkdir build (or cd into build and rm -r * for clean)
    * Run cmake to generate the build files
      * "cmake ../ ./" will invoke the microsoft compiler by default
      * Using cygwin, "cmake -G "Unix Makefiles" ../ ./" will invoke gcc by default.
      * Other -G options may be appropriate for you.
    * Build the files:
      * cmake --build ./ builds with what is native, Microsoft on Windows.
      * make builds with Linux Makefiles.
    * Either copy these to the built directory or exclude the built directory and point at the build directory that the make populates.
* The file "reach_proto_sizes.h" is created by proto\extract_sizes.py using reach.options.  The C code uses this H file.

### Contribution guidelines

* Feel free to post issues.  The team at i3 will try to respond in a timely fashion.
