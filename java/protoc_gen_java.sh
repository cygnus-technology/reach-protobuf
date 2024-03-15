rm -rf generated
mkdir generated
protoc -I=../proto --java_out=./generated reach.proto