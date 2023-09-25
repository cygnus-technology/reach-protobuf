rm -rf generated
mkdir generated
npm i
npx protoc --ts_out ./generated --proto_path ../proto reach.proto