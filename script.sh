#!/bin/bash
cd /var/www-shared/test/rdigital/dev
chmod -R 777 platform_2015
sudo rm -rf platform_2015
rm public_html
drush make distro.make platform_2015 --no-gitinfofile --working-copy
ln -s /var/www-shared/test/rdigital/dev/files platform_2015/sites/default/files
cd /var/www-shared/test/rdigital/dev/platform_2015
drush si rdigital --db-url='mysql://root:root@localhost/rdigital_dev' --site-name='R Digital Site' --account-pass=admin -y
cd /var/www-shared/test/rdigital/dev
ln -s /var/www-shared/test/rdigital/dev/platform_2015 public_html
chmod 777 files/ -R
