#!/bin/bash
cd /var/www-shared/test/rdigital
chmod -R 777 platform_2014_testing
sudo rm -rf platform_2014_testing
rm public_html
drush make distro.make platform_2014_testing --no-gitinfofile --working-copy
cd /var/www-shared/test/rdigital/platform_2014_testing
drush si rdigital --db-url='mysql://root:root@localhost/rdigital' --site-name='R Digital Site' --account-pass=admin -y
cd /var/www-shared/test/rdigital
ln -s /var/www-shared/test/rdigital/platform_2014_testing public_html
chmod 777 files/ -R
