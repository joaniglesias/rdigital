#!/bin/bash
cd /var/www-shared/test/rdigital/uat/assets
mysqldump -u root -proot -h localhost drupalm1_rdigital --lock-tables=false > drupalm1_rdigital.mysql
