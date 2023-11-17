protoc \
    -I=../proto \
    --swift_opt=Visibility=Public \
    --swift_out=../../ReachProtocol/Proto \
    reach.proto
