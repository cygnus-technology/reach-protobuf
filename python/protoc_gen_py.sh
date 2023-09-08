rm -rf generated
mkdir generated
protoc -I=../proto --python_out=./generated services.proto reach.proto