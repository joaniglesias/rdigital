#!/bin/bash
cd /var/www-shared/test/rdigital/uat
chmod -R 777 platform_2014_testing
sudo rm -rf platform_2014_testing
rm public_html
drush make distro.make platform_2014_testing --no-gitinfofile --working-copy
ln -s /var/www-shared/test/rdigital/uat/files platform_2014_testing/sites/default/files
cd /var/www-shared/test/rdigital/uat/platform_2014_testing
drush si rdigital --db-url='mysql://root:root@localhost/rdigital_uat' --site-name='R Digital Site' --account-pass=admin -y
cd /var/www-shared/test/rdigital/uat
ln -s /var/www-shared/test/rdigital/uat/platform_2014_testing public_html
chmod 777 files/ -R
