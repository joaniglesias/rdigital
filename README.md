R Digital testing
=========

R Digital Website.


To build a platform from the install profile, first grab the distro.make file
from GitHub:

    https://github.com/joaniglesias/rdigital/blob/master/distro.make

This file does not change very often. It specifies the version of Drupal core
to download and which patches (if any) are required for Drupal core.

Then use Drush make to build the platform, replacing 'rdigital-web' with your
required folder name, and using the --working-copy option if you want to
push changes to the profile back to GitHub:

    drush make distro.make rdigital-web --working-copy --no-gitinfofile

Then use the Drupal installer and select "Rdigital" as the install profile. Or
install using Drush:

    drush si rdigital --db-url='mysql://user:pass@localhost/dbname' --site-name='R Digital Site'  --account-pass='admin_password' -y

Then modify the file folder permissons to allow users to Upload images:

    chmod 777 rdigital-web/sites/default/files/ -R
