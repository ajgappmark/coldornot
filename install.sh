#! /bin/bash
#
# install.sh
# Philippe Loctaux
#

cd src/;
./configure;
make;
echo "You may enter your root password to install the program."
sudo make install;
mv coldornot ../;
cd ../;

# End
