rm -rf generated
mkdir generated
./nanopb/generator/nanopb_generator.py -I../proto --output-dir=./generated services.proto reach.proto