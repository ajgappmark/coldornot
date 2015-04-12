#! /bin/bash
#
# autogen.sh
# Philippe Loctaux
#

cd src/;
./configure;
make;
sudo make install;
mv coldornot ../;
cd ../;

# End