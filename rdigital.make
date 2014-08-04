core = 7.x
api = 2

; Modules

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0-alpha2"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.3"
projects[panels][patch][1828684] = "http://drupal.org/files/1828684-layout-fix-6.patch"

projects[panels_everywhere][subdir] = "contrib"
projects[panels_everywhere][version] = "1.0-rc1"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.2"
projects[ctools][patch][1630820] = "http://drupal.org/files/1630820-ctools-access-33.patch"
projects[ctools][patch][1889364] = "http://drupal.org/files/ctools-allow_static_class_callbacks-1889364-1.patch"
projects[ctools][patch][1032218] = "http://drupal.org/files/ctools_context_optional_always_empty-1032218-5.patch"
projects[ctools][patch][1494860] = "http://drupal.org/files/ctools-dependent-js-broken-with-jquery-1.7-1494860-30.patch"
projects[ctools][patch][1739718] = "http://drupal.org/files/ctools-fix-warning-message-1739718-32.patch"

projects[entity][subdir] = "contrib"
projects[entity][download][type] = "git"
projects[entity][download][url] = "http://git.drupal.org/project/entity.git"
projects[entity][download][revision] = "5731f741e3366889e95b5357f1f85b0acc51a9fe"


projects[services][subdir] = "contrib"
projects[services][version] = "3.3"
projects[spyc][type] = library
projects[spyc][download][type] = file
projects[spyc][download][url] = http://spyc.googlecode.com/svn/trunk/spyc.php
projects[spyc][download][filename] = "../spyc.php"
projects[spyc][destination] = modules/contrib/services/servers/rest_server/lib

projects[views][subdir] = "contrib"
projects[views][version] = "3.7"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.x-dev"

//projects[content_access][subdir] = "contrib"
//projects[content_access][version] = "1.2-beta2"

//projects[acl][subdir] = "contrib"
//projects[acl][version] = "1.0"

//projects[scheduler][subdir] = "contrib"
//projects[scheduler][version] = "1.1"

projects[views_php][subdir] = "contrib"
projects[views_php][version] = "1.x-dev"

projects[date][subdir] = "contrib"
projects[date][version] = "2.6"

projects[abt][subdir] = "contrib"
projects[abt][version] = "1.5"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.7"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

;Modules for development

projects[devel][subdir] = "develop"
projects[devel][version] = "1.3"

projects[features][subdir] = "develop"
projects[features][version] = "2.0-rc1"

;projects[features_extra][subdir] = "develop"
;projects[features_extra][version] = "1.0-beta1"
