# README

This is a submodule to a Cygnus Reach project. 

### What is this repository for?

* Cygnus Reach communicates using protobufs.  This repository contains the protobuf definition files as well as the protobuf tools necessary to generate code for the various client formats.

### How do I get set up?

* Clone or fork the project that contains this repository.  That might be for an embedded device (reacher-pb) or a mobile app or a web page".
  * Follow any more explicit instructions there.  For instance, the reacher-mp project includes an "update_proto.bat" to rebuild the necessary proto files.
* The repository contains a prebuilt set of C files in ansic/built.  You can use these directly.  If you need to change the .proto files or otherwise regenerate them you will need to go a little deeper into the world of protobufs.
* You can regenerate the .pb files using the bitbucket pipeline.  
  * From the reach_proto project, selec pipeline and select the latest.
  * Choose "Generate C code from proto files".
  * Select "Artifacts" and download the resulting files.  Use thse to replace those in the built directory.
* To rebuild the .pb files locally:
  * Install several tools:
    * cmake
    * python
    * protoc
    * cygwin and gcc, etc.
      * You may need to remove extra junk from the cygwin path.
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
