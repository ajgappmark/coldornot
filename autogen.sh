#! /bin/bash
#
# autogen.sh
# Philippe Loctaux
#

cd src/;
./configure;
make;
mv coldornot ../;
cd ../;

# End