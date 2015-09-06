<?php
  global $language;
  $lang_code = ($language->language == 'en') ? '' : $language->language;
  $path = current_path();
  $path_params = explode("/", $path);
  $patient_nid = $path_params[1];
?>

<!-- Patient Region -->
<?php $reg_machine_name='patient'; ?>

<div class="stat-panel">
  <div class="stat-cell no-bg valign-middle bordered">
    <i class="fa fa-list-alt bg-icon"></i>
    <span>
      <?php print $content['patient']; ?>
    </span>
  </div>
</div>

<div class="panel-group" role="tablist" aria-multiselectable="true">

  <!-- Patient Details Region -->
  <?php $reg_machine_name='patient-details'; ?>
  <div class="panel panel-rd-blue">

    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-rd-dark-blue pull-right collapsed" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon accordion-toggle" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print t('Patient Details'); ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body row">
        <div class="col-xs-6">
          <?php print $content['patient_details_left']; ?>
        </div>
        <div class="col-xs-6">
          <?php print $content['patient_details_right']; ?>
        </div>
      </div>
    </div>
  </div>

  <!-- Form Region -->
  <?php $reg_machine_name='rdforms'; ?>
  <div class="panel panel-rd-blue">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <div class="pull-right">
        <a class="btn btn-rd-dark-blue" data-toggle="modal" data-target="#CreateForm">
          <?php print t('Create Form'); ?>
        </a>
        <a class="btn btn-rd-dark-blue collapsed" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
          <span class="glyphicon accordion-toggle" aria-hidden="true">
          </span>
        </a>
      </div>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body">
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Measures Record Region -->
  <?php $reg_machine_name='measures_record'; ?>
  <div class="panel panel-rd-green">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-success pull-right collapsed" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon accordion-toggle" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body">
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Treatment Details Region -->
  <?php $reg_machine_name='treatment-details'; ?>
  <div class="panel panel-rd-red">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-rd-dark-red pull-right collapsed" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon accordion-toggle" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print t('Treatment Details'); ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body row">
        <div class="col-xs-6">
          <?php print $content['treatment_details_left']; ?>
        </div>
        <div class="col-xs-6">
          <?php print $content['treatment_details_right']; ?>
        </div>
      </div>
    </div>
  </div>

  <!-- Initial Comments Region -->
  <?php $reg_machine_name='initial_comments'; ?>
  <div class="panel panel-rd-red">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-rd-dark-red pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon accordion-toggle" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body" id='initial-comments-area'>
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Measures Region -->
  <?php $reg_machine_name='measures'; ?>
  <div class="panel panel-rd-red">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-rd-dark-red pull-right collapsed" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon accordion-toggle" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body" id='measures-area'>
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>

  <!-- Final Comments Region -->
  <?php $reg_machine_name='final_comments'; ?>
  <div class="panel panel-rd-red">
    <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <a class="btn btn-rd-dark-red pull-right collapsed" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
        <span class="glyphicon accordion-toggle" aria-hidden="true">
        </span>
      </a>
      <h4 class="panel-title" style="margin-top: 7.5px;">
        <?php print $layout['regions'][$reg_machine_name]; ?>
      </h4>
    </div>
    <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
      <div class="panel-body" id='final-comments-area'>
        <?php print $content[$reg_machine_name]; ?>
      </div>
    </div>
  </div>
</div>
<?php //dpm(get_defined_vars()); ?>

<!-- Treatment Actions Region -->
<?php $reg_machine_name='treatment_actions'; ?>
<div class="panel panel-default">
  <div class="panel-heading clearfix no-bg panel-padding" role="tab" id="heading-<?php print $reg_machine_name; ?>">
    <div class="pull-right">
      <a class="btn btn-danger btn-lg btn-labeled btn-outline" data-toggle="modal" data-target="#DeleteTreatment">
        <span class="btn-label icon fa fa-trash-o"></span>
        <?php print t('Delete Treatment'); ?>
      </a>
      <a class="btn btn-success btn-lg btn-labeled"  data-toggle="modal" data-target="#CloseTreatment">
        <span class="btn-label icon fa fa-check"></span>
        <?php print t('Close Treatment'); ?>
      </a>
    </div>
    <h4 class="text-default text-lg text-semibold" style="margin-top: 7.5px;">
      <?php print t('ACTIONS'); ?>
    </h4>
  </div>
</div>

<!-- Modal Create Form -->
<div class="modal fade in" id="CreateForm" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="false">
  <div class="modal-dialog animated shake">
    <div class="modal-content">
      <div class="modal-header bg-rd-blue">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <h4 class="modal-title" id="myModalLabel">
          <?php print t('Create Form'); ?>
        </h4>
      </div>
      <div class="modal-body"><div class="te"></div>
        <?php print $content['rdforms_actions']; ?>
      </div>
<!--      <div class="modal-footer">
        <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
        <button type="button" class="btn btn-primary">Save changes</button>
      </div>-->
    </div>
  </div>
</div>

<!-- Modal Create Form -->
<!-- <div class="modal fade" id="DeleteTreatment" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
        <h3 class="modal-title" id="myModalLabel">
          <?php print t('Delete Treatment'); ?>
        </h3>
      </div>
      <div class="modal-body"><div class="te"></div>
        <h4> <?php print t('Are you sure you want to delete this treatment?'); ?>
        </h4>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-primary" data-dismiss="modal">No</button>
        <a type="button" class="btn btn-default" href="<?php print '/delete_' . $path; ?>">Yes</a>
      </div>
    </div>
  </div>
</div> -->

<!-- Modal Delete Treatment -->
<div class="modal modal-alert modal-warning fade in" id="DeleteTreatment" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <i class="fa fa-warning"></i>
      </div>
      <div class="modal-title"><?php print t('Delete Treatment'); ?></div>
      <div class="modal-body"><?php print t('Are you sure you want to delete this treatment?'); ?></div>
      <div class="modal-footer">
        <button type="button" class="btn btn-warning" data-dismiss="modal">
          <?php print t('No'); ?>
        </button>
        <a type="button" class="btn btn-default" href="<?php print '/' . $lang_code . '/delete_' . $path; ?>">
          <?php print t('Yes'); ?>
        </a>
      </div>
    </div>
  </div>
</div>

<!-- Modal Close Treatment -->
<div class="modal modal-alert modal-warning fade in" id="CloseTreatment" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <i class="fa fa-warning"></i>
      </div>
      <div class="modal-title"><?php print t('Close Treatment'); ?></div>
      <div class="modal-body"><?php print t('If you close the treatment without saving the data, they will be lost. Did you save all comments and measures?'); ?></div>
      <div class="modal-footer">
        <button type="button" class="btn btn-warning" data-dismiss="modal">
          <?php print t('No'); ?>
        </button>
        <a type="button" class="btn btn-default" href="<?php print ('/' . $lang_code ); ?>">
          <?php print t('Yes'); ?>
        </a>
      </div>
    </div>
  </div>
</div>
