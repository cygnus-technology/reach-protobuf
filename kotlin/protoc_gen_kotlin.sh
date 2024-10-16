rm -rf ../../reachprotocol/src/main/proto
protoc -I=../proto --kotlin_out=../../java --java_out=../../java reach.proto
