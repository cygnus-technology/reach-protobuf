rm -rf generated
mkdir generated
protoc -I=../proto --cpp_out=./generated services.proto reach.proto