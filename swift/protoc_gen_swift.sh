protoc \
    -I=../proto \
    --swift_opt=Visibility=Public \
    --swift_out=../ \
    reach.proto
