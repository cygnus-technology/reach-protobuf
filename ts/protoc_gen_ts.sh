mkdir generated
protoc --plugin=./node_modules/.bin/protoc-gen-ts_proto -I=../proto --ts_proto_out=./generated services.proto reach.proto