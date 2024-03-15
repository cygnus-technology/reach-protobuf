rm -rf generated
mkdir generated
protoc -I=../proto --csharp_out=./generated reach.proto