#!/bin/bash
cd /var/www-shared/test/rdigital
chmod -R 777 rdigital-web
sudo rm -rf rdigital-web
drush make distro.make rdigital-web --working-copy --no-gitinfofile
cd /var/www-shared/test/rdigital/rdigital-web
drush si rdigital --db-url='mysql://root:root@localhost/rdigital' --site-name='R Digital Site' --account-pass=admin -y
cd /var/www-shared/test/rdigital
chmod 777 rdigital-web/sites/default/files/ -R
