rm -rf generated
mkdir generated
./nanopb/generator/nanopb_generator.py -I../proto --output-dir=./generated reach.proto