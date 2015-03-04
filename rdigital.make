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

projects[ckeditor][subdir] = "contrib"
projects[ckeditor][version] = "1.13"

projects[better_formats][subdir] = "contrib"
projects[better_formats][version] = "1.0-beta1"

projects[editablefields][subdir] = "contrib"
projects[editablefields][version] = "1.x-dev"

projects[button_field][subdir] = "contrib"
projects[button_field][version] = "1.0-beta1"

projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"

projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.11"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.0"

projects[potx][subdir] = "contrib"
projects[potx][version] = "1.0"

projects[views_distinct][subdir] = "contrib"
projects[views_distinct][version] = "1.0-rc1"

projects[lang_dropdown][subdir] = "contrib"
projects[lang_dropdown][version] = "2.5"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[entityform][subdir] = "contrib"
projects[entityform][version] = "2.0-rc1"

projects[prepopulate][subdir] = "contrib"
projects[prepopulate][version] = "2.0"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.x-dev"

projects[i18nviews][subdir] = "contrib"
projects[i18nviews][version] = "3.x-dev"



; Modules for development

projects[devel][subdir] = "develop"
projects[devel][version] = "1.3"

projects[features][subdir] = "develop"
projects[features][version] = "2.0-rc1"

;projects[features_extra][subdir] = "develop"
;projects[features_extra][version] = "1.0-beta1"


; Libraries

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.3/ckeditor_3.6.3.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"

; Themes

projects[bootstrap][subdir] = "contrib"
projects[bootstrap][version] = "3.1-beta2+24-dev"
