rm -rf generated
mkdir generated
protoc -I=../proto --csharp_out=./generated services.proto reach.proto