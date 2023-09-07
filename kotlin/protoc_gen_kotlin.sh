mkdir generated
protoc -I=../proto --kotlin_out=./generated services.proto reach.proto