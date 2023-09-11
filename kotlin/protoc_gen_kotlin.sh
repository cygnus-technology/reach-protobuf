rm -rf ../../reachprotocol/src/main/java/com/cygnusreach/reachprotocol/proto
protoc -I=../proto --kotlin_out=../../reachprotocol/src/main/java --java_out=../../reachprotocol/src/main/java reach.proto
